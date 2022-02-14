
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_18__ {int greeting; } ;
typedef TYPE_1__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_19__ {int quit; int out; int * buffer; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_20__ {int timeout; } ;
typedef TYPE_3__ ngx_mail_core_srv_conf_t ;
struct TYPE_21__ {scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_22__ {int write; TYPE_13__* log; TYPE_14__* read; TYPE_2__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_17__ {int handler; } ;
struct TYPE_16__ {char* action; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_14__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_14__*,int ) ;
 int FUNC_2 (int ,TYPE_13__*,int ,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 void* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_5__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_6)
{
    ngx_connection_t *VAR_7;
    ngx_mail_session_t *VAR_8;
    ngx_mail_core_srv_conf_t *VAR_9;
    ngx_mail_smtp_srv_conf_t *VAR_10;

    VAR_7 = VAR_6->data;
    VAR_8 = VAR_7->data;

    VAR_7->log->action = "in delay pipelining state";

    if (VAR_6->timedout) {

        FUNC_2(VAR_0, VAR_7->log, 0, "delay greeting");

        VAR_6->timedout = 0;

        VAR_9 = FUNC_4(VAR_8, VAR_2);

        VAR_7->read->handler = VAR_3;

        FUNC_0(VAR_7->read, VAR_9->timeout);

        if (FUNC_1(VAR_7->read, 0) != VAR_1) {
            FUNC_3(VAR_7);
            return;
        }

        VAR_10 = FUNC_4(VAR_8, VAR_4);

        VAR_8->out = VAR_10->greeting;

    } else {

        FUNC_2(VAR_0, VAR_7->log, 0, "invalid pipelining");

        if (VAR_8->buffer == ((void*)0)) {
            if (FUNC_6(VAR_8, VAR_7) != VAR_1) {
                return;
            }
        }

        if (FUNC_7(VAR_8, VAR_7,
                                "client was rejected before greeting: \"%V\"")
            != VAR_1)
        {
            return;
        }

        FUNC_8(&VAR_8->out, VAR_5);
        VAR_8->quit = 1;
    }

    FUNC_5(VAR_7->write);
}
