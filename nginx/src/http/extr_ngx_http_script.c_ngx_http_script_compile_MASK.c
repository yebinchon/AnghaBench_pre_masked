
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {scalar_t__ len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {size_t captures_mask; int dup_capture; int args; int cf; TYPE_1__* source; int size; scalar_t__ compile_args; int variables; } ;
typedef TYPE_3__ ngx_http_script_compile_t ;
struct TYPE_13__ {size_t len; char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

ngx_int_t
FUNC_7(ngx_http_script_compile_t *VAR_3)
{
    u_char VAR_4;
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;

    if (FUNC_6(VAR_3) != VAR_2) {
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_3->source->len; ) {

        VAR_5.len = 0;

        if (VAR_3->source->data[VAR_6] == '$') {

            if (++VAR_6 == VAR_3->source->len) {
                goto invalid_variable;
            }

            if (VAR_3->source->data[VAR_6] >= '1' && VAR_3->source->data[VAR_6] <= '9') {
                FUNC_0(VAR_1, VAR_3->cf, 0,
                                   "using variable \"$%c\" requires "
                                   "PCRE library", VAR_3->source->data[VAR_6]);
                return VAR_0;

            }

            if (VAR_3->source->data[VAR_6] == '{') {
                VAR_7 = 1;

                if (++VAR_6 == VAR_3->source->len) {
                    goto invalid_variable;
                }

                VAR_5.data = &VAR_3->source->data[VAR_6];

            } else {
                VAR_7 = 0;
                VAR_5.data = &VAR_3->source->data[VAR_6];
            }

            for ( ; VAR_6 < VAR_3->source->len; VAR_6++, VAR_5.len++) {
                VAR_4 = VAR_3->source->data[VAR_6];

                if (VAR_4 == '}' && VAR_7) {
                    VAR_6++;
                    VAR_7 = 0;
                    break;
                }

                if ((VAR_4 >= 'A' && VAR_4 <= 'Z')
                    || (VAR_4 >= 'a' && VAR_4 <= 'z')
                    || (VAR_4 >= '0' && VAR_4 <= '9')
                    || VAR_4 == '_')
                {
                    continue;
                }

                break;
            }

            if (VAR_7) {
                FUNC_0(VAR_1, VAR_3->cf, 0,
                                   "the closing bracket in \"%V\" "
                                   "variable is missing", &VAR_5);
                return VAR_0;
            }

            if (VAR_5.len == 0) {
                goto invalid_variable;
            }

            VAR_3->variables++;

            if (FUNC_4(VAR_3, &VAR_5) != VAR_2) {
                return VAR_0;
            }

            continue;
        }

        if (VAR_3->source->data[VAR_6] == '?' && VAR_3->compile_args) {
            VAR_3->args = 1;
            VAR_3->compile_args = 0;

            if (FUNC_1(VAR_3) != VAR_2) {
                return VAR_0;
            }

            VAR_6++;

            continue;
        }

        VAR_5.data = &VAR_3->source->data[VAR_6];

        while (VAR_6 < VAR_3->source->len) {

            if (VAR_3->source->data[VAR_6] == '$') {
                break;
            }

            if (VAR_3->source->data[VAR_6] == '?') {

                VAR_3->args = 1;

                if (VAR_3->compile_args) {
                    break;
                }
            }

            VAR_6++;
            VAR_5.len++;
        }

        VAR_3->size += VAR_5.len;

        if (FUNC_3(VAR_3, &VAR_5, (VAR_6 == VAR_3->source->len))
            != VAR_2)
        {
            return VAR_0;
        }
    }

    return FUNC_5(VAR_3);

invalid_variable:

    FUNC_0(VAR_1, VAR_3->cf, 0, "invalid variable name");

    return VAR_0;
}
