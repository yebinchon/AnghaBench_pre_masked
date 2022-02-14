
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_str_t ;
struct TYPE_4__ {scalar_t__ connection; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_2__ ngx_rtmp_eval_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, ngx_rtmp_eval_t *VAR_1, ngx_str_t *VAR_2)
{
    ngx_rtmp_session_t *VAR_3 = VAR_0;

    *VAR_2 = *(ngx_str_t *) ((u_char *) VAR_3->connection + VAR_1->offset);
}
