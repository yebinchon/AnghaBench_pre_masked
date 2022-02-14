
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cache {int pg_cache_rwlock; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;


 int FUNC_0 (struct rrdengine_instance*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rrdengine_instance *VAR_0, unsigned VAR_1)
{
    struct page_cache *VAR_2 = &VAR_0->pg_cache;

    FUNC_1(&VAR_2->pg_cache_rwlock);
    FUNC_0(VAR_0, VAR_1);
    FUNC_2(&VAR_2->pg_cache_rwlock);
}
