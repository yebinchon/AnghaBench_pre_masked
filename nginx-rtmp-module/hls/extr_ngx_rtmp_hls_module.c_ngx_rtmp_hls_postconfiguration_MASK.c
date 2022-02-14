
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_rtmp_handler_pt ;
struct TYPE_3__ {int * events; } ;
typedef TYPE_1__ ngx_rtmp_core_main_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *) ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_18)
{
    ngx_rtmp_core_main_conf_t *VAR_19;
    ngx_rtmp_handler_pt *VAR_20;

    VAR_19 = FUNC_1(VAR_18, VAR_8);

    VAR_20 = FUNC_0(&VAR_19->events[VAR_2]);
    *VAR_20 = VAR_14;

    VAR_20 = FUNC_0(&VAR_19->events[VAR_1]);
    *VAR_20 = VAR_9;

    VAR_4 = VAR_15;
    VAR_15 = VAR_11;

    VAR_3 = VAR_7;
    VAR_7 = VAR_10;

    VAR_5 = VAR_16;
    VAR_16 = VAR_12;

    VAR_6 = VAR_17;
    VAR_17 = VAR_13;

    return VAR_0;
}
