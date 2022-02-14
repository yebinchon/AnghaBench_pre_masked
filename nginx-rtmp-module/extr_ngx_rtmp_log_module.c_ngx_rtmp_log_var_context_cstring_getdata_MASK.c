
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {int offset; } ;
typedef TYPE_1__ ngx_rtmp_log_op_t ;
typedef int ngx_rtmp_log_ctx_t ;


 int * FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_1, u_char *VAR_2,
    ngx_rtmp_log_op_t *VAR_3)
{
    ngx_rtmp_log_ctx_t *VAR_4;
    u_char *VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_0);
    if (VAR_4 == ((void*)0)) {
        return VAR_2;
    }

    VAR_5 = (u_char *) VAR_4 + VAR_3->offset;
    while (*VAR_5) {
        *VAR_2++ = *VAR_5++;
    }

    return VAR_2;
}
