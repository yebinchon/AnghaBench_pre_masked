
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_rtmp_handler_pt ;
struct TYPE_4__ {int amf; int * events; } ;
typedef TYPE_1__ ngx_rtmp_core_main_conf_t ;
struct TYPE_5__ {int handler; int name; } ;
typedef TYPE_2__ ngx_rtmp_amf_handler_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *) ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_7 ;
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
 int VAR_18 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_19)
{
    ngx_rtmp_core_main_conf_t *VAR_20;
    ngx_rtmp_handler_pt *VAR_21;
    ngx_rtmp_amf_handler_t *VAR_22;

    VAR_20 = FUNC_1(VAR_19, VAR_7);


    VAR_21 = FUNC_0(&VAR_20->events[VAR_1]);
    *VAR_21 = VAR_13;


    VAR_5 = VAR_10;
    VAR_10 = VAR_18;

    VAR_4 = VAR_9;
    VAR_9 = VAR_17;

    VAR_3 = VAR_8;
    VAR_8 = VAR_12;

    VAR_2 = VAR_6;
    VAR_6 = VAR_11;


    VAR_22 = FUNC_0(&VAR_20->amf);
    FUNC_2(&VAR_22->name, "_result");
    VAR_22->handler = VAR_15;

    VAR_22 = FUNC_0(&VAR_20->amf);
    FUNC_2(&VAR_22->name, "_error");
    VAR_22->handler = VAR_14;

    VAR_22 = FUNC_0(&VAR_20->amf);
    FUNC_2(&VAR_22->name, "onStatus");
    VAR_22->handler = VAR_16;

    return VAR_0;
}
