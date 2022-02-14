
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cache {unsigned int populated_pages; int pg_cache_rwlock; } ;
struct rrdengine_instance {unsigned int max_cache_pages; struct page_cache pg_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct rrdengine_instance*) ;
 unsigned int FUNC_3 (struct rrdengine_instance*) ;
 int FUNC_4 (struct rrdengine_instance*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct rrdengine_instance *VAR_1, unsigned VAR_2)
{
    struct page_cache *VAR_3 = &VAR_1->pg_cache;
    unsigned VAR_4 = 0;
    int VAR_5 = 0;

    FUNC_0(VAR_2 < VAR_1->max_cache_pages);

    FUNC_5(&VAR_3->pg_cache_rwlock);
    if (VAR_3->populated_pages + VAR_2 >= FUNC_3(VAR_1) + 1) {
        FUNC_1(VAR_0,
              "==Page cache full. Trying to reserve %u pages.==",
              VAR_2);
        do {
            if (!FUNC_4(VAR_1))
                break;
            ++VAR_4;
        } while (VAR_3->populated_pages + VAR_2 >= FUNC_3(VAR_1) + 1);
        FUNC_1(VAR_0, "Evicted %u pages.", VAR_4);
    }

    if (VAR_3->populated_pages + VAR_2 < FUNC_2(VAR_1) + 1) {
        VAR_3->populated_pages += VAR_2;
        VAR_5 = 1;
    }
    FUNC_6(&VAR_3->pg_cache_rwlock);

    return VAR_5;
}
