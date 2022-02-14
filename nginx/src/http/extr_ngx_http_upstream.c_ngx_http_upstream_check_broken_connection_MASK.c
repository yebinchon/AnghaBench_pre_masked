
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int socklen_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int * connection; } ;
struct TYPE_12__ {TYPE_1__ peer; int cacheable; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
struct TYPE_13__ {scalar_t__ stream; TYPE_2__* upstream; TYPE_5__* connection; int uri; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {int eof; scalar_t__ kq_errno; int error; int log; scalar_t__ write; scalar_t__ active; int pending_eof; } ;
typedef TYPE_4__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_15__ {int error; int fd; } ;
typedef TYPE_5__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ,void*,int*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_14 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_5 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_17,
    ngx_event_t *VAR_18)
{
    int VAR_19;
    char VAR_20[1];
    ngx_err_t VAR_21;
    ngx_int_t VAR_22;
    ngx_connection_t *VAR_23;
    ngx_http_upstream_t *VAR_24;

    FUNC_4(VAR_4, VAR_18->log, 0,
                   "http upstream check client, write event:%d, \"%V\"",
                   VAR_18->write, &VAR_17->uri);

    VAR_23 = VAR_17->connection;
    VAR_24 = VAR_17->upstream;

    if (VAR_23->error) {
        if ((VAR_14 & VAR_10) && VAR_18->active) {

            VAR_22 = VAR_18->write ? VAR_11 : VAR_7;

            if (FUNC_1(VAR_18, VAR_22, 0) != VAR_6) {
                FUNC_2(VAR_17, VAR_24,
                                               VAR_3);
                return;
            }
        }

        if (!VAR_24->cacheable) {
            FUNC_2(VAR_17, VAR_24,
                                               VAR_2);
        }

        return;
    }
    VAR_19 = FUNC_6(VAR_23->fd, VAR_20, 1, VAR_0);

    VAR_21 = VAR_15;

    FUNC_3(VAR_4, VAR_18->log, VAR_21,
                   "http upstream recv(): %d", VAR_19);

    if (VAR_18->write && (VAR_19 >= 0 || VAR_21 == VAR_1)) {
        return;
    }

    if ((VAR_14 & VAR_10) && VAR_18->active) {

        VAR_22 = VAR_18->write ? VAR_11 : VAR_7;

        if (FUNC_1(VAR_18, VAR_22, 0) != VAR_6) {
            FUNC_2(VAR_17, VAR_24,
                                               VAR_3);
            return;
        }
    }

    if (VAR_19 > 0) {
        return;
    }

    if (VAR_19 == -1) {
        if (VAR_21 == VAR_1) {
            return;
        }

        VAR_18->error = 1;

    } else {
        VAR_21 = 0;
    }

    VAR_18->eof = 1;
    VAR_23->error = 1;

    if (!VAR_24->cacheable && VAR_24->peer.connection) {
        FUNC_5(VAR_5, VAR_18->log, VAR_21,
                      "client prematurely closed connection, "
                      "so upstream connection is closed too");
        FUNC_2(VAR_17, VAR_24,
                                           VAR_2);
        return;
    }

    FUNC_5(VAR_5, VAR_18->log, VAR_21,
                  "client prematurely closed connection");

    if (VAR_24->peer.connection == ((void*)0)) {
        FUNC_2(VAR_17, VAR_24,
                                           VAR_2);
    }
}
