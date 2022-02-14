
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_rtmp_relay_ctx_t ;
struct TYPE_4__ {int nbuckets; int pull_reconnect; int push_reconnect; int buflen; int session_relay; int ctx; } ;
typedef TYPE_1__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_5__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_rtmp_relay_app_conf_t *VAR_4 = VAR_2;
    ngx_rtmp_relay_app_conf_t *VAR_5 = VAR_3;

    VAR_5->ctx = FUNC_2(VAR_1->pool, sizeof(ngx_rtmp_relay_ctx_t *)
            * VAR_5->nbuckets);

    FUNC_1(VAR_5->session_relay, VAR_4->session_relay, 0);
    FUNC_0(VAR_5->buflen, VAR_4->buflen, 5000);
    FUNC_0(VAR_5->push_reconnect, VAR_4->push_reconnect,
            3000);
    FUNC_0(VAR_5->pull_reconnect, VAR_4->pull_reconnect,
            3000);

    return VAR_0;
}
