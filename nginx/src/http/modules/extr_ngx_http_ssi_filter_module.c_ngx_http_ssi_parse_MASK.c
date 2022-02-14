
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef char u_char ;
typedef int ngx_int_t ;
typedef int ngx_http_ssi_state_e ;
struct TYPE_18__ {int len; char* data; } ;
struct TYPE_13__ {int nelts; } ;
struct TYPE_19__ {int state; size_t looked; char* copy_end; char* pos; char* value_buf; int value_len; int saved_state; TYPE_4__* buf; int * copy_start; TYPE_5__ command; TYPE_10__* param; TYPE_11__ params; void* key; int saved; } ;
typedef TYPE_6__ ngx_http_ssi_ctx_t ;
struct TYPE_20__ {TYPE_3__* connection; int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_17__ {char* last; int * pos; } ;
struct TYPE_16__ {int log; } ;
struct TYPE_15__ {int len; char* data; } ;
struct TYPE_14__ {int len; char* data; } ;
struct TYPE_12__ {TYPE_2__ key; TYPE_1__ value; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_10__* FUNC_0 (TYPE_11__*) ;
 void* FUNC_1 (void*,char) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 void* FUNC_4 (int ,int) ;
__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_7, ngx_http_ssi_ctx_t *VAR_8)
{
    u_char *VAR_9, *VAR_10, *VAR_11, *VAR_12, VAR_13;
    size_t VAR_14;
    ngx_http_ssi_state_e VAR_15;

    VAR_15 = VAR_8->state;
    VAR_14 = VAR_8->looked;
    VAR_11 = VAR_8->buf->last;
    VAR_12 = VAR_8->copy_end;

    for (VAR_9 = VAR_8->pos; VAR_9 < VAR_11; VAR_9++) {

        VAR_13 = *VAR_9;

        if (VAR_15 == 129) {



            for ( ;; ) {
                if (VAR_13 == '<') {
                    VAR_12 = VAR_9;
                    VAR_14 = 1;
                    VAR_15 = 128;

                    goto tag_started;
                }

                if (++VAR_9 == VAR_11) {
                    break;
                }

                VAR_13 = *VAR_9;
            }

            VAR_8->state = VAR_15;
            VAR_8->pos = VAR_9;
            VAR_8->looked = VAR_14;
            VAR_8->copy_end = VAR_9;

            if (VAR_8->copy_start == ((void*)0)) {
                VAR_8->copy_start = VAR_8->buf->pos;
            }

            return VAR_0;

        tag_started:

            continue;
        }

        switch (VAR_15) {

        case 129:

            break;

        case 128:
            switch (VAR_13) {
            case '!':
                VAR_14 = 2;
                VAR_15 = 146;
                break;

            case '<':
                VAR_12 = VAR_9;
                break;

            default:
                VAR_12 = VAR_9;
                VAR_14 = 0;
                VAR_15 = 129;
                break;
            }

            break;

        case 146:
            switch (VAR_13) {
            case '-':
                VAR_14 = 3;
                VAR_15 = 145;
                break;

            case '<':
                VAR_12 = VAR_9;
                VAR_14 = 1;
                VAR_15 = 128;
                break;

            default:
                VAR_12 = VAR_9;
                VAR_14 = 0;
                VAR_15 = 129;
                break;
            }

            break;

        case 145:
            switch (VAR_13) {
            case '-':
                VAR_14 = 4;
                VAR_15 = 130;
                break;

            case '<':
                VAR_12 = VAR_9;
                VAR_14 = 1;
                VAR_15 = 128;
                break;

            default:
                VAR_12 = VAR_9;
                VAR_14 = 0;
                VAR_15 = 129;
                break;
            }

            break;

        case 130:
            switch (VAR_13) {
            case '#':
                if (VAR_9 - VAR_8->pos < 4) {
                    VAR_8->saved = 0;
                }
                VAR_14 = 0;
                VAR_15 = 136;
                break;

            case '<':
                VAR_12 = VAR_9;
                VAR_14 = 1;
                VAR_15 = 128;
                break;

            default:
                VAR_12 = VAR_9;
                VAR_14 = 0;
                VAR_15 = 129;
                break;
            }

            break;

        case 136:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                break;

            default:
                VAR_8->command.len = 1;
                VAR_8->command.data = FUNC_4(VAR_7->pool,
                                                VAR_2);
                if (VAR_8->command.data == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8->command.data[0] = VAR_13;

                VAR_8->key = 0;
                VAR_8->key = FUNC_1(VAR_8->key, VAR_13);

                VAR_8->params.nelts = 0;

                VAR_15 = 147;
                break;
            }

            break;

        case 147:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                VAR_15 = 134;
                break;

            case '-':
                VAR_15 = 144;
                break;

            default:
                if (VAR_8->command.len == VAR_2) {
                    FUNC_2(VAR_5, VAR_7->connection->log, 0,
                                  "the \"%V%c...\" SSI command is too long",
                                  &VAR_8->command, VAR_13);

                    VAR_15 = 139;
                    break;
                }

                VAR_8->command.data[VAR_8->command.len++] = VAR_13;
                VAR_8->key = FUNC_1(VAR_8->key, VAR_13);
            }

            break;

        case 134:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                break;

            case '-':
                VAR_15 = 144;
                break;

            default:
                VAR_8->param = FUNC_0(&VAR_8->params);
                if (VAR_8->param == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8->param->key.len = 1;
                VAR_8->param->key.data = FUNC_4(VAR_7->pool,
                                                   VAR_4);
                if (VAR_8->param->key.data == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8->param->key.data[0] = VAR_13;

                VAR_8->param->value.len = 0;

                if (VAR_8->value_buf == ((void*)0)) {
                    VAR_8->param->value.data = FUNC_4(VAR_7->pool,
                                                         VAR_8->value_len + 1);
                    if (VAR_8->param->value.data == ((void*)0)) {
                        return VAR_1;
                    }

                } else {
                    VAR_8->param->value.data = VAR_8->value_buf;
                }

                VAR_15 = 138;
                break;
            }

            break;

        case 138:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                VAR_15 = 135;
                break;

            case '=':
                VAR_15 = 133;
                break;

            case '-':
                VAR_15 = 141;

                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"-\" symbol after \"%V\" "
                              "parameter in \"%V\" SSI command",
                              &VAR_8->param->key, &VAR_8->command);
                break;

            default:
                if (VAR_8->param->key.len == VAR_4) {
                    VAR_15 = 139;
                    FUNC_2(VAR_5, VAR_7->connection->log, 0,
                                  "too long \"%V%c...\" parameter in "
                                  "\"%V\" SSI command",
                                  &VAR_8->param->key, VAR_13, &VAR_8->command);
                    break;
                }

                VAR_8->param->key.data[VAR_8->param->key.len++] = VAR_13;
            }

            break;

        case 135:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                break;

            case '=':
                VAR_15 = 133;
                break;

            default:
                if (VAR_13 == '-') {
                    VAR_15 = 141;
                } else {
                    VAR_15 = 139;
                }

                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"%c\" symbol after \"%V\" "
                              "parameter in \"%V\" SSI command",
                              VAR_13, &VAR_8->param->key, &VAR_8->command);
                break;
            }

            break;

        case 133:
            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                break;

            case '"':
                VAR_15 = 142;
                break;

            case '\'':
                VAR_15 = 131;
                break;

            default:
                if (VAR_13 == '-') {
                    VAR_15 = 141;
                } else {
                    VAR_15 = 139;
                }

                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"%c\" symbol before value of "
                              "\"%V\" parameter in \"%V\" SSI command",
                              VAR_13, &VAR_8->param->key, &VAR_8->command);
                break;
            }

            break;

        case 142:
            switch (VAR_13) {
            case '"':
                VAR_15 = 137;
                break;

            case '\\':
                VAR_8->saved_state = 142;
                VAR_15 = 132;



            default:
                if (VAR_8->param->value.len == VAR_8->value_len) {
                    FUNC_2(VAR_5, VAR_7->connection->log, 0,
                                  "too long \"%V%c...\" value of \"%V\" "
                                  "parameter in \"%V\" SSI command",
                                  &VAR_8->param->value, VAR_13, &VAR_8->param->key,
                                  &VAR_8->command);
                    VAR_15 = 139;
                    break;
                }

                VAR_8->param->value.data[VAR_8->param->value.len++] = VAR_13;
            }

            break;

        case 131:
            switch (VAR_13) {
            case '\'':
                VAR_15 = 137;
                break;

            case '\\':
                VAR_8->saved_state = 131;
                VAR_15 = 132;



            default:
                if (VAR_8->param->value.len == VAR_8->value_len) {
                    FUNC_2(VAR_5, VAR_7->connection->log, 0,
                                  "too long \"%V%c...\" value of \"%V\" "
                                  "parameter in \"%V\" SSI command",
                                  &VAR_8->param->value, VAR_13, &VAR_8->param->key,
                                  &VAR_8->command);
                    VAR_15 = 139;
                    break;
                }

                VAR_8->param->value.data[VAR_8->param->value.len++] = VAR_13;
            }

            break;

        case 132:
            VAR_15 = VAR_8->saved_state;

            if (VAR_8->param->value.len == VAR_8->value_len) {
                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "too long \"%V%c...\" value of \"%V\" "
                              "parameter in \"%V\" SSI command",
                              &VAR_8->param->value, VAR_13, &VAR_8->param->key,
                              &VAR_8->command);
                VAR_15 = 139;
                break;
            }

            VAR_8->param->value.data[VAR_8->param->value.len++] = VAR_13;

            break;

        case 137:

            if (VAR_8->param->value.len + 1 < VAR_8->value_len / 2) {
                VAR_10 = FUNC_4(VAR_7->pool, VAR_8->param->value.len + 1);
                if (VAR_10 == ((void*)0)) {
                    return VAR_1;
                }

                FUNC_3(VAR_10, VAR_8->param->value.data,
                           VAR_8->param->value.len);

                VAR_8->value_buf = VAR_8->param->value.data;
                VAR_8->param->value.data = VAR_10;

            } else {
                VAR_8->value_buf = ((void*)0);
            }

            switch (VAR_13) {
            case ' ':
            case 149:
            case 148:
            case '\t':
                VAR_15 = 134;
                break;

            case '-':
                VAR_15 = 144;
                break;

            default:
                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"%c\" symbol after \"%V\" value "
                              "of \"%V\" parameter in \"%V\" SSI command",
                              VAR_13, &VAR_8->param->value, &VAR_8->param->key,
                              &VAR_8->command);
                VAR_15 = 139;
                break;
            }

            break;

        case 144:
            switch (VAR_13) {
            case '-':
                VAR_15 = 143;
                break;

            default:
                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"%c\" symbol in \"%V\" SSI command",
                              VAR_13, &VAR_8->command);
                VAR_15 = 139;
                break;
            }

            break;

        case 143:
            switch (VAR_13) {
            case '>':
                VAR_8->state = 129;
                VAR_8->pos = VAR_9 + 1;
                VAR_8->looked = VAR_14;
                VAR_8->copy_end = VAR_12;

                if (VAR_8->copy_start == ((void*)0) && VAR_12) {
                    VAR_8->copy_start = VAR_8->buf->pos;
                }

                return VAR_6;

            default:
                FUNC_2(VAR_5, VAR_7->connection->log, 0,
                              "unexpected \"%c\" symbol in \"%V\" SSI command",
                              VAR_13, &VAR_8->command);
                VAR_15 = 139;
                break;
            }

            break;

        case 139:
            switch (VAR_13) {
            case '-':
                VAR_15 = 141;
                break;

            default:
                break;
            }

            break;

        case 141:
            switch (VAR_13) {
            case '-':
                VAR_15 = 140;
                break;

            default:
                VAR_15 = 139;
                break;
            }

            break;

        case 140:
            switch (VAR_13) {
            case '>':
                VAR_8->state = 129;
                VAR_8->pos = VAR_9 + 1;
                VAR_8->looked = VAR_14;
                VAR_8->copy_end = VAR_12;

                if (VAR_8->copy_start == ((void*)0) && VAR_12) {
                    VAR_8->copy_start = VAR_8->buf->pos;
                }

                return VAR_3;

            default:
                VAR_15 = 139;
                break;
            }

            break;
        }
    }

    VAR_8->state = VAR_15;
    VAR_8->pos = VAR_9;
    VAR_8->looked = VAR_14;

    VAR_8->copy_end = (VAR_15 == 129) ? VAR_9 : VAR_12;

    if (VAR_8->copy_start == ((void*)0) && VAR_8->copy_end) {
        VAR_8->copy_start = VAR_8->buf->pos;
    }

    return VAR_0;
}
