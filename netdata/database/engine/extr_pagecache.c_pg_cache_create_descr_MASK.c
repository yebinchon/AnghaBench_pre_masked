
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_page_descr {int * pg_cache_descr; scalar_t__ pg_cache_descr_state; int * extent; int * id; void* end_time; void* start_time; scalar_t__ page_length; } ;


 void* VAR_0 ;
 struct rrdeng_page_descr* FUNC_0 (int) ;

struct rrdeng_page_descr *FUNC_1(void)
{
    struct rrdeng_page_descr *VAR_1;

    VAR_1 = FUNC_0(sizeof(*VAR_1));
    VAR_1->page_length = 0;
    VAR_1->start_time = VAR_0;
    VAR_1->end_time = VAR_0;
    VAR_1->id = ((void*)0);
    VAR_1->extent = ((void*)0);
    VAR_1->pg_cache_descr_state = 0;
    VAR_1->pg_cache_descr = ((void*)0);

    return VAR_1;
}
