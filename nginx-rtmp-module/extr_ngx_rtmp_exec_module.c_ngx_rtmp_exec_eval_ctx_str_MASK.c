
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_exec_ctx_t ;
struct TYPE_6__ {int offset; } ;
typedef TYPE_2__ ngx_rtmp_eval_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, ngx_rtmp_eval_t *VAR_2, ngx_str_t *VAR_3)
{
    ngx_rtmp_session_t *VAR_4 = VAR_1;

    ngx_rtmp_exec_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_4, VAR_0);
    if (VAR_5 == ((void*)0)) {
        VAR_3->len = 0;
        return;
    }

    *VAR_3 = * (ngx_str_t *) ((u_char *) VAR_5 + VAR_2->offset);
}
