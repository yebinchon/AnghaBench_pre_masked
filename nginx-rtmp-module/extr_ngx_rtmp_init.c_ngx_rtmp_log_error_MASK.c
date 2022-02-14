
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ addr_text; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_6__ {TYPE_1__* session; scalar_t__ client; } ;
typedef TYPE_2__ ngx_rtmp_error_log_ctx_t ;
struct TYPE_7__ {TYPE_2__* data; scalar_t__ action; } ;
typedef TYPE_3__ ngx_log_t ;


 int * FUNC_0 (int *,size_t,char*,scalar_t__) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;
    ngx_rtmp_session_t *VAR_4;
    ngx_rtmp_error_log_ctx_t *VAR_5;

    if (VAR_0->action) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    VAR_5 = VAR_0->data;

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", client: %V", VAR_5->client);
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    VAR_4 = VAR_5->session;

    if (VAR_4 == ((void*)0)) {
        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", server: %V", VAR_4->addr_text);
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    return VAR_3;
}
