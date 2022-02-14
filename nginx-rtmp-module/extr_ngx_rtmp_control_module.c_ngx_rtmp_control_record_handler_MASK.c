
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_record_app_conf_t ;
struct TYPE_12__ {int ** app_conf; } ;
typedef TYPE_3__ ngx_rtmp_core_app_conf_t ;
struct TYPE_10__ {int len; int data; } ;
struct TYPE_13__ {int path; TYPE_1__ method; } ;
typedef TYPE_4__ ngx_rtmp_control_ctx_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_14__ {size_t ctx_index; } ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,TYPE_2__*) ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 TYPE_5__ VAR_6 ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int) ;

__attribute__((used)) static const char *
FUNC_7(ngx_http_request_t *VAR_7, ngx_rtmp_session_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_str_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_rtmp_control_ctx_t *VAR_12;
    ngx_rtmp_core_app_conf_t *VAR_13;
    ngx_rtmp_record_app_conf_t *VAR_14;

    VAR_13 = FUNC_2(VAR_8, VAR_5);
    VAR_14 = VAR_13->app_conf[VAR_6.ctx_index];

    if (FUNC_0(VAR_7, (u_char *) "rec", sizeof("rec") - 1, &VAR_10) != VAR_3) {
        VAR_10.len = 0;
    }

    VAR_11 = FUNC_4(VAR_14, &VAR_10);
    if (VAR_11 == VAR_1) {
        return "Recorder not found";
    }

    VAR_12 = FUNC_1(VAR_7, VAR_4);

    if (VAR_12->method.len == sizeof("start") - 1 &&
        FUNC_6(VAR_12->method.data, "start", VAR_12->method.len) == 0)
    {
        VAR_9 = FUNC_5(VAR_8, VAR_11, &VAR_12->path);

    } else if (VAR_12->method.len == sizeof("stop") - 1 &&
               FUNC_6(VAR_12->method.data, "stop", VAR_12->method.len) == 0)
    {
        VAR_9 = FUNC_3(VAR_8, VAR_11, &VAR_12->path);

    } else {
        return "Undefined method";
    }

    if (VAR_9 == VAR_2) {
        return "Recorder error";
    }

    return VAR_0;
}
