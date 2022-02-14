
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_rtmp_handler_pt ;
struct TYPE_4__ {int amf; int * events; } ;
typedef TYPE_1__ ngx_rtmp_core_main_conf_t ;
struct TYPE_5__ {void* handler; int name; } ;
typedef TYPE_2__ ngx_rtmp_amf_handler_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_9)
{
    ngx_rtmp_core_main_conf_t *VAR_10;
    ngx_rtmp_handler_pt *VAR_11;
    ngx_rtmp_amf_handler_t *VAR_12;

    VAR_10 = FUNC_1(VAR_9, VAR_8);

    VAR_11 = FUNC_0(&VAR_10->events[VAR_3]);
    *VAR_11 = VAR_5;

    VAR_11 = FUNC_0(&VAR_10->events[VAR_4]);
    *VAR_11 = VAR_5;

    VAR_11 = FUNC_0(&VAR_10->events[VAR_2]);
    *VAR_11 = VAR_6;


    VAR_12 = FUNC_0(&VAR_10->amf);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }
    FUNC_2(&VAR_12->name, "@setDataFrame");
    VAR_12->handler = VAR_7;

    VAR_12 = FUNC_0(&VAR_10->amf);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }
    FUNC_2(&VAR_12->name, "onMetaData");
    VAR_12->handler = VAR_7;


    return VAR_1;
}
