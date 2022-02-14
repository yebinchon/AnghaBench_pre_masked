
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {size_t len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_2__ ngx_rtmp_log_op_t ;



__attribute__((used)) static size_t
FUNC_0(ngx_rtmp_session_t *VAR_0,
    ngx_rtmp_log_op_t *VAR_1)
{
    return ((ngx_str_t *) ((u_char *) VAR_0 + VAR_1->offset))->len;
}
