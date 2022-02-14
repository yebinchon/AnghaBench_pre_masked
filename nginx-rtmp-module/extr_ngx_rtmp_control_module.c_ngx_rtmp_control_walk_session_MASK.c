
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
struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_13__ {int publishing; TYPE_3__* session; } ;
typedef TYPE_4__ ngx_rtmp_live_ctx_t ;
struct TYPE_14__ {int filter; int sessions; } ;
typedef TYPE_5__ ngx_rtmp_control_ctx_t ;
typedef int ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ number; TYPE_2__ addr_text; } ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;



 TYPE_3__** FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int,TYPE_2__*) ;
 TYPE_5__* FUNC_3 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static const char *
FUNC_5(ngx_http_request_t *VAR_3,
    ngx_rtmp_live_ctx_t *VAR_4)
{
    ngx_str_t VAR_5, *VAR_6, VAR_7;
    ngx_rtmp_session_t *VAR_8, **VAR_9;
    ngx_rtmp_control_ctx_t *VAR_10;

    VAR_8 = VAR_4->session;

    if (VAR_8 == ((void*)0) || VAR_8->connection == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_2(VAR_3, (u_char *) "addr", sizeof("addr") - 1, &VAR_5)
        == VAR_1)
    {
        VAR_6 = &VAR_8->connection->addr_text;
        if (VAR_6->len != VAR_5.len ||
            FUNC_4(VAR_6->data, VAR_5.data, VAR_5.len))
        {
            return VAR_0;
        }
    }

    if (FUNC_2(VAR_3, (u_char *) "clientid", sizeof("clientid") - 1,
                     &VAR_7)
        == VAR_1)
    {
        if (VAR_8->connection->number !=
            (ngx_uint_t) FUNC_1(VAR_7.data, VAR_7.len))
        {
            return VAR_0;
        }
    }

    VAR_10 = FUNC_3(VAR_3, VAR_2);

    switch (VAR_10->filter) {
        case 129:
            if (!VAR_4->publishing) {
                return VAR_0;
            }
            break;

        case 128:
            if (VAR_4->publishing) {
                return VAR_0;
            }
            break;

        case 130:
            break;
    }

    VAR_9 = FUNC_0(&VAR_10->sessions);
    if (VAR_9 == ((void*)0)) {
        return "allocation error";
    }

    *VAR_9 = VAR_8;

    return VAR_0;
}
