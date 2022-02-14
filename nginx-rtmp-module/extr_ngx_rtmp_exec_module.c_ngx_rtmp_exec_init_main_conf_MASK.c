
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {int managed; int respawn_timeout; scalar_t__ kill_signal; int * log; int * conf; } ;
typedef TYPE_3__ ngx_rtmp_exec_t ;
struct TYPE_10__ {scalar_t__ nelts; int * elts; } ;
struct TYPE_12__ {int respawn_timeout; scalar_t__ kill_signal; int * log; TYPE_2__ static_conf; int static_exec; } ;
typedef TYPE_4__ ngx_rtmp_exec_main_conf_t ;
typedef int ngx_rtmp_exec_conf_t ;
struct TYPE_13__ {TYPE_1__* cycle; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_9__ {int new_log; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,int) ;
 TYPE_3__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_6, void *VAR_7)
{
    ngx_rtmp_exec_main_conf_t *VAR_8 = VAR_7;
    ngx_rtmp_exec_conf_t *VAR_9;
    ngx_rtmp_exec_t *VAR_10;
    ngx_uint_t VAR_11;

    if (VAR_8->respawn_timeout == VAR_3) {
        VAR_8->respawn_timeout = 5000;
    }


    if (VAR_8->kill_signal == VAR_2) {
        VAR_8->kill_signal = VAR_5;
    }


    if (FUNC_0(&VAR_8->static_exec, VAR_6->pool,
                       VAR_8->static_conf.nelts,
                       sizeof(ngx_rtmp_exec_t)) != VAR_4)
    {
        return VAR_0;
    }

    VAR_10 = FUNC_1(&VAR_8->static_exec, VAR_8->static_conf.nelts);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->log = &VAR_6->cycle->new_log;

    VAR_9 = VAR_8->static_conf.elts;

    for (VAR_11 = 0; VAR_11 < VAR_8->static_conf.nelts; VAR_11++, VAR_10++, VAR_9++) {
        FUNC_2(VAR_10, sizeof(*VAR_10));
        VAR_10->conf = VAR_9;
        VAR_10->managed = 1;
        VAR_10->log = VAR_8->log;
        VAR_10->respawn_timeout = VAR_8->respawn_timeout;
        VAR_10->kill_signal = VAR_8->kill_signal;
    }

    return VAR_1;
}
