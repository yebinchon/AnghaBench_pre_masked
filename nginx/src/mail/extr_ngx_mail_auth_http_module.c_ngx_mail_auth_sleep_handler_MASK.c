
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int auth_method; scalar_t__ mail_state; scalar_t__ auth_wait; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_18__ {int timeout; TYPE_1__* protocol; } ;
typedef TYPE_4__ ngx_mail_core_srv_conf_t ;
struct TYPE_19__ {scalar_t__ active; int (* handler ) (TYPE_5__*) ;scalar_t__ ready; scalar_t__ timedout; TYPE_6__* data; int log; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_20__ {scalar_t__ destroyed; int write; TYPE_2__* log; TYPE_3__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_16__ {char* action; } ;
struct TYPE_15__ {int (* auth_state ) (TYPE_5__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_3 ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_mail_session_t *VAR_6;
    ngx_mail_core_srv_conf_t *VAR_7;

    FUNC_2(VAR_0, VAR_4->log, 0, "mail auth sleep handler");

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;

    if (VAR_4->timedout) {

        VAR_4->timedout = 0;

        if (VAR_6->auth_wait) {
            VAR_6->auth_wait = 0;
            FUNC_3(VAR_6);
            return;
        }

        VAR_7 = FUNC_5(VAR_6, VAR_3);

        VAR_4->handler = VAR_7->protocol->auth_state;

        VAR_6->mail_state = 0;
        VAR_6->auth_method = VAR_1;

        VAR_5->log->action = "in auth state";

        FUNC_6(VAR_5->write);

        if (VAR_5->destroyed) {
            return;
        }

        FUNC_0(VAR_4, VAR_7->timeout);

        if (VAR_4->ready) {
            VAR_4->handler(VAR_4);
            return;
        }

        if (FUNC_1(VAR_4, 0) != VAR_2) {
            FUNC_4(VAR_5);
        }

        return;
    }

    if (VAR_4->active) {
        if (FUNC_1(VAR_4, 0) != VAR_2) {
            FUNC_4(VAR_5);
        }
    }
}
