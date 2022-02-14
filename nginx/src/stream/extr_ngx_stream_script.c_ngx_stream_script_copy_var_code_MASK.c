
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_11__ {int len; int data; int not_found; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_12__ {int index; } ;
typedef TYPE_3__ ngx_stream_script_var_code_t ;
struct TYPE_13__ {int * pos; TYPE_7__* session; scalar_t__ flushed; int skip; scalar_t__ ip; } ;
typedef TYPE_4__ ngx_stream_script_engine_t ;
struct TYPE_14__ {TYPE_1__* connection; } ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int,int *) ;
 TYPE_2__* FUNC_2 (TYPE_7__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_7__*,int ) ;

void
FUNC_4(ngx_stream_script_engine_t *VAR_1)
{
    u_char *VAR_2;
    ngx_stream_variable_value_t *VAR_3;
    ngx_stream_script_var_code_t *VAR_4;

    VAR_4 = (ngx_stream_script_var_code_t *) VAR_1->ip;

    VAR_1->ip += sizeof(ngx_stream_script_var_code_t);

    if (!VAR_1->skip) {

        if (VAR_1->flushed) {
            VAR_3 = FUNC_3(VAR_1->session, VAR_4->index);

        } else {
            VAR_3 = FUNC_2(VAR_1->session, VAR_4->index);
        }

        if (VAR_3 && !VAR_3->not_found) {
            VAR_2 = VAR_1->pos;
            VAR_1->pos = FUNC_0(VAR_2, VAR_3->data, VAR_3->len);

            FUNC_1(VAR_0,
                           VAR_1->session->connection->log, 0,
                           "stream script var: \"%*s\"", VAR_1->pos - VAR_2, VAR_2);
        }
    }
}
