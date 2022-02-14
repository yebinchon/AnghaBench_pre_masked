
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


struct TYPE_36__ {int nelts; } ;
struct TYPE_41__ {scalar_t__ len; } ;
struct TYPE_38__ {int blocked; int mail_state; int quit; scalar_t__ arg_start; TYPE_2__* buffer; int state; TYPE_1__ args; TYPE_6__ out; int command; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_39__ {scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_40__ {int timedout; int write; int log; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_37__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_17 (TYPE_3__*,TYPE_5__*) ;






 int FUNC_18 (TYPE_6__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_19(ngx_event_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_connection_t *VAR_11;
    ngx_mail_session_t *VAR_12;

    VAR_11 = VAR_9->data;
    VAR_12 = VAR_11->data;

    FUNC_0(VAR_2, VAR_11->log, 0, "smtp auth state");

    if (VAR_9->timedout) {
        FUNC_1(VAR_3, VAR_11->log, VAR_1, "client timed out");
        VAR_11->timedout = 1;
        FUNC_8(VAR_11);
        return;
    }

    if (VAR_12->out.len) {
        FUNC_0(VAR_2, VAR_11->log, 0, "smtp send handler busy");
        VAR_12->blocked = 1;
        return;
    }

    VAR_12->blocked = 0;

    VAR_10 = FUNC_9(VAR_12, VAR_11);

    if (VAR_10 == VAR_0 || VAR_10 == 145) {
        return;
    }

    FUNC_18(&VAR_12->out, VAR_6);

    if (VAR_10 == 143) {
        switch (VAR_12->mail_state) {

        case 128:

            switch (VAR_12->command) {

            case 140:
            case 141:
                VAR_10 = FUNC_13(VAR_12, VAR_11);
                break;

            case 142:
                VAR_10 = FUNC_12(VAR_12, VAR_11);
                break;

            case 137:
                VAR_12->quit = 1;
                FUNC_18(&VAR_12->out, VAR_4);
                break;

            case 139:
                VAR_10 = FUNC_14(VAR_12, VAR_11);
                break;

            case 136:
                VAR_10 = FUNC_15(VAR_12, VAR_11);
                break;

            case 135:
                VAR_10 = FUNC_16(VAR_12, VAR_11);
                break;

            case 138:
                break;

            case 134:
                VAR_10 = FUNC_17(VAR_12, VAR_11);
                FUNC_18(&VAR_12->out, VAR_8);
                break;

            default:
                VAR_10 = 144;
                break;
            }

            break;

        case 130:
            VAR_10 = FUNC_6(VAR_12, VAR_11, 0);

            FUNC_18(&VAR_12->out, VAR_7);
            VAR_12->mail_state = 131;
            break;

        case 131:
            VAR_10 = FUNC_5(VAR_12, VAR_11);
            break;

        case 129:
            VAR_10 = FUNC_7(VAR_12, VAR_11, 0);
            break;

        case 133:
            VAR_10 = FUNC_3(VAR_12, VAR_11);
            break;

        case 132:
            VAR_10 = FUNC_4(VAR_12, VAR_11, 0);
            break;
        }
    }

    if (VAR_12->buffer->pos < VAR_12->buffer->last) {
        VAR_12->blocked = 1;
    }

    switch (VAR_10) {

    case 146:
        FUNC_2(VAR_12, VAR_11);
        return;

    case 145:
        FUNC_11(VAR_12);
        return;

    case 144:
        VAR_12->mail_state = 128;
        VAR_12->state = 0;
        FUNC_18(&VAR_12->out, VAR_5);



    case 143:
        VAR_12->args.nelts = 0;

        if (VAR_12->buffer->pos == VAR_12->buffer->last) {
            VAR_12->buffer->pos = VAR_12->buffer->start;
            VAR_12->buffer->last = VAR_12->buffer->start;
        }

        if (VAR_12->state) {
            VAR_12->arg_start = VAR_12->buffer->pos;
        }

        FUNC_10(VAR_11->write);
    }
}
