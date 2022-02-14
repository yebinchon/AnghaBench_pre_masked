
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_11__ {int mail_state; int * buffer; int args; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_12__ {scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_13__ {int timedout; TYPE_1__* read; int pool; TYPE_2__* data; TYPE_9__* log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_14__ {char* action; } ;
struct TYPE_10__ {int (* handler ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_9__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;

void
FUNC_6(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_mail_session_t *VAR_6;

    VAR_5 = VAR_4->data;

    VAR_5->log->action = "in auth state";

    if (VAR_4->timedout) {
        FUNC_2(VAR_2, VAR_5->log, VAR_1, "client timed out");
        VAR_5->timedout = 1;
        FUNC_3(VAR_5);
        return;
    }

    VAR_6 = VAR_5->data;

    if (VAR_6->buffer == ((void*)0)) {
        if (FUNC_0(&VAR_6->args, VAR_5->pool, 2, sizeof(ngx_str_t))
            == VAR_0)
        {
            FUNC_5(VAR_6);
            return;
        }

        VAR_6->buffer = FUNC_1(VAR_5->pool, 128);
        if (VAR_6->buffer == ((void*)0)) {
            FUNC_5(VAR_6);
            return;
        }
    }

    VAR_6->mail_state = VAR_3;
    VAR_5->read->handler = FUNC_4;

    FUNC_4(VAR_4);
}
