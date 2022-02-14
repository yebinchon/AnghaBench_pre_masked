
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_amf_elt_t ;
struct TYPE_9__ {int log; int * link; } ;
typedef TYPE_3__ ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
typedef int act ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int *,size_t) ;

ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_0, ngx_chain_t *VAR_1,
        ngx_rtmp_amf_elt_t *VAR_2, size_t VAR_3)
{
    ngx_rtmp_amf_ctx_t VAR_4;

    FUNC_0(&VAR_4, sizeof(VAR_4));
    VAR_4.link = VAR_1;
    VAR_4.log = VAR_0->connection->log;

    return FUNC_1(&VAR_4, VAR_2, VAR_3);
}
