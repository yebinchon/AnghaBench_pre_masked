
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {int logged; int done; int request_complete; int post_action; int (* write_event_handler ) (TYPE_3__*) ;int read_event_handler; int args; int uri; TYPE_2__* postponed; scalar_t__ buffered; int count; struct TYPE_25__* main; scalar_t__ waited; struct TYPE_25__* parent; scalar_t__ background; TYPE_1__* post_subrequest; int * content_handler; scalar_t__ filter_finalize; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_26__ {scalar_t__ log_subrequest; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_27__ {int error; int timedout; TYPE_21__* read; TYPE_21__* write; int log; TYPE_3__* data; scalar_t__ buffered; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_24__ {struct TYPE_24__* next; TYPE_3__* request; } ;
struct TYPE_23__ {scalar_t__ eof; scalar_t__ delayed; scalar_t__ timer_set; void* handler; } ;
struct TYPE_22__ {scalar_t__ (* handler ) (TYPE_3__*,int ,scalar_t__) ;int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_21__*) ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 void* VAR_14 ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (TYPE_3__*,scalar_t__) ;
 int FUNC_13 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_14 (int ,int ,int ,char*,scalar_t__,int *,int *,int,int ) ;
 int FUNC_15 (int ,int ,int ,char*,int *,int *) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ,scalar_t__) ;

void
FUNC_17(ngx_http_request_t *VAR_15, ngx_int_t VAR_16)
{
    ngx_connection_t *VAR_17;
    ngx_http_request_t *VAR_18;
    ngx_http_core_loc_conf_t *VAR_19;

    VAR_17 = VAR_15->connection;

    FUNC_14(VAR_10, VAR_17->log, 0,
                   "http finalize request: %i, \"%V?%V\" a:%d, c:%d",
                   VAR_16, &VAR_15->uri, &VAR_15->args, VAR_15 == VAR_17->data, VAR_15->main->count);

    if (VAR_16 == VAR_1) {
        FUNC_3(VAR_15);
        return;
    }

    if (VAR_16 == VAR_11 && VAR_15->filter_finalize) {
        VAR_17->error = 1;
    }

    if (VAR_16 == VAR_0) {
        VAR_15->content_handler = ((void*)0);
        VAR_15->write_event_handler = FUNC_2;
        FUNC_2(VAR_15);
        return;
    }

    if (VAR_15 != VAR_15->main && VAR_15->post_subrequest) {
        VAR_16 = VAR_15->post_subrequest->handler(VAR_15, VAR_15->post_subrequest->data, VAR_16);
    }

    if (VAR_16 == VAR_2
        || VAR_16 == VAR_7
        || VAR_16 == VAR_3
        || VAR_17->error)
    {
        if (FUNC_6(VAR_15) == VAR_11) {
            return;
        }

        FUNC_12(VAR_15, VAR_16);
        return;
    }

    if (VAR_16 >= VAR_8
        || VAR_16 == VAR_5
        || VAR_16 == VAR_6)
    {
        if (VAR_16 == VAR_4) {
            VAR_17->timedout = 1;
            FUNC_12(VAR_15, VAR_16);
            return;
        }

        if (VAR_15 == VAR_15->main) {
            if (VAR_17->read->timer_set) {
                FUNC_0(VAR_17->read);
            }

            if (VAR_17->write->timer_set) {
                FUNC_0(VAR_17->write);
            }
        }

        VAR_17->read->handler = VAR_14;
        VAR_17->write->handler = VAR_14;

        FUNC_17(VAR_15, FUNC_11(VAR_15, VAR_16));
        return;
    }

    if (VAR_15 != VAR_15->main) {
        VAR_19 = FUNC_4(VAR_15, VAR_13);

        if (VAR_15->background) {
            if (!VAR_15->logged) {
                if (VAR_19->log_subrequest) {
                    FUNC_5(VAR_15);
                }

                VAR_15->logged = 1;

            } else {
                FUNC_15(VAR_9, VAR_17->log, 0,
                              "subrequest: \"%V?%V\" logged again",
                              &VAR_15->uri, &VAR_15->args);
            }

            VAR_15->done = 1;
            FUNC_3(VAR_15);
            return;
        }

        if (VAR_15->buffered || VAR_15->postponed) {

            if (FUNC_10(VAR_15) != VAR_11) {
                FUNC_12(VAR_15, 0);
            }

            return;
        }

        VAR_18 = VAR_15->parent;

        if (VAR_15 == VAR_17->data) {

            VAR_15->main->count--;

            if (!VAR_15->logged) {
                if (VAR_19->log_subrequest) {
                    FUNC_5(VAR_15);
                }

                VAR_15->logged = 1;

            } else {
                FUNC_15(VAR_9, VAR_17->log, 0,
                              "subrequest: \"%V?%V\" logged again",
                              &VAR_15->uri, &VAR_15->args);
            }

            VAR_15->done = 1;

            if (VAR_18->postponed && VAR_18->postponed->request == VAR_15) {
                VAR_18->postponed = VAR_18->postponed->next;
            }

            VAR_17->data = VAR_18;

        } else {

            FUNC_13(VAR_10, VAR_17->log, 0,
                           "http finalize non-active request: \"%V?%V\"",
                           &VAR_15->uri, &VAR_15->args);

            VAR_15->write_event_handler = FUNC_9;

            if (VAR_15->waited) {
                VAR_15->done = 1;
            }
        }

        if (FUNC_7(VAR_18, ((void*)0)) != VAR_11) {
            VAR_15->main->count++;
            FUNC_12(VAR_15, 0);
            return;
        }

        FUNC_13(VAR_10, VAR_17->log, 0,
                       "http wake parent request: \"%V?%V\"",
                       &VAR_18->uri, &VAR_18->args);

        return;
    }

    if (VAR_15->buffered || VAR_17->buffered || VAR_15->postponed) {

        if (FUNC_10(VAR_15) != VAR_11) {
            FUNC_12(VAR_15, 0);
        }

        return;
    }

    if (VAR_15 != VAR_17->data) {
        FUNC_15(VAR_9, VAR_17->log, 0,
                      "http finalize non-active request: \"%V?%V\"",
                      &VAR_15->uri, &VAR_15->args);
        return;
    }

    VAR_15->done = 1;

    VAR_15->read_event_handler = VAR_12;
    VAR_15->write_event_handler = FUNC_8;

    if (!VAR_15->post_action) {
        VAR_15->request_complete = 1;
    }

    if (FUNC_6(VAR_15) == VAR_11) {
        return;
    }

    if (VAR_17->read->timer_set) {
        FUNC_0(VAR_17->read);
    }

    if (VAR_17->write->timer_set) {
        VAR_17->write->delayed = 0;
        FUNC_0(VAR_17->write);
    }

    if (VAR_17->read->eof) {
        FUNC_1(VAR_15, 0);
        return;
    }

    FUNC_3(VAR_15);
}
