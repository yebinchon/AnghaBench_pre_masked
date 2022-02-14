
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_24__ {TYPE_7__** app_conf; } ;
struct TYPE_25__ {TYPE_5__ cctx; } ;
typedef TYPE_6__ ngx_rtmp_relay_static_t ;
struct TYPE_23__ {scalar_t__ nelts; TYPE_12__** elts; } ;
struct TYPE_26__ {TYPE_4__ static_events; } ;
typedef TYPE_7__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_27__ {TYPE_5__* ctx; } ;
typedef TYPE_8__ ngx_rtmp_listen_t ;
struct TYPE_22__ {scalar_t__ nelts; TYPE_11__** elts; } ;
struct TYPE_28__ {TYPE_3__ applications; } ;
typedef TYPE_9__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_21__ {scalar_t__ nelts; TYPE_9__** elts; } ;
struct TYPE_20__ {scalar_t__ nelts; TYPE_8__* elts; } ;
struct TYPE_16__ {TYPE_2__ servers; TYPE_1__ listen; } ;
typedef TYPE_10__ ngx_rtmp_core_main_conf_t ;
struct TYPE_17__ {TYPE_7__** app_conf; } ;
typedef TYPE_11__ ngx_rtmp_core_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {TYPE_6__* data; } ;
typedef TYPE_12__ ngx_event_t ;
typedef int ngx_cycle_t ;
struct TYPE_19__ {size_t ctx_index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_12__*,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_10__* VAR_2 ;
 int VAR_3 ;
 TYPE_13__ VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_cycle_t *VAR_5)
{

    ngx_rtmp_core_main_conf_t *VAR_6 = VAR_2;
    ngx_rtmp_core_srv_conf_t **VAR_7, *VAR_8;
    ngx_rtmp_core_app_conf_t **VAR_9, *VAR_10;
    ngx_rtmp_relay_app_conf_t *VAR_11;
    ngx_uint_t VAR_12, VAR_13, VAR_14;
    ngx_rtmp_relay_static_t *VAR_15;
    ngx_rtmp_listen_t *VAR_16;
    ngx_event_t **VAR_17, *VAR_18;

    if (VAR_6 == ((void*)0) || VAR_6->listen.nelts == 0) {
        return VAR_0;
    }



    if (VAR_1) {
        return VAR_0;
    }

    VAR_16 = VAR_6->listen.elts;

    VAR_7 = VAR_6->servers.elts;
    for (VAR_12 = 0; VAR_12 < VAR_6->servers.nelts; ++VAR_12, ++VAR_7) {

        VAR_8 = *VAR_7;
        VAR_9 = VAR_8->applications.elts;

        for (VAR_13 = 0; VAR_13 < VAR_8->applications.nelts; ++VAR_13, ++VAR_9) {

            VAR_10 = *VAR_9;
            VAR_11 = VAR_10->app_conf[VAR_4.ctx_index];
            VAR_17 = VAR_11->static_events.elts;

            for (VAR_14 = 0; VAR_14 < VAR_11->static_events.nelts; ++VAR_14, ++VAR_17) {
                VAR_18 = *VAR_17;

                VAR_15 = VAR_18->data;
                VAR_15->cctx = *VAR_16->ctx;
                VAR_15->cctx.app_conf = VAR_10->app_conf;

                FUNC_0(VAR_18, &VAR_3);
            }
        }
    }

    return VAR_0;
}
