
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relay; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_relay_ctx_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_2, ngx_rtmp_header_t *VAR_3,
        ngx_chain_t *VAR_4)
{
    ngx_rtmp_relay_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);
    if (VAR_5 == ((void*)0) || !VAR_2->relay) {
        return VAR_0;
    }

    return FUNC_1(VAR_2);
}
