
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {int ** url; } ;
typedef TYPE_3__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int * FUNC_0 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_rtmp_notify_app_conf_t *VAR_12 = VAR_11;

    ngx_str_t *VAR_13, *VAR_14;
    ngx_url_t *VAR_15;
    ngx_uint_t VAR_16;

    VAR_14 = VAR_9->args->elts;

    VAR_15 = FUNC_0(VAR_9, &VAR_14[1]);
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = &VAR_14[0];

    VAR_16 = 0;

    switch (VAR_13->len) {
        case sizeof("on_done") - 1:
            if (VAR_13->data[3] == 'd') {
                VAR_16 = VAR_2;
            } else {
                VAR_16 = VAR_3;
            }
            break;

        case sizeof("on_update") - 1:
            VAR_16 = VAR_8;
            break;

        case sizeof("on_publish") - 1:
            VAR_16 = VAR_5;
            break;

        case sizeof("on_play_done") - 1:
            VAR_16 = VAR_4;
            break;

        case sizeof("on_record_done") - 1:
            VAR_16 = VAR_7;
            break;

        case sizeof("on_publish_done") - 1:
            VAR_16 = VAR_6;
            break;
    }

    VAR_12->url[VAR_16] = VAR_15;

    return VAR_1;
}
