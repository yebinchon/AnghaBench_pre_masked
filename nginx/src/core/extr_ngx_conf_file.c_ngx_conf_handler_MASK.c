
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ module_type; int cmd_type; TYPE_4__* cycle; scalar_t__ ctx; TYPE_2__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_18__ {int type; int conf; char* (* set ) (TYPE_6__*,TYPE_7__*,void*) ;TYPE_1__ name; } ;
typedef TYPE_7__ ngx_command_t ;
struct TYPE_15__ {TYPE_3__** modules; } ;
struct TYPE_14__ {scalar_t__ type; size_t index; size_t ctx_index; TYPE_7__* commands; } ;
struct TYPE_13__ {int nelts; TYPE_5__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int* VAR_15 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*,int ,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 char* FUNC_2 (TYPE_6__*,TYPE_7__*,void*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_16, ngx_int_t VAR_17)
{
    char *VAR_18;
    void *VAR_19, **VAR_20;
    ngx_uint_t VAR_21, VAR_22;
    ngx_str_t *VAR_23;
    ngx_command_t *VAR_24;

    VAR_23 = VAR_16->args->elts;

    VAR_22 = 0;

    for (VAR_21 = 0; VAR_16->cycle->modules[VAR_21]; VAR_21++) {

        VAR_24 = VAR_16->cycle->modules[VAR_21]->commands;
        if (VAR_24 == ((void*)0)) {
            continue;
        }

        for ( ; VAR_24->name.len; VAR_24++) {

            if (VAR_23->len != VAR_24->name.len) {
                continue;
            }

            if (FUNC_1(VAR_23->data, VAR_24->name.data) != 0) {
                continue;
            }

            VAR_22 = 1;

            if (VAR_16->cycle->modules[VAR_21]->type != VAR_8
                && VAR_16->cycle->modules[VAR_21]->type != VAR_16->module_type)
            {
                continue;
            }



            if (!(VAR_24->type & VAR_16->cmd_type)) {
                continue;
            }

            if (!(VAR_24->type & VAR_3) && VAR_17 != VAR_14) {
                FUNC_0(VAR_12, VAR_16, 0,
                                  "directive \"%s\" is not terminated by \";\"",
                                  VAR_23->data);
                return VAR_11;
            }

            if ((VAR_24->type & VAR_3) && VAR_17 != VAR_4) {
                FUNC_0(VAR_12, VAR_16, 0,
                                   "directive \"%s\" has no opening \"{\"",
                                   VAR_23->data);
                return VAR_11;
            }



            if (!(VAR_24->type & VAR_2)) {

                if (VAR_24->type & VAR_6) {

                    if (VAR_16->args->nelts != 2) {
                        goto invalid;
                    }

                } else if (VAR_24->type & VAR_0) {

                    if (VAR_16->args->nelts < 2) {
                        goto invalid;
                    }

                } else if (VAR_24->type & VAR_1) {

                    if (VAR_16->args->nelts < 3) {
                        goto invalid;
                    }

                } else if (VAR_16->args->nelts > VAR_7) {

                    goto invalid;

                } else if (!(VAR_24->type & VAR_15[VAR_16->args->nelts - 1]))
                {
                    goto invalid;
                }
            }



            VAR_19 = ((void*)0);

            if (VAR_24->type & VAR_10) {
                VAR_19 = ((void **) VAR_16->ctx)[VAR_16->cycle->modules[VAR_21]->index];

            } else if (VAR_24->type & VAR_13) {
                VAR_19 = &(((void **) VAR_16->ctx)[VAR_16->cycle->modules[VAR_21]->index]);

            } else if (VAR_16->ctx) {
                VAR_20 = *(void **) ((char *) VAR_16->ctx + VAR_24->conf);

                if (VAR_20) {
                    VAR_19 = VAR_20[VAR_16->cycle->modules[VAR_21]->ctx_index];
                }
            }

            VAR_18 = VAR_24->set(VAR_16, VAR_24, VAR_19);

            if (VAR_18 == VAR_9) {
                return VAR_14;
            }

            if (VAR_18 == VAR_5) {
                return VAR_11;
            }

            FUNC_0(VAR_12, VAR_16, 0,
                               "\"%s\" directive %s", VAR_23->data, VAR_18);

            return VAR_11;
        }
    }

    if (VAR_22) {
        FUNC_0(VAR_12, VAR_16, 0,
                           "\"%s\" directive is not allowed here", VAR_23->data);

        return VAR_11;
    }

    FUNC_0(VAR_12, VAR_16, 0,
                       "unknown directive \"%s\"", VAR_23->data);

    return VAR_11;

invalid:

    FUNC_0(VAR_12, VAR_16, 0,
                       "invalid number of arguments in \"%s\" directive",
                       VAR_23->data);

    return VAR_11;
}
