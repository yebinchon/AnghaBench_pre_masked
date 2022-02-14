
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_22__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_37__ {scalar_t__ len; int * data; } ;
typedef TYPE_8__ ngx_str_t ;
struct TYPE_32__ {int len; char* data; } ;
struct TYPE_28__ {int len; char* data; } ;
struct TYPE_38__ {int mail_state; TYPE_7__* proxy; TYPE_5__* connection; TYPE_3__ passwd; TYPE_1__ login; } ;
typedef TYPE_9__ ngx_mail_session_t ;
struct TYPE_24__ {int timeout; } ;
typedef TYPE_10__ ngx_mail_proxy_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {int (* handler ) (TYPE_19__*) ;int log; scalar_t__ timedout; TYPE_12__* data; } ;
typedef TYPE_11__ ngx_event_t ;
struct TYPE_26__ {int timedout; scalar_t__ (* send ) (TYPE_12__*,int *,scalar_t__) ;TYPE_22__* log; int read; TYPE_4__* write; int pool; TYPE_9__* data; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_36__ {TYPE_6__* buffer; } ;
struct TYPE_35__ {int start; int last; int pos; } ;
struct TYPE_34__ {TYPE_19__* write; TYPE_23__* read; TYPE_2__* log; } ;
struct TYPE_33__ {int (* handler ) (TYPE_19__*) ;} ;
struct TYPE_31__ {char* action; } ;
struct TYPE_30__ {int (* handler ) (TYPE_19__*) ;} ;
struct TYPE_29__ {int * action; } ;
struct TYPE_27__ {int (* handler ) (TYPE_19__*) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_23__*,int ) ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,TYPE_22__*,int ,char*) ;
 TYPE_10__* FUNC_5 (TYPE_9__*,int ) ;
 int FUNC_6 (TYPE_19__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (TYPE_9__*,int ) ;
 int FUNC_9 (TYPE_9__*) ;
 void* FUNC_10 (int ,scalar_t__) ;



 int FUNC_11 (TYPE_8__*) ;
 scalar_t__ FUNC_12 (TYPE_12__*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(ngx_event_t *VAR_8)
{
    u_char *VAR_9;
    ngx_int_t VAR_10;
    ngx_str_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_mail_session_t *VAR_13;
    ngx_mail_proxy_conf_t *VAR_14;

    FUNC_3(VAR_5, VAR_8->log, 0,
                   "mail proxy pop3 auth handler");

    VAR_12 = VAR_8->data;
    VAR_13 = VAR_12->data;

    if (VAR_8->timedout) {
        FUNC_4(VAR_6, VAR_12->log, VAR_4,
                      "upstream timed out");
        VAR_12->timedout = 1;
        FUNC_7(VAR_13);
        return;
    }

    VAR_10 = FUNC_8(VAR_13, 0);

    if (VAR_10 == VAR_2) {
        return;
    }

    if (VAR_10 == VAR_3) {
        FUNC_9(VAR_13);
        return;
    }

    switch (VAR_13->mail_state) {

    case 129:
        FUNC_3(VAR_5, VAR_8->log, 0, "mail proxy send user");

        VAR_13->connection->log->action = "sending user name to upstream";

        VAR_11.len = sizeof("USER ") - 1 + VAR_13->login.len + 2;
        VAR_11.data = FUNC_10(VAR_12->pool, VAR_11.len);
        if (VAR_11.data == ((void*)0)) {
            FUNC_7(VAR_13);
            return;
        }

        VAR_9 = FUNC_1(VAR_11.data, "USER ", sizeof("USER ") - 1);
        VAR_9 = FUNC_1(VAR_9, VAR_13->login.data, VAR_13->login.len);
        *VAR_9++ = VAR_0; *VAR_9 = VAR_1;

        VAR_13->mail_state = 128;
        break;

    case 128:
        FUNC_3(VAR_5, VAR_8->log, 0, "mail proxy send pass");

        VAR_13->connection->log->action = "sending password to upstream";

        VAR_11.len = sizeof("PASS ") - 1 + VAR_13->passwd.len + 2;
        VAR_11.data = FUNC_10(VAR_12->pool, VAR_11.len);
        if (VAR_11.data == ((void*)0)) {
            FUNC_7(VAR_13);
            return;
        }

        VAR_9 = FUNC_1(VAR_11.data, "PASS ", sizeof("PASS ") - 1);
        VAR_9 = FUNC_1(VAR_9, VAR_13->passwd.data, VAR_13->passwd.len);
        *VAR_9++ = VAR_0; *VAR_9 = VAR_1;

        VAR_13->mail_state = 130;
        break;

    case 130:
        VAR_13->connection->read->handler = FUNC_6;
        VAR_13->connection->write->handler = FUNC_6;
        VAR_8->handler = FUNC_6;
        VAR_12->write->handler = FUNC_6;

        VAR_14 = FUNC_5(VAR_13, VAR_7);
        FUNC_0(VAR_13->connection->read, VAR_14->timeout);
        FUNC_2(VAR_12->read);

        VAR_12->log->action = ((void*)0);
        FUNC_4(VAR_6, VAR_12->log, 0, "client logged in");

        FUNC_6(VAR_13->connection->write);

        return;

    default:



        break;
    }

    if (VAR_12->send(VAR_12, VAR_11.data, VAR_11.len) < (ssize_t) VAR_11.len) {




        FUNC_7(VAR_13);
        return;
    }

    VAR_13->proxy->buffer->pos = VAR_13->proxy->buffer->start;
    VAR_13->proxy->buffer->last = VAR_13->proxy->buffer->start;
}
