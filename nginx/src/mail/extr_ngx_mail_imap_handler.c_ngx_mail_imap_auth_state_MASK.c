
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_37__ {int len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_41__ {scalar_t__ len; int * data; } ;
struct TYPE_36__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_34__ {scalar_t__ len; int * data; } ;
struct TYPE_38__ {int blocked; int mail_state; int quit; scalar_t__ arg_start; TYPE_8__ tag; TYPE_2__* buffer; scalar_t__ state; TYPE_3__ args; TYPE_1__ tagged_line; TYPE_8__ out; TYPE_8__ text; int command; scalar_t__ backslash; } ;
typedef TYPE_5__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_39__ {scalar_t__ timedout; TYPE_7__* data; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_40__ {int timedout; int write; int pool; int log; TYPE_5__* data; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_35__ {scalar_t__ start; scalar_t__ pos; scalar_t__ last; } ;


 int VAR_0 ;


 int VAR_1 ;




 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (int *,int *,scalar_t__) ;






 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_7__*,int ) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_13 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_15 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (int *,int *,scalar_t__) ;
 int * FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (TYPE_8__*,int ) ;

void
FUNC_21(ngx_event_t *VAR_12)
{
    u_char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    ngx_str_t *VAR_17;
    ngx_int_t VAR_18;
    ngx_uint_t VAR_19, VAR_20;
    ngx_connection_t *VAR_21;
    ngx_mail_session_t *VAR_22;

    VAR_21 = VAR_12->data;
    VAR_22 = VAR_21->data;

    FUNC_1(VAR_3, VAR_21->log, 0, "imap auth state");

    if (VAR_12->timedout) {
        FUNC_3(VAR_4, VAR_21->log, VAR_1, "client timed out");
        VAR_21->timedout = 1;
        FUNC_10(VAR_21);
        return;
    }

    if (VAR_22->out.len) {
        FUNC_1(VAR_3, VAR_21->log, 0, "imap send handler busy");
        VAR_22->blocked = 1;
        return;
    }

    VAR_22->blocked = 0;

    VAR_18 = FUNC_15(VAR_22, VAR_21);

    if (VAR_18 == VAR_0 || VAR_18 == 141) {
        return;
    }

    VAR_19 = 1;
    VAR_22->text.len = 0;
    FUNC_20(&VAR_22->out, VAR_9);

    if (VAR_18 == VAR_5) {

        FUNC_2(VAR_3, VAR_21->log, 0, "imap auth command: %i",
                       VAR_22->command);

        if (VAR_22->backslash) {

            VAR_17 = VAR_22->args.elts;

            for (VAR_20 = 0; VAR_20 < VAR_22->args.nelts; VAR_20++) {
                VAR_14 = VAR_17[VAR_20].data;
                VAR_16 = VAR_14 + VAR_17[VAR_20].len;

                for (VAR_15 = VAR_14; VAR_15 < VAR_16; VAR_14++) {
                    *VAR_14 = *VAR_15;
                    if (*VAR_15++ == '\\') {
                        *VAR_14 = *VAR_15++;
                    }
                }

                VAR_17[VAR_20].len = VAR_14 - VAR_17[VAR_20].data;
            }

            VAR_22->backslash = 0;
        }

        switch (VAR_22->mail_state) {

        case 128:

            switch (VAR_22->command) {

            case 138:
                VAR_18 = FUNC_13(VAR_22, VAR_21);
                break;

            case 140:
                VAR_18 = FUNC_11(VAR_22, VAR_21);
                VAR_19 = (VAR_18 != VAR_5);
                break;

            case 139:
                VAR_18 = FUNC_12(VAR_22, VAR_21);
                break;

            case 137:
                VAR_22->quit = 1;
                FUNC_20(&VAR_22->text, VAR_6);
                break;

            case 136:
                break;

            case 135:
                VAR_18 = FUNC_14(VAR_22, VAR_21);
                break;

            default:
                VAR_18 = 134;
                break;
            }

            break;

        case 130:
            VAR_18 = FUNC_8(VAR_22, VAR_21, 0);

            VAR_19 = 0;
            FUNC_20(&VAR_22->out, VAR_10);
            VAR_22->mail_state = 131;

            break;

        case 131:
            VAR_18 = FUNC_7(VAR_22, VAR_21);
            break;

        case 129:
            VAR_18 = FUNC_9(VAR_22, VAR_21, 0);
            break;

        case 133:
            VAR_18 = FUNC_5(VAR_22, VAR_21);
            break;

        case 132:
            VAR_18 = FUNC_6(VAR_22, VAR_21, 0);
            break;
        }

    } else if (VAR_18 == VAR_2) {
        VAR_19 = 0;
        FUNC_20(&VAR_22->out, VAR_8);
    }

    switch (VAR_18) {

    case 142:
        FUNC_4(VAR_22, VAR_21);
        return;

    case 141:
        FUNC_17(VAR_22);
        return;

    case 134:
        VAR_22->state = 0;
        FUNC_20(&VAR_22->out, VAR_7);
        VAR_22->mail_state = 128;
        break;
    }

    if (VAR_19) {
        if (VAR_22->tag.len == 0) {
            FUNC_20(&VAR_22->tag, VAR_11);
        }

        if (VAR_22->tagged_line.len < VAR_22->tag.len + VAR_22->text.len + VAR_22->out.len) {
            VAR_22->tagged_line.len = VAR_22->tag.len + VAR_22->text.len + VAR_22->out.len;
            VAR_22->tagged_line.data = FUNC_19(VAR_21->pool, VAR_22->tagged_line.len);
            if (VAR_22->tagged_line.data == ((void*)0)) {
                FUNC_10(VAR_21);
                return;
            }
        }

        VAR_13 = VAR_22->tagged_line.data;

        if (VAR_22->text.len) {
            VAR_13 = FUNC_0(VAR_13, VAR_22->text.data, VAR_22->text.len);
        }

        VAR_13 = FUNC_0(VAR_13, VAR_22->tag.data, VAR_22->tag.len);
        FUNC_18(VAR_13, VAR_22->out.data, VAR_22->out.len);

        VAR_22->out.len = VAR_22->text.len + VAR_22->tag.len + VAR_22->out.len;
        VAR_22->out.data = VAR_22->tagged_line.data;
    }

    if (VAR_18 != VAR_2) {
        VAR_22->args.nelts = 0;

        if (VAR_22->state) {

            VAR_22->arg_start = VAR_22->buffer->start + VAR_22->tag.len;
            VAR_22->buffer->pos = VAR_22->arg_start;
            VAR_22->buffer->last = VAR_22->arg_start;

        } else {
            VAR_22->buffer->pos = VAR_22->buffer->start;
            VAR_22->buffer->last = VAR_22->buffer->start;
            VAR_22->tag.len = 0;
        }
    }

    FUNC_16(VAR_21->write);
}
