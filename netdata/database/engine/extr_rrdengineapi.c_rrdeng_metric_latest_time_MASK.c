
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct rrdeng_collect_handle {struct pg_cache_page_index* page_index; } ;
struct pg_cache_page_index {int latest_time; } ;
struct TYPE_7__ {TYPE_2__* state; } ;
struct TYPE_5__ {struct rrdeng_collect_handle rrdeng; } ;
struct TYPE_6__ {TYPE_1__ handle; } ;
typedef TYPE_3__ RRDDIM ;


 int VAR_0 ;

time_t FUNC_0(RRDDIM *VAR_1)
{
    struct rrdeng_collect_handle *VAR_2;
    struct pg_cache_page_index *VAR_3;

    VAR_2 = &VAR_1->state->handle.rrdeng;
    VAR_3 = VAR_2->page_index;

    return VAR_3->latest_time / VAR_0;
}
