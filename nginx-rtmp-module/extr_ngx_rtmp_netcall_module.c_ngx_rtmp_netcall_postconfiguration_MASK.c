
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
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_4)
{
    ngx_rtmp_core_main_conf_t *VAR_5;
    ngx_rtmp_handler_pt *VAR_6;

    VAR_5 = FUNC_1(VAR_4, VAR_2);

    VAR_6 = FUNC_0(&VAR_5->events[VAR_1]);
    *VAR_6 = VAR_3;

    return VAR_0;
}
