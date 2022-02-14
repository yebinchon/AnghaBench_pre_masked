
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
typedef struct TYPE_28__ TYPE_22__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_11__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_table_elt_t ;
struct TYPE_32__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_31__ {int headers; TYPE_5__ server; } ;
struct TYPE_30__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_29__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_27__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_33__ {scalar_t__ request_end; scalar_t__ request_start; scalar_t__ request_length; scalar_t__ method_end; scalar_t__ host_end; scalar_t__ host_start; scalar_t__ http_version; TYPE_11__ request_line; TYPE_22__* header_in; int pool; TYPE_4__ headers_in; scalar_t__ schema_start; TYPE_3__ schema; scalar_t__ schema_end; TYPE_2__ http_protocol; TYPE_1__ method_name; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_34__ {int (* handler ) (TYPE_7__*) ;scalar_t__ timedout; int log; TYPE_8__* data; } ;
typedef TYPE_7__ ngx_event_t ;
struct TYPE_35__ {int timedout; TYPE_9__* log; TYPE_6__* data; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_36__ {char* action; } ;
struct TYPE_28__ {scalar_t__ pos; scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int) ;
 char** VAR_15 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_22__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_8__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int ,int ,int ,char*) ;
 int FUNC_13 (int ,TYPE_9__*,int ,char*,TYPE_11__*) ;
 int FUNC_14 (int ,TYPE_9__*,int ,char*) ;

__attribute__((used)) static void
FUNC_15(ngx_event_t *VAR_16)
{
    ssize_t VAR_17;
    ngx_int_t VAR_18, VAR_19;
    ngx_str_t VAR_20;
    ngx_connection_t *VAR_21;
    ngx_http_request_t *VAR_22;

    VAR_21 = VAR_16->data;
    VAR_22 = VAR_21->data;

    FUNC_12(VAR_12, VAR_16->log, 0,
                   "http process request line");

    if (VAR_16->timedout) {
        FUNC_14(VAR_13, VAR_21->log, VAR_3, "client timed out");
        VAR_21->timedout = 1;
        FUNC_1(VAR_22, VAR_8);
        return;
    }

    VAR_18 = VAR_0;

    for ( ;; ) {

        if (VAR_18 == VAR_0) {
            VAR_17 = FUNC_7(VAR_22);

            if (VAR_17 == VAR_0 || VAR_17 == VAR_2) {
                break;
            }
        }

        VAR_18 = FUNC_3(VAR_22, VAR_22->header_in);

        if (VAR_18 == VAR_14) {



            VAR_22->request_line.len = VAR_22->request_end - VAR_22->request_start;
            VAR_22->request_line.data = VAR_22->request_start;
            VAR_22->request_length = VAR_22->header_in->pos - VAR_22->request_start;

            FUNC_13(VAR_12, VAR_21->log, 0,
                           "http request line: \"%V\"", &VAR_22->request_line);

            VAR_22->method_name.len = VAR_22->method_end - VAR_22->request_start + 1;
            VAR_22->method_name.data = VAR_22->request_line.data;

            if (VAR_22->http_protocol.data) {
                VAR_22->http_protocol.len = VAR_22->request_end - VAR_22->http_protocol.data;
            }

            if (FUNC_6(VAR_22) != VAR_14) {
                break;
            }

            if (VAR_22->schema_end) {
                VAR_22->schema.len = VAR_22->schema_end - VAR_22->schema_start;
                VAR_22->schema.data = VAR_22->schema_start;
            }

            if (VAR_22->host_end) {

                VAR_20.len = VAR_22->host_end - VAR_22->host_start;
                VAR_20.data = VAR_22->host_start;

                VAR_18 = FUNC_10(&VAR_20, VAR_22->pool, 0);

                if (VAR_18 == VAR_1) {
                    FUNC_14(VAR_13, VAR_21->log, 0,
                                  "client sent invalid host in request line");
                    FUNC_2(VAR_22, VAR_4);
                    break;
                }

                if (VAR_18 == VAR_2) {
                    FUNC_1(VAR_22, VAR_6);
                    break;
                }

                if (FUNC_9(VAR_22, &VAR_20) == VAR_2) {
                    break;
                }

                VAR_22->headers_in.server = VAR_20;
            }

            if (VAR_22->http_version < VAR_10) {

                if (VAR_22->headers_in.server.len == 0
                    && FUNC_9(VAR_22, &VAR_22->headers_in.server)
                       == VAR_2)
                {
                    break;
                }

                FUNC_4(VAR_22);
                break;
            }


            if (FUNC_11(&VAR_22->headers_in.headers, VAR_22->pool, 20,
                              sizeof(ngx_table_elt_t))
                != VAR_14)
            {
                FUNC_1(VAR_22, VAR_6);
                break;
            }

            VAR_21->log->action = "reading client request headers";

            VAR_16->handler = FUNC_5;
            FUNC_5(VAR_16);

            break;
        }

        if (VAR_18 != VAR_0) {



            FUNC_14(VAR_13, VAR_21->log, 0,
                          VAR_15[VAR_18 - VAR_5]);

            if (VAR_18 == VAR_7) {
                FUNC_2(VAR_22, VAR_11);

            } else {
                FUNC_2(VAR_22, VAR_4);
            }

            break;
        }



        if (VAR_22->header_in->pos == VAR_22->header_in->end) {

            VAR_19 = FUNC_0(VAR_22, 1);

            if (VAR_19 == VAR_2) {
                FUNC_1(VAR_22, VAR_6);
                break;
            }

            if (VAR_19 == VAR_1) {
                VAR_22->request_line.len = VAR_22->header_in->end - VAR_22->request_start;
                VAR_22->request_line.data = VAR_22->request_start;

                FUNC_14(VAR_13, VAR_21->log, 0,
                              "client sent too long URI");
                FUNC_2(VAR_22, VAR_9);
                break;
            }
        }
    }

    FUNC_8(VAR_21);
}
