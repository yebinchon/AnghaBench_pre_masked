
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int ngx_str_t ;
struct TYPE_15__ {int mail_state; int * buffer; int args; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_16__ {int client_buffer_size; } ;
typedef TYPE_3__ ngx_mail_imap_srv_conf_t ;
struct TYPE_17__ {scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_18__ {int timedout; TYPE_1__* read; int pool; TYPE_2__* data; TYPE_12__* log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_14__ {int (* handler ) (TYPE_4__*) ;} ;
struct TYPE_13__ {char* action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_12__*,int ,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(ngx_event_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_mail_session_t *VAR_7;
    ngx_mail_imap_srv_conf_t *VAR_8;

    VAR_6 = VAR_5->data;

    VAR_6->log->action = "in auth state";

    if (VAR_5->timedout) {
        FUNC_2(VAR_2, VAR_6->log, VAR_1, "client timed out");
        VAR_6->timedout = 1;
        FUNC_3(VAR_6);
        return;
    }

    VAR_7 = VAR_6->data;

    if (VAR_7->buffer == ((void*)0)) {
        if (FUNC_0(&VAR_7->args, VAR_6->pool, 2, sizeof(ngx_str_t))
            == VAR_0)
        {
            FUNC_6(VAR_7);
            return;
        }

        VAR_8 = FUNC_4(VAR_7, VAR_4);

        VAR_7->buffer = FUNC_1(VAR_6->pool, VAR_8->client_buffer_size);
        if (VAR_7->buffer == ((void*)0)) {
            FUNC_6(VAR_7);
            return;
        }
    }

    VAR_7->mail_state = VAR_3;
    VAR_6->read->handler = FUNC_5;

    FUNC_5(VAR_5);
}
