
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {int method; } ;
typedef TYPE_3__ ngx_rtmp_notify_srv_conf_t ;
struct TYPE_12__ {int method; } ;
typedef TYPE_4__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_5__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_rtmp_notify_app_conf_t *VAR_7 = VAR_6;

    ngx_rtmp_notify_srv_conf_t *VAR_8;
    ngx_str_t *VAR_9;

    VAR_9 = VAR_4->args->elts;
    VAR_9++;

    if (VAR_9->len == sizeof("get") - 1 &&
        FUNC_1(VAR_9->data, (u_char *) "get", VAR_9->len) == 0)
    {
        VAR_7->method = VAR_1;

    } else if (VAR_9->len == sizeof("post") - 1 &&
               FUNC_1(VAR_9->data, (u_char *) "post", VAR_9->len) == 0)
    {
        VAR_7->method = VAR_2;

    } else {
        return "got unexpected method";
    }

    VAR_8 = FUNC_0(VAR_4, VAR_3);
    VAR_8->method = VAR_7->method;

    return VAR_0;
}
