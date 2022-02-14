
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cache {int populated_pages; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;



__attribute__((used)) static void FUNC_0(struct rrdengine_instance *VAR_0, unsigned VAR_1)
{
    struct page_cache *VAR_2 = &VAR_0->pg_cache;

    VAR_2->populated_pages -= VAR_1;
}
