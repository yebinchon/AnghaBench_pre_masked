
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
struct TYPE_9__ {int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {int ** url; } ;
typedef TYPE_3__ ngx_rtmp_notify_srv_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_0 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_rtmp_notify_srv_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8, *VAR_9;
    ngx_url_t *VAR_10;
    ngx_uint_t VAR_11;

    VAR_9 = VAR_4->args->elts;

    VAR_10 = FUNC_0(VAR_4, &VAR_9[1]);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = &VAR_9[0];

    VAR_11 = 0;

    switch (VAR_8->len) {
        case sizeof("on_connect") - 1:
            VAR_11 = VAR_2;
            break;

        case sizeof("on_disconnect") - 1:
            VAR_11 = VAR_3;
            break;
    }

    VAR_7->url[VAR_11] = VAR_10;

    return VAR_1;
}
