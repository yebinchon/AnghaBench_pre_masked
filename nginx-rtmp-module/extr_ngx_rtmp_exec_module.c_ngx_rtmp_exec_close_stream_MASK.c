
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_rtmp_session_t ;
struct TYPE_23__ {int kill_signal; } ;
typedef TYPE_6__ ngx_rtmp_exec_t ;
struct TYPE_21__ {int len; int data; } ;
struct TYPE_20__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_24__ {scalar_t__ counter; int pool; struct TYPE_24__* next; TYPE_4__ name; TYPE_3__ pull_exec; } ;
typedef TYPE_7__ ngx_rtmp_exec_pull_ctx_t ;
struct TYPE_18__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_25__ {int flags; TYPE_7__* pull; TYPE_1__ push_exec; } ;
typedef TYPE_8__ ngx_rtmp_exec_ctx_t ;
struct TYPE_26__ {size_t nbuckets; TYPE_7__** pull; int * conf; } ;
typedef TYPE_9__ ngx_rtmp_exec_app_conf_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,size_t) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*,int *,char*) ;
 TYPE_9__* FUNC_6 (TYPE_5__*,int ) ;
 TYPE_8__* FUNC_7 (TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_rtmp_session_t *VAR_6, ngx_rtmp_close_stream_t *VAR_7)
{
    size_t VAR_8;
    ngx_rtmp_exec_t *VAR_9;
    ngx_rtmp_exec_ctx_t *VAR_10;
    ngx_rtmp_exec_pull_ctx_t *VAR_11, **VAR_12;
    ngx_rtmp_exec_app_conf_t *VAR_13;

    VAR_13 = FUNC_6(VAR_6, VAR_5);
    if (VAR_13 == ((void*)0)) {
        goto next;
    }

    VAR_10 = FUNC_7(VAR_6, VAR_5);
    if (VAR_10 == ((void*)0)) {
        goto next;
    }

    if (VAR_10->flags & VAR_3) {
        FUNC_5(VAR_6, &VAR_13->conf[VAR_4],
                                "publish_done");
    }

    if (VAR_10->flags & VAR_1) {
        FUNC_5(VAR_6, &VAR_13->conf[VAR_2],
                                "play_done");
    }

    VAR_10->flags = 0;

    if (VAR_10->push_exec.nelts > 0) {
        FUNC_3(VAR_0, VAR_6->connection->log, 0,
                       "exec: delete %uz push command(s)",
                       VAR_10->push_exec.nelts);

        VAR_9 = VAR_10->push_exec.elts;
        for (VAR_8 = 0; VAR_8 < VAR_10->push_exec.nelts; VAR_8++, VAR_9++) {
            FUNC_4(VAR_9, VAR_9->kill_signal);
        }
    }

    VAR_11 = VAR_10->pull;

    if (VAR_11 && --VAR_11->counter == 0) {
        FUNC_3(VAR_0, VAR_6->connection->log, 0,
                       "exec: delete %uz pull command(s)",
                       VAR_11->pull_exec.nelts);

        VAR_9 = VAR_11->pull_exec.elts;
        for (VAR_8 = 0; VAR_8 < VAR_11->pull_exec.nelts; VAR_8++, VAR_9++) {
            FUNC_4(VAR_9, VAR_9->kill_signal);
        }

        VAR_12 = &VAR_13->pull[FUNC_2(VAR_11->name.data, VAR_11->name.len) %
                            VAR_13->nbuckets];

        for (; *VAR_12; VAR_12 = &(*VAR_12)->next) {
            if (VAR_11 == *VAR_12) {
                *VAR_12 = VAR_11->next;
                break;
            }
        }

        FUNC_1(VAR_11->pool);
    }

    VAR_10->pull = ((void*)0);

next:
    return FUNC_0(VAR_6, VAR_7);
}
