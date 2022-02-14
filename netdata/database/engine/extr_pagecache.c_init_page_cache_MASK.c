
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cache {int pg_cache_rwlock; scalar_t__ populated_pages; scalar_t__ page_descriptors; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rrdengine_instance*) ;
 int FUNC_2 (struct rrdengine_instance*) ;
 int FUNC_3 (struct rrdengine_instance*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct rrdengine_instance *VAR_0)
{
    struct page_cache *VAR_1 = &VAR_0->pg_cache;

    VAR_1->page_descriptors = 0;
    VAR_1->populated_pages = 0;
    FUNC_0(0 == FUNC_4(&VAR_1->pg_cache_rwlock));

    FUNC_2(VAR_0);
    FUNC_3(VAR_0);
    FUNC_1(VAR_0);
}
