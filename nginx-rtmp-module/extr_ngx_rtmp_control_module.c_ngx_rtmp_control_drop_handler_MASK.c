
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {int count; } ;
typedef TYPE_1__ ngx_rtmp_control_ctx_t ;
typedef int ngx_http_request_t ;


 char const* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char *
FUNC_2(ngx_http_request_t *VAR_2, ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_control_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_1);

    FUNC_1(VAR_3);

    ++VAR_4->count;

    return VAR_0;
}
