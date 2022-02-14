
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_15__ {int args; int name; } ;
typedef TYPE_2__ ngx_rtmp_publish_t ;
typedef TYPE_2__ ngx_rtmp_play_t ;
struct TYPE_16__ {scalar_t__ publishing; } ;
typedef TYPE_4__ ngx_rtmp_live_ctx_t ;
struct TYPE_17__ {int count; } ;
typedef TYPE_5__ ngx_rtmp_control_ctx_t ;
typedef TYPE_2__ ngx_rtmp_close_stream_t ;
typedef int ngx_http_request_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,TYPE_1__*) ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 TYPE_4__* FUNC_6 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*) ;

__attribute__((used)) static const char *
FUNC_9(ngx_http_request_t *VAR_5, ngx_rtmp_session_t *VAR_6)
{
    ngx_str_t VAR_7;
    ngx_rtmp_play_t VAR_8;
    ngx_rtmp_publish_t VAR_9;
    ngx_rtmp_live_ctx_t *VAR_10;
    ngx_rtmp_control_ctx_t *VAR_11;
    ngx_rtmp_close_stream_t VAR_12;

    if (FUNC_0(VAR_5, (u_char *) "newname", sizeof("newname") - 1, &VAR_7)
        != VAR_1)
    {
        return "newname not specified";
    }

    if (VAR_7.len >= VAR_2) {
        VAR_7.len = VAR_2 - 1;
    }

    VAR_11 = FUNC_1(VAR_5, VAR_3);
    VAR_11->count++;

    FUNC_3(&VAR_12, sizeof(ngx_rtmp_close_stream_t));


    FUNC_4(VAR_6, &VAR_12);

    VAR_10 = FUNC_6(VAR_6, VAR_4);

    if (VAR_10 && VAR_10->publishing) {


        FUNC_3(&VAR_9, sizeof(ngx_rtmp_publish_t));

        FUNC_2(VAR_9.name, VAR_7.data, VAR_7.len);

        FUNC_5(VAR_9.name, VAR_9.args);

        if (FUNC_8(VAR_6, &VAR_9) != VAR_1) {
            return "publish failed";
        }

    } else {


        FUNC_3(&VAR_8, sizeof(ngx_rtmp_play_t));

        FUNC_2(VAR_8.name, VAR_7.data, VAR_7.len);

        FUNC_5(VAR_8.name, VAR_8.args);

        if (FUNC_7(VAR_6, &VAR_8) != VAR_1) {
            return "play failed";
        }
    }

    return VAR_0;
}
