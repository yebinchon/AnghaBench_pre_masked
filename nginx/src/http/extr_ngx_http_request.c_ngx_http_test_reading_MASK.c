
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_8__ {scalar_t__ stream; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {int eof; scalar_t__ kq_errno; int error; scalar_t__ active; int pending_eof; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_10__ {int error; int log; int fd; TYPE_2__* read; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,void*,int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ,char*,int,int ) ;

void
FUNC_7(ngx_http_request_t *VAR_15)
{
    int VAR_16;
    char VAR_17[1];
    ngx_err_t VAR_18;
    ngx_event_t *VAR_19;
    ngx_connection_t *VAR_20;

    VAR_20 = VAR_15->connection;
    VAR_19 = VAR_20->read;

    FUNC_4(VAR_3, VAR_20->log, 0, "http test reading");
    VAR_16 = FUNC_6(VAR_20->fd, VAR_17, 1, VAR_0);

    if (VAR_16 == 0) {
        VAR_19->eof = 1;
        VAR_20->error = 1;
        VAR_18 = 0;

        goto closed;

    } else if (VAR_16 == -1) {
        VAR_18 = VAR_13;

        if (VAR_18 != VAR_1) {
            VAR_19->eof = 1;
            VAR_20->error = 1;

            goto closed;
        }
    }



    if ((VAR_12 & VAR_9) && VAR_19->active) {

        if (FUNC_1(VAR_19, VAR_6, 0) != VAR_5) {
            FUNC_2(VAR_15, 0);
        }
    }

    return;

closed:

    if (VAR_18) {
        VAR_19->error = 1;
    }

    FUNC_5(VAR_4, VAR_20->log, VAR_18,
                  "client prematurely closed connection");

    FUNC_3(VAR_15, VAR_2);
}
