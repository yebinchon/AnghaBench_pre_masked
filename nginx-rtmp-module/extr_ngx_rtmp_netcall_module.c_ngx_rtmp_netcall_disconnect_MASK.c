
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_6__ {TYPE_1__* pc; struct TYPE_6__* next; } ;
typedef TYPE_2__ ngx_rtmp_netcall_session_t ;
struct TYPE_7__ {TYPE_2__* cs; } ;
typedef TYPE_3__ ngx_rtmp_netcall_ctx_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_5__ {int connection; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_2, ngx_rtmp_header_t *VAR_3,
        ngx_chain_t *VAR_4)
{
    ngx_rtmp_netcall_ctx_t *VAR_5;
    ngx_rtmp_netcall_session_t *VAR_6;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    if (VAR_5) {
        for (VAR_6 = VAR_5->cs; VAR_6; VAR_6 = VAR_6->next) {
            FUNC_1(VAR_6->pc->connection);
        }
    }

    return VAR_0;
}
