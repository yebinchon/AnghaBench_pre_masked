
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {int read_event_handler; scalar_t__ request_body_no_buffering; int request_length; TYPE_3__* request_body; TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ rest; int (* post_handler ) (TYPE_2__*) ;TYPE_1__* buf; int * busy; } ;
typedef TYPE_3__ ngx_http_request_body_t ;
struct TYPE_21__ {int client_body_timeout; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {scalar_t__ (* recv ) (TYPE_5__*,scalar_t__,size_t) ;int error; TYPE_14__* read; int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_23__ {int * next; TYPE_1__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_18__ {scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
struct TYPE_17__ {scalar_t__ timer_set; int ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_14__*,int ) ;
 int FUNC_1 (TYPE_14__*) ;
 scalar_t__ FUNC_2 (TYPE_14__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,scalar_t__,size_t) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_9)
{
    off_t VAR_10;
    size_t VAR_11;
    ssize_t VAR_12;
    ngx_int_t VAR_13;
    ngx_chain_t VAR_14;
    ngx_connection_t *VAR_15;
    ngx_http_request_body_t *VAR_16;
    ngx_http_core_loc_conf_t *VAR_17;

    VAR_15 = VAR_9->connection;
    VAR_16 = VAR_9->request_body;

    FUNC_5(VAR_4, VAR_15->log, 0,
                   "http read client request body");

    for ( ;; ) {
        for ( ;; ) {
            if (VAR_16->buf->last == VAR_16->buf->end) {

                if (VAR_16->buf->pos != VAR_16->buf->last) {



                    VAR_14.buf = VAR_16->buf;
                    VAR_14.next = ((void*)0);

                    VAR_13 = FUNC_4(VAR_9, &VAR_14);

                    if (VAR_13 != VAR_6) {
                        return VAR_13;
                    }

                } else {



                    VAR_13 = FUNC_4(VAR_9, ((void*)0));

                    if (VAR_13 != VAR_6) {
                        return VAR_13;
                    }
                }

                if (VAR_16->busy != ((void*)0)) {
                    if (VAR_9->request_body_no_buffering) {
                        if (VAR_15->read->timer_set) {
                            FUNC_1(VAR_15->read);
                        }

                        if (FUNC_2(VAR_15->read, 0) != VAR_6) {
                            return VAR_3;
                        }

                        return VAR_0;
                    }

                    return VAR_3;
                }

                VAR_16->buf->pos = VAR_16->buf->start;
                VAR_16->buf->last = VAR_16->buf->start;
            }

            VAR_11 = VAR_16->buf->end - VAR_16->buf->last;
            VAR_10 = VAR_16->rest - (VAR_16->buf->last - VAR_16->buf->pos);

            if ((off_t) VAR_11 > VAR_10) {
                VAR_11 = (size_t) VAR_10;
            }

            VAR_12 = VAR_15->recv(VAR_15, VAR_16->buf->last, VAR_11);

            FUNC_6(VAR_4, VAR_15->log, 0,
                           "http client request body recv %z", VAR_12);

            if (VAR_12 == VAR_0) {
                break;
            }

            if (VAR_12 == 0) {
                FUNC_7(VAR_5, VAR_15->log, 0,
                              "client prematurely closed connection");
            }

            if (VAR_12 == 0 || VAR_12 == VAR_1) {
                VAR_15->error = 1;
                return VAR_2;
            }

            VAR_16->buf->last += VAR_12;
            VAR_9->request_length += VAR_12;

            if (VAR_12 == VAR_10) {


                VAR_14.buf = VAR_16->buf;
                VAR_14.next = ((void*)0);

                VAR_13 = FUNC_4(VAR_9, &VAR_14);

                if (VAR_13 != VAR_6) {
                    return VAR_13;
                }
            }

            if (VAR_16->rest == 0) {
                break;
            }

            if (VAR_16->buf->last < VAR_16->buf->end) {
                break;
            }
        }

        FUNC_6(VAR_4, VAR_15->log, 0,
                       "http client request body rest %O", VAR_16->rest);

        if (VAR_16->rest == 0) {
            break;
        }

        if (!VAR_15->read->ready) {

            if (VAR_9->request_body_no_buffering
                && VAR_16->buf->pos != VAR_16->buf->last)
            {


                VAR_14.buf = VAR_16->buf;
                VAR_14.next = ((void*)0);

                VAR_13 = FUNC_4(VAR_9, &VAR_14);

                if (VAR_13 != VAR_6) {
                    return VAR_13;
                }
            }

            VAR_17 = FUNC_3(VAR_9, VAR_8);
            FUNC_0(VAR_15->read, VAR_17->client_body_timeout);

            if (FUNC_2(VAR_15->read, 0) != VAR_6) {
                return VAR_3;
            }

            return VAR_0;
        }
    }

    if (VAR_15->read->timer_set) {
        FUNC_1(VAR_15->read);
    }

    if (!VAR_9->request_body_no_buffering) {
        VAR_9->read_event_handler = VAR_7;
        VAR_16->post_handler(VAR_9);
    }

    return VAR_6;
}
