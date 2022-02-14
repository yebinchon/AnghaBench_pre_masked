
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_9__ {TYPE_3__* elts; } ;
struct TYPE_10__ {TYPE_1__ formats; scalar_t__ combined_used; } ;
typedef TYPE_2__ ngx_rtmp_log_main_conf_t ;
struct TYPE_11__ {int ops; } ;
typedef TYPE_3__ ngx_rtmp_log_fmt_t ;
typedef int ngx_rtmp_handler_pt ;
struct TYPE_12__ {int * events; } ;
typedef TYPE_4__ ngx_rtmp_core_main_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 void* FUNC_1 (int *) ;
 int VAR_6 ;
 void* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_14)
{
    ngx_rtmp_core_main_conf_t *VAR_15;
    ngx_rtmp_handler_pt *VAR_16;
    ngx_rtmp_log_main_conf_t *VAR_17;
    ngx_array_t VAR_18;
    ngx_rtmp_log_fmt_t *VAR_19;
    ngx_str_t *VAR_20;

    VAR_17 = FUNC_2(VAR_14, VAR_9);
    if (VAR_17->combined_used) {
        if (FUNC_0(&VAR_18, VAR_14->pool, 1, sizeof(ngx_str_t)) != VAR_2) {
            return VAR_1;
        }

        VAR_20 = FUNC_1(&VAR_18);
        if (VAR_20 == ((void*)0)) {
            return VAR_1;
        }

        *VAR_20 = VAR_6;
        VAR_19 = VAR_17->formats.elts;

        if (FUNC_3(VAR_14, VAR_19->ops, &VAR_18, 0)
            != VAR_0)
        {
            return VAR_1;
        }
    }

    VAR_15 = FUNC_2(VAR_14, VAR_7);

    VAR_16 = FUNC_1(&VAR_15->events[VAR_3]);
    *VAR_16 = VAR_8;

    VAR_5 = VAR_13;
    VAR_13 = VAR_11;

    VAR_4 = VAR_12;
    VAR_12 = VAR_10;

    return VAR_2;
}
