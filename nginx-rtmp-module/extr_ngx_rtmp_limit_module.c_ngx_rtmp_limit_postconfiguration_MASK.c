
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_conn; TYPE_3__* shm_zone; } ;
typedef TYPE_1__ ngx_rtmp_limit_main_conf_t ;
typedef int ngx_rtmp_handler_pt ;
struct TYPE_5__ {int * events; } ;
typedef TYPE_2__ ngx_rtmp_core_main_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;
struct TYPE_6__ {int init; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int * FUNC_0 (int *) ;
 int VAR_5 ;
 void* FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_2 (int *,int *,int,int *) ;
 int VAR_11 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_12)
{
    ngx_rtmp_core_main_conf_t *VAR_13;
    ngx_rtmp_limit_main_conf_t *VAR_14;
    ngx_rtmp_handler_pt *VAR_15;

    VAR_13 = FUNC_1(VAR_12, VAR_6);

    VAR_15 = FUNC_0(&VAR_13->events[VAR_3]);
    *VAR_15 = VAR_7;

    VAR_15 = FUNC_0(&VAR_13->events[VAR_4]);
    *VAR_15 = VAR_8;

    VAR_14 = FUNC_1(VAR_12, VAR_9);
    if (VAR_14->max_conn == VAR_0) {
        return VAR_2;
    }

    VAR_14->shm_zone = FUNC_2(VAR_12, &VAR_11, VAR_5 * 2,
                                           &VAR_9);
    if (VAR_14->shm_zone == ((void*)0)) {
        return VAR_1;
    }

    VAR_14->shm_zone->init = VAR_10;

    return VAR_2;
}
