
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_21__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_22__ {int managed; int respawn_timeout; int kill_signal; TYPE_2__* eval_ctx; int eval; int log; int * conf; } ;
typedef TYPE_3__ ngx_rtmp_exec_t ;
struct TYPE_23__ {int respawn_timeout; int kill_signal; } ;
typedef TYPE_4__ ngx_rtmp_exec_main_conf_t ;
struct TYPE_24__ {scalar_t__ flags; int args; int name; int push_exec; } ;
typedef TYPE_5__ ngx_rtmp_exec_ctx_t ;
typedef int ngx_rtmp_exec_conf_t ;
struct TYPE_25__ {scalar_t__ respawn; TYPE_7__* conf; } ;
typedef TYPE_6__ ngx_rtmp_exec_app_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {scalar_t__ nelts; int * elts; } ;
typedef TYPE_7__ ngx_array_t ;
struct TYPE_20__ {int log; int pool; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,int) ;
 TYPE_3__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 TYPE_5__* FUNC_4 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_5 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_6 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_8, u_char VAR_9[VAR_5],
    u_char VAR_10[VAR_4], ngx_uint_t VAR_11)
{
    ngx_uint_t VAR_12;
    ngx_array_t *VAR_13;
    ngx_rtmp_exec_t *VAR_14;
    ngx_rtmp_exec_ctx_t *VAR_15;
    ngx_rtmp_exec_conf_t *VAR_16;
    ngx_rtmp_exec_app_conf_t *VAR_17;
    ngx_rtmp_exec_main_conf_t *VAR_18;

    VAR_15 = FUNC_6(VAR_8, VAR_6);

    if (VAR_15 != ((void*)0)) {
        goto done;
    }

    VAR_15 = FUNC_4(VAR_8->connection->pool, sizeof(ngx_rtmp_exec_ctx_t));

    if (VAR_15 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_8(VAR_8, VAR_15, VAR_6);

    VAR_17 = FUNC_5(VAR_8, VAR_6);

    VAR_18 = FUNC_7(VAR_8, VAR_6);

    VAR_13 = &VAR_17->conf[VAR_3];

    if (VAR_13->nelts > 0) {

        if (FUNC_0(&VAR_15->push_exec, VAR_8->connection->pool,
                           VAR_13->nelts,
                           sizeof(ngx_rtmp_exec_t)) != VAR_2)
        {
            return VAR_1;
        }

        VAR_14 = FUNC_1(&VAR_15->push_exec, VAR_13->nelts);

        if (VAR_14 == ((void*)0)) {
            return VAR_1;
        }

        VAR_16 = VAR_13->elts;

        for (VAR_12 = 0; VAR_12 < VAR_13->nelts; VAR_12++, VAR_14++, VAR_16++) {
            FUNC_3(VAR_14, sizeof(*VAR_14));
            VAR_14->conf = VAR_16;
            VAR_14->managed = 1;
            VAR_14->log = VAR_8->connection->log;
            VAR_14->eval = VAR_7;
            VAR_14->eval_ctx = VAR_8;
            VAR_14->kill_signal = VAR_18->kill_signal;
            VAR_14->respawn_timeout = (VAR_17->respawn ? VAR_18->respawn_timeout :
                                  VAR_0);
        }
    }

done:

    FUNC_2(VAR_15->name, VAR_9, VAR_5);
    FUNC_2(VAR_15->args, VAR_10, VAR_4);

    VAR_15->flags |= VAR_11;

    return VAR_2;
}
