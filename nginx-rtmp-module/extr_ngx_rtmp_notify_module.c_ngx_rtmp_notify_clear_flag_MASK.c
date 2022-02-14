
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ ngx_rtmp_notify_ctx_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(ngx_rtmp_session_t *VAR_1, ngx_uint_t VAR_2)
{
    ngx_rtmp_notify_ctx_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0);

    VAR_3->flags &= ~VAR_2;
}
