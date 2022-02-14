
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {int handler; int log; TYPE_3__* data; } ;
struct TYPE_14__ {TYPE_10__ respawn_evt; int log; } ;
typedef TYPE_3__ ngx_rtmp_exec_t ;
struct TYPE_13__ {scalar_t__ nelts; TYPE_3__* elts; } ;
struct TYPE_15__ {TYPE_2__ static_exec; } ;
typedef TYPE_4__ ngx_rtmp_exec_main_conf_t ;
struct TYPE_16__ {TYPE_7__* ctx; } ;
typedef TYPE_5__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_12__ {scalar_t__ nelts; TYPE_5__** elts; } ;
struct TYPE_17__ {TYPE_1__ servers; } ;
typedef TYPE_6__ ngx_rtmp_core_main_conf_t ;
struct TYPE_18__ {TYPE_4__** main_conf; } ;
typedef TYPE_7__ ngx_rtmp_conf_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_cycle_t ;
struct TYPE_19__ {size_t ctx_index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_8__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_cycle_t *VAR_6)
{

    ngx_rtmp_core_main_conf_t *VAR_7 = VAR_2;
    ngx_rtmp_core_srv_conf_t **VAR_8;
    ngx_rtmp_conf_ctx_t *VAR_9;
    ngx_rtmp_exec_main_conf_t *VAR_10;
    ngx_rtmp_exec_t *VAR_11;
    ngx_uint_t VAR_12;

    if (VAR_7 == ((void*)0) || VAR_7->servers.nelts == 0) {
        return VAR_0;
    }


    if (VAR_1) {
        return VAR_0;
    }

    VAR_8 = VAR_7->servers.elts;
    VAR_9 = (*VAR_8)->ctx;
    VAR_10 = VAR_9->main_conf[VAR_3.ctx_index];
    VAR_11 = VAR_10->static_exec.elts;
    for (VAR_12 = 0; VAR_12 < VAR_10->static_exec.nelts; ++VAR_12, ++VAR_11) {
        VAR_11->respawn_evt.data = VAR_11;
        VAR_11->respawn_evt.log = VAR_11->log;
        VAR_11->respawn_evt.handler = VAR_4;
        FUNC_0((&VAR_11->respawn_evt), &VAR_5);
    }


    return VAR_0;
}
