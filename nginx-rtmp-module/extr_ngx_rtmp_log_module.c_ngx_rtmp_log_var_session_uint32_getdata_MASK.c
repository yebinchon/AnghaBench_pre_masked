
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {int offset; } ;
typedef TYPE_1__ ngx_rtmp_log_op_t ;


 int * FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_0, u_char *VAR_1,
    ngx_rtmp_log_op_t *VAR_2)
{
    uint32_t *VAR_3;

    VAR_3 = (uint32_t *) ((uint8_t *) VAR_0 + VAR_2->offset);

    return FUNC_0(VAR_1, "%uD", *VAR_3);
}
