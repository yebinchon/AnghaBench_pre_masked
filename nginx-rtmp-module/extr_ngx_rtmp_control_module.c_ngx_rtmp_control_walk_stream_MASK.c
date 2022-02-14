
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ctx; } ;
typedef TYPE_1__ ngx_rtmp_live_stream_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ ngx_rtmp_live_ctx_t ;
typedef int ngx_http_request_t ;


 char const* VAR_0 ;
 char* FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static const char *
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_rtmp_live_stream_t *VAR_2)
{
    const char *VAR_3;
    ngx_rtmp_live_ctx_t *VAR_4;

    for (VAR_4 = VAR_2->ctx; VAR_4; VAR_4 = VAR_4->next) {
        VAR_3 = FUNC_0(VAR_1, VAR_4);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    }

    return VAR_0;
}
