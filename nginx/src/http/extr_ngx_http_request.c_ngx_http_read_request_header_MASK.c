
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_16__ {TYPE_1__* header_in; TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_17__ {int client_header_timeout; } ;
typedef TYPE_3__ ngx_http_core_srv_conf_t ;
struct TYPE_18__ {int timer_set; scalar_t__ ready; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_19__ {scalar_t__ (* recv ) (TYPE_5__*,scalar_t__,scalar_t__) ;int error; TYPE_7__* log; TYPE_4__* read; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_20__ {char* action; } ;
struct TYPE_15__ {scalar_t__ last; scalar_t__ pos; scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_7(ngx_http_request_t *VAR_7)
{
    ssize_t VAR_8;
    ngx_event_t *VAR_9;
    ngx_connection_t *VAR_10;
    ngx_http_core_srv_conf_t *VAR_11;

    VAR_10 = VAR_7->connection;
    VAR_9 = VAR_10->read;

    VAR_8 = VAR_7->header_in->last - VAR_7->header_in->pos;

    if (VAR_8 > 0) {
        return VAR_8;
    }

    if (VAR_9->ready) {
        VAR_8 = VAR_10->recv(VAR_10, VAR_7->header_in->last,
                    VAR_7->header_in->end - VAR_7->header_in->last);
    } else {
        VAR_8 = VAR_0;
    }

    if (VAR_8 == VAR_0) {
        if (!VAR_9->timer_set) {
            VAR_11 = FUNC_4(VAR_7, VAR_6);
            FUNC_0(VAR_9, VAR_11->client_header_timeout);
        }

        if (FUNC_1(VAR_9, 0) != VAR_5) {
            FUNC_2(VAR_7, VAR_3);
            return VAR_1;
        }

        return VAR_0;
    }

    if (VAR_8 == 0) {
        FUNC_5(VAR_4, VAR_10->log, 0,
                      "client prematurely closed connection");
    }

    if (VAR_8 == 0 || VAR_8 == VAR_1) {
        VAR_10->error = 1;
        VAR_10->log->action = "reading client request headers";

        FUNC_3(VAR_7, VAR_2);
        return VAR_1;
    }

    VAR_7->header_in->last += VAR_8;

    return VAR_8;
}
