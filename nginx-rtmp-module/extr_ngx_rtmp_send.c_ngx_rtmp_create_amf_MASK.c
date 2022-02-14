
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
typedef int ngx_rtmp_amf_elt_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int **,int *,int *,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int *) ;

ngx_chain_t *
FUNC_5(ngx_rtmp_session_t *VAR_3, ngx_rtmp_header_t *VAR_4,
                    ngx_rtmp_amf_elt_t *VAR_5, size_t VAR_6)
{
    ngx_chain_t *VAR_7;
    ngx_int_t VAR_8;
    ngx_rtmp_core_srv_conf_t *VAR_9;

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                   "create: amf nelts=%ui", VAR_6);

    VAR_9 = FUNC_3(VAR_3, VAR_2);

    VAR_7 = ((void*)0);

    VAR_8 = FUNC_1(VAR_3, &VAR_7, ((void*)0), VAR_5, VAR_6);

    if (VAR_8 != VAR_1 && VAR_7) {
        FUNC_2(VAR_9, VAR_7);
        VAR_7 = ((void*)0);
    }

    if (VAR_7) {
        FUNC_4(VAR_3, VAR_4, ((void*)0), VAR_7);
    }

    return VAR_7;
}
