
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t len; int not_found; } ;
typedef TYPE_1__ ngx_stream_variable_value_t ;
struct TYPE_8__ {int index; } ;
typedef TYPE_2__ ngx_stream_script_var_code_t ;
struct TYPE_9__ {int session; scalar_t__ flushed; scalar_t__ ip; } ;
typedef TYPE_3__ ngx_stream_script_engine_t ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

size_t
FUNC_2(ngx_stream_script_engine_t *VAR_0)
{
    ngx_stream_variable_value_t *VAR_1;
    ngx_stream_script_var_code_t *VAR_2;

    VAR_2 = (ngx_stream_script_var_code_t *) VAR_0->ip;

    VAR_0->ip += sizeof(ngx_stream_script_var_code_t);

    if (VAR_0->flushed) {
        VAR_1 = FUNC_1(VAR_0->session, VAR_2->index);

    } else {
        VAR_1 = FUNC_0(VAR_0->session, VAR_2->index);
    }

    if (VAR_1 && !VAR_1->not_found) {
        return VAR_1->len;
    }

    return 0;
}
