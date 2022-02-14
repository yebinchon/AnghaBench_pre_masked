
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_15__ {TYPE_9__* connection; int * sockaddr; int data; int (* free ) (TYPE_10__*,int ,scalar_t__) ;} ;
struct TYPE_22__ {scalar_t__ start_time; TYPE_10__ peer; TYPE_2__* state; int received; TYPE_1__* resolved; } ;
typedef TYPE_7__ ngx_stream_upstream_t ;
struct TYPE_23__ {TYPE_5__* connection; TYPE_7__* upstream; } ;
typedef TYPE_8__ ngx_stream_session_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_24__ {scalar_t__ type; TYPE_6__* ssl; scalar_t__ fd; TYPE_4__* write; TYPE_3__* read; int sent; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_21__ {int no_wait_shutdown; } ;
struct TYPE_20__ {int log; } ;
struct TYPE_19__ {scalar_t__ error; } ;
struct TYPE_18__ {scalar_t__ error; } ;
struct TYPE_17__ {scalar_t__ response_time; int bytes_sent; int bytes_received; } ;
struct TYPE_16__ {int * ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*,scalar_t__) ;
 int FUNC_5 (TYPE_10__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(ngx_stream_session_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_connection_t *VAR_7;
    ngx_stream_upstream_t *VAR_8;

    FUNC_1(VAR_0, VAR_4->connection->log, 0,
                   "finalize stream proxy: %i", VAR_5);

    VAR_8 = VAR_4->upstream;

    if (VAR_8 == ((void*)0)) {
        goto noupstream;
    }

    if (VAR_8->resolved && VAR_8->resolved->ctx) {
        FUNC_2(VAR_8->resolved->ctx);
        VAR_8->resolved->ctx = ((void*)0);
    }

    VAR_7 = VAR_8->peer.connection;

    if (VAR_8->state) {
        if (VAR_8->state->response_time == (ngx_msec_t) -1) {
            VAR_8->state->response_time = VAR_3 - VAR_8->start_time;
        }

        if (VAR_7) {
            VAR_8->state->bytes_received = VAR_8->received;
            VAR_8->state->bytes_sent = VAR_7->sent;
        }
    }

    if (VAR_8->peer.free && VAR_8->peer.sockaddr) {
        VAR_6 = 0;

        if (VAR_7 && VAR_7->type == VAR_2
            && (VAR_7->read->error || VAR_7->write->error))
        {
            VAR_6 = VAR_1;
        }

        VAR_8->peer.free(&VAR_8->peer, VAR_8->peer.data, VAR_6);
        VAR_8->peer.sockaddr = ((void*)0);
    }

    if (VAR_7) {
        FUNC_1(VAR_0, VAR_4->connection->log, 0,
                       "close stream proxy upstream connection: %d", VAR_7->fd);
        FUNC_0(VAR_7);
        VAR_8->peer.connection = ((void*)0);
    }

noupstream:

    FUNC_4(VAR_4, VAR_5);
}
