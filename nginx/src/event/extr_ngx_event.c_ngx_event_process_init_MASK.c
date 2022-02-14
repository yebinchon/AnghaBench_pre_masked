
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
struct rlimit {scalar_t__ rlim_cur; } ;
struct TYPE_28__ {int tv_sec; int tv_usec; } ;
struct TYPE_34__ {int tv_sec; int tv_usec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_7__ it_interval; } ;
typedef size_t ngx_uint_t ;
typedef void* ngx_socket_t ;
struct TYPE_31__ {int handler; } ;
struct TYPE_35__ {scalar_t__ worker; scalar_t__ type; scalar_t__ reuseport; TYPE_4__ log; TYPE_3__* previous; int deferred_accept; TYPE_15__* connection; int fd; } ;
typedef TYPE_8__ ngx_listening_t ;
struct TYPE_36__ {int post_acceptex; } ;
typedef TYPE_9__ ngx_iocp_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {int closed; int instance; int accept; void* handler; int deferred_accept; TYPE_4__* log; } ;
typedef TYPE_10__ ngx_event_t ;
struct TYPE_33__ {scalar_t__ (* init ) (TYPE_13__*,int) ;} ;
struct TYPE_23__ {TYPE_6__ actions; } ;
typedef TYPE_11__ ngx_event_module_t ;
struct TYPE_24__ {scalar_t__ use; int accept_mutex_delay; scalar_t__ accept_mutex; } ;
typedef TYPE_12__ ngx_event_conf_t ;
struct TYPE_29__ {size_t nelts; TYPE_8__* elts; } ;
struct TYPE_25__ {size_t files_n; int connection_n; size_t free_connection_n; int conf_ctx; int log; TYPE_2__ listening; TYPE_15__* free_connections; TYPE_10__* write_events; TYPE_10__* read_events; TYPE_15__* connections; int * files; TYPE_5__** modules; } ;
typedef TYPE_13__ ngx_cycle_t ;
struct TYPE_26__ {int worker_processes; scalar_t__ master; } ;
typedef TYPE_14__ ngx_core_conf_t ;
struct TYPE_27__ {scalar_t__ type; void* fd; TYPE_10__* read; TYPE_4__* log; TYPE_8__* listening; TYPE_10__* write; struct TYPE_27__* data; } ;
typedef TYPE_15__ ngx_connection_t ;
struct TYPE_32__ {scalar_t__ type; scalar_t__ ctx_index; TYPE_11__* ctx; } ;
struct TYPE_30__ {TYPE_15__* connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct rlimit*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (TYPE_10__*,int ,int ) ;
 void* FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_5 (TYPE_10__*,int ,int ) ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_8__*,int ) ;
 void* VAR_26 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 TYPE_15__* FUNC_10 (int ,int ) ;
 int VAR_27 ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (struct sigaction*,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_13 (int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_14 (int ,struct itimerval*,int *) ;
 int FUNC_15 (int ,struct sigaction*,int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_13__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_18(ngx_cycle_t *VAR_35)
{
    ngx_uint_t VAR_36, VAR_37;
    ngx_event_t *VAR_38, *VAR_39;
    ngx_listening_t *VAR_40;
    ngx_connection_t *VAR_41, *VAR_42, *VAR_43;
    ngx_core_conf_t *VAR_44;
    ngx_event_conf_t *VAR_45;
    ngx_event_module_t *VAR_46;

    VAR_44 = (ngx_core_conf_t *) FUNC_9(VAR_35->conf_ctx, VAR_20);
    VAR_45 = FUNC_6(VAR_35->conf_ctx, VAR_24);

    if (VAR_44->master && VAR_44->worker_processes > 1 && VAR_45->accept_mutex) {
        VAR_33 = 1;
        VAR_18 = 0;
        VAR_17 = VAR_45->accept_mutex_delay;

    } else {
        VAR_33 = 0;
    }
    FUNC_13(&VAR_28);
    FUNC_13(&VAR_30);
    FUNC_13(&VAR_29);

    if (FUNC_8(VAR_35->log) == VAR_2) {
        return VAR_2;
    }

    for (VAR_36 = 0; VAR_35->modules[VAR_36]; VAR_36++) {
        if (VAR_35->modules[VAR_36]->type != VAR_3) {
            continue;
        }

        if (VAR_35->modules[VAR_36]->ctx_index != VAR_45->use) {
            continue;
        }

        VAR_46 = VAR_35->modules[VAR_36]->ctx;

        if (VAR_46->actions.init(VAR_35, VAR_31) != VAR_8) {

            FUNC_0(2);
        }

        break;
    }



    if (VAR_31 && !(VAR_25 & VAR_13)) {
        struct sigaction VAR_47;
        struct itimerval VAR_48;

        FUNC_12(&VAR_47, sizeof(struct sigaction));
        VAR_47.sa_handler = VAR_32;
        FUNC_16(&VAR_47.sa_mask);

        if (FUNC_15(VAR_15, &VAR_47, ((void*)0)) == -1) {
            FUNC_11(VAR_6, VAR_35->log, VAR_21,
                          "sigaction(SIGALRM) failed");
            return VAR_2;
        }

        VAR_48.it_interval.tv_sec = VAR_31 / 1000;
        VAR_48.it_interval.tv_usec = (VAR_31 % 1000) * 1000;
        VAR_48.it_value.tv_sec = VAR_31 / 1000;
        VAR_48.it_value.tv_usec = (VAR_31 % 1000 ) * 1000;

        if (FUNC_14(VAR_0, &VAR_48, ((void*)0)) == -1) {
            FUNC_11(VAR_6, VAR_35->log, VAR_21,
                          "setitimer() failed");
        }
    }

    if (VAR_25 & VAR_11) {
        struct rlimit VAR_49;

        if (FUNC_1(VAR_14, &VAR_49) == -1) {
            FUNC_11(VAR_6, VAR_35->log, VAR_21,
                          "getrlimit(RLIMIT_NOFILE) failed");
            return VAR_2;
        }

        VAR_35->files_n = (ngx_uint_t) VAR_49.rlim_cur;

        VAR_35->files = FUNC_4(sizeof(ngx_connection_t *) * VAR_35->files_n,
                                  VAR_35->log);
        if (VAR_35->files == ((void*)0)) {
            return VAR_2;
        }
    }
    VAR_35->connections =
        FUNC_3(sizeof(ngx_connection_t) * VAR_35->connection_n, VAR_35->log);
    if (VAR_35->connections == ((void*)0)) {
        return VAR_2;
    }

    VAR_41 = VAR_35->connections;

    VAR_35->read_events = FUNC_3(sizeof(ngx_event_t) * VAR_35->connection_n,
                                   VAR_35->log);
    if (VAR_35->read_events == ((void*)0)) {
        return VAR_2;
    }

    VAR_38 = VAR_35->read_events;
    for (VAR_37 = 0; VAR_37 < VAR_35->connection_n; VAR_37++) {
        VAR_38[VAR_37].closed = 1;
        VAR_38[VAR_37].instance = 1;
    }

    VAR_35->write_events = FUNC_3(sizeof(ngx_event_t) * VAR_35->connection_n,
                                    VAR_35->log);
    if (VAR_35->write_events == ((void*)0)) {
        return VAR_2;
    }

    VAR_39 = VAR_35->write_events;
    for (VAR_37 = 0; VAR_37 < VAR_35->connection_n; VAR_37++) {
        VAR_39[VAR_37].closed = 1;
    }

    VAR_37 = VAR_35->connection_n;
    VAR_42 = ((void*)0);

    do {
        VAR_37--;

        VAR_41[VAR_37].data = VAR_42;
        VAR_41[VAR_37].read = &VAR_35->read_events[VAR_37];
        VAR_41[VAR_37].write = &VAR_35->write_events[VAR_37];
        VAR_41[VAR_37].fd = (ngx_socket_t) -1;

        VAR_42 = &VAR_41[VAR_37];
    } while (VAR_37);

    VAR_35->free_connections = VAR_42;
    VAR_35->free_connection_n = VAR_35->connection_n;



    VAR_40 = VAR_35->listening.elts;
    for (VAR_37 = 0; VAR_37 < VAR_35->listening.nelts; VAR_37++) {







        VAR_41 = FUNC_10(VAR_40[VAR_37].fd, VAR_35->log);

        if (VAR_41 == ((void*)0)) {
            return VAR_2;
        }

        VAR_41->type = VAR_40[VAR_37].type;
        VAR_41->log = &VAR_40[VAR_37].log;

        VAR_41->listening = &VAR_40[VAR_37];
        VAR_40[VAR_37].connection = VAR_41;

        VAR_38 = VAR_41->read;

        VAR_38->log = VAR_41->log;
        VAR_38->accept = 1;





        if (!(VAR_25 & VAR_12)) {
            if (VAR_40[VAR_37].previous) {






                VAR_43 = VAR_40[VAR_37].previous->connection;

                if (FUNC_5(VAR_43->read, VAR_9, VAR_1)
                    == VAR_2)
                {
                    return VAR_2;
                }

                VAR_43->fd = (ngx_socket_t) -1;
            }
        }
        VAR_38->handler = (VAR_41->type == VAR_16) ? VAR_22
                                                : VAR_26;
        if (VAR_33) {
            continue;
        }
        if (FUNC_2(VAR_38, VAR_9, 0) == VAR_2) {
            return VAR_2;
        }



    }

    return VAR_8;
}
