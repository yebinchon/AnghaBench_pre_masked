
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
typedef int ngx_rtmp_amf_elt_t ;
struct TYPE_10__ {int * link; int * first; int log; int alloc; int * arg; } ;
typedef TYPE_3__ ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
typedef int act ;
struct TYPE_8__ {int log; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *,size_t) ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_2__*,int ) ;

ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_2,
                    ngx_chain_t **VAR_3, ngx_chain_t **VAR_4,
                    ngx_rtmp_amf_elt_t *VAR_5, size_t VAR_6)
{
    ngx_rtmp_amf_ctx_t VAR_7;
    ngx_rtmp_core_srv_conf_t *VAR_8;
    ngx_int_t VAR_9;

    VAR_8 = FUNC_2(VAR_2, VAR_1);

    FUNC_0(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.arg = VAR_8;
    VAR_7.alloc = VAR_0;
    VAR_7.log = VAR_2->connection->log;

    if (VAR_3) {
        VAR_7.first = *VAR_3;
    }

    if (VAR_4) {
        VAR_7.link = *VAR_4;
    }

    VAR_9 = FUNC_1(&VAR_7, VAR_5, VAR_6);

    if (VAR_3) {
        *VAR_3 = VAR_7.first;
    }

    if (VAR_4) {
        *VAR_4 = VAR_7.link;
    }

    return VAR_9;
}
