
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {scalar_t__ tries; scalar_t__ start_time; TYPE_10__* connection; scalar_t__ cached; int * sockaddr; int data; int (* free ) (TYPE_9__*,int ,int) ;} ;
struct TYPE_26__ {scalar_t__ cache_status; scalar_t__ (* reinit_request ) (TYPE_7__*) ;TYPE_9__ peer; TYPE_2__* conf; scalar_t__ request_sent; TYPE_1__* state; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_27__ {int method; TYPE_4__* connection; TYPE_3__* cache; scalar_t__ request_body_no_buffering; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_25__ {int no_wait_shutdown; int no_send_shutdown; } ;
struct TYPE_24__ {int log; scalar_t__ error; } ;
struct TYPE_23__ {scalar_t__ stale_error; } ;
struct TYPE_22__ {scalar_t__ next_upstream_timeout; int next_upstream; int cache_use_stale; } ;
struct TYPE_21__ {int status; int bytes_sent; } ;
struct TYPE_20__ {int fd; scalar_t__ pool; TYPE_5__* ssl; int sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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






 int VAR_16 ;

 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_10__*) ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_10(ngx_http_request_t *VAR_24, ngx_http_upstream_t *VAR_25,
    ngx_uint_t VAR_26)
{
    ngx_msec_t VAR_27;
    ngx_uint_t VAR_28, VAR_29;

    FUNC_5(VAR_18, VAR_24->connection->log, 0,
                   "http next upstream, %xi", VAR_26);

    if (VAR_25->peer.sockaddr) {

        if (VAR_25->peer.connection) {
            VAR_25->state->bytes_sent = VAR_25->peer.connection->sent;
        }

        if (VAR_26 == 134
            || VAR_26 == 133)
        {
            VAR_29 = VAR_22;

        } else {
            VAR_29 = VAR_21;
        }

        VAR_25->peer.free(&VAR_25->peer, VAR_25->peer.data, VAR_29);
        VAR_25->peer.sockaddr = ((void*)0);
    }

    if (VAR_26 == 128) {
        FUNC_6(VAR_19, VAR_24->connection->log, VAR_1,
                      "upstream timed out");
    }

    if (VAR_25->peer.cached && VAR_26 == VAR_15) {

        VAR_25->peer.tries++;
    }

    switch (VAR_26) {

    case 128:
    case 129:
        VAR_28 = VAR_7;
        break;

    case 131:
        VAR_28 = VAR_8;
        break;

    case 130:
        VAR_28 = VAR_13;
        break;

    case 134:
        VAR_28 = VAR_6;
        break;

    case 133:
        VAR_28 = VAR_10;
        break;

    case 132:
        VAR_28 = VAR_14;
        break;






    default:
        VAR_28 = VAR_2;
    }

    if (VAR_24->connection->error) {
        FUNC_4(VAR_24, VAR_25,
                                           VAR_5);
        return;
    }

    VAR_25->state->status = VAR_28;

    VAR_27 = VAR_25->conf->next_upstream_timeout;

    if (VAR_25->request_sent
        && (VAR_24->method & (VAR_12|VAR_9|VAR_11)))
    {
        VAR_26 |= VAR_16;
    }

    if (VAR_25->peer.tries == 0
        || ((VAR_25->conf->next_upstream & VAR_26) != VAR_26)
        || (VAR_25->request_sent && VAR_24->request_body_no_buffering)
        || (VAR_27 && VAR_23 - VAR_25->peer.start_time >= VAR_27))
    {
        FUNC_4(VAR_24, VAR_25, VAR_28);
        return;
    }

    if (VAR_25->peer.connection) {
        FUNC_5(VAR_18, VAR_24->connection->log, 0,
                       "close http upstream connection: %d",
                       VAR_25->peer.connection->fd);
        if (VAR_25->peer.connection->pool) {
            FUNC_1(VAR_25->peer.connection->pool);
        }

        FUNC_0(VAR_25->peer.connection);
        VAR_25->peer.connection = ((void*)0);
    }

    FUNC_3(VAR_24, VAR_25);
}
