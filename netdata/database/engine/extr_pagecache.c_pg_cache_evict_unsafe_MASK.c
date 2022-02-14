
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pg_cache_evictions; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int flags; int * page; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rrdengine_instance*,int) ;

__attribute__((used)) static void FUNC_2(struct rrdengine_instance *VAR_1, struct rrdeng_page_descr *VAR_2)
{
    struct page_cache_descr *VAR_3 = VAR_2->pg_cache_descr;

    FUNC_0(VAR_3->page);
    VAR_3->page = ((void*)0);
    VAR_3->flags &= ~VAR_0;
    FUNC_1(VAR_1, 1);
    ++VAR_1->stats.pg_cache_evictions;
}
