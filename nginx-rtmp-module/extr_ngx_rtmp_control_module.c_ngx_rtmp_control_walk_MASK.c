
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
typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
struct TYPE_9__ {scalar_t__ nelts; int ** elts; } ;
struct TYPE_12__ {TYPE_1__ servers; } ;
typedef TYPE_4__ ngx_rtmp_core_main_conf_t ;
typedef char* (* ngx_rtmp_control_handler_t ) (int *,int *) ;
struct TYPE_10__ {scalar_t__ nelts; int ** elts; } ;
struct TYPE_13__ {TYPE_2__ sessions; } ;
typedef TYPE_5__ ngx_rtmp_control_ctx_t ;
typedef int ngx_http_request_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int,TYPE_3__*) ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 int VAR_2 ;
 char* FUNC_3 (int *,int *) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static const char *
FUNC_4(ngx_http_request_t *VAR_4, ngx_rtmp_control_handler_t VAR_5)
{
    ngx_rtmp_core_main_conf_t *VAR_6 = VAR_3;

    ngx_str_t VAR_7;
    ngx_uint_t VAR_8, VAR_9;
    const char *VAR_10;
    ngx_rtmp_session_t **VAR_11;
    ngx_rtmp_control_ctx_t *VAR_12;
    ngx_rtmp_core_srv_conf_t **VAR_13;

    VAR_8 = 0;
    if (FUNC_1(VAR_4, (u_char *) "srv", sizeof("srv") - 1, &VAR_7) == VAR_1) {
        VAR_8 = FUNC_0(VAR_7.data, VAR_7.len);
    }

    if (VAR_8 >= VAR_6->servers.nelts) {
        return "Server index out of range";
    }

    VAR_13 = VAR_6->servers.elts;
    VAR_13 += VAR_8;

    VAR_10 = FUNC_3(VAR_4, *VAR_13);
    if (VAR_10 != VAR_0) {
        return VAR_10;
    }

    VAR_12 = FUNC_2(VAR_4, VAR_2);

    VAR_11 = VAR_12->sessions.elts;
    for (VAR_9 = 0; VAR_9 < VAR_12->sessions.nelts; VAR_9++) {
        VAR_10 = VAR_5(VAR_4, VAR_11[VAR_9]);
        if (VAR_10 != VAR_0) {
            return VAR_10;
        }
    }

    return VAR_0;
}
