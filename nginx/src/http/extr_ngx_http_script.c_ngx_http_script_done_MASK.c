
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int main; int * values; scalar_t__ complete_values; int * lengths; scalar_t__ complete_lengths; scalar_t__ root_prefix; scalar_t__ conf_prefix; scalar_t__ zero; } ;
typedef TYPE_2__ ngx_http_script_compile_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t* FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_script_compile_t *VAR_2)
{
    ngx_str_t VAR_3;
    uintptr_t *VAR_4;

    if (VAR_2->zero) {

        VAR_3.len = 1;
        VAR_3.data = (u_char *) "\0";

        if (FUNC_1(VAR_2, &VAR_3, 0) != VAR_1) {
            return VAR_0;
        }
    }

    if (VAR_2->conf_prefix || VAR_2->root_prefix) {
        if (FUNC_2(VAR_2) != VAR_1) {
            return VAR_0;
        }
    }

    if (VAR_2->complete_lengths) {
        VAR_4 = FUNC_0(*VAR_2->lengths, sizeof(uintptr_t), ((void*)0));
        if (VAR_4 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_4 = (uintptr_t) ((void*)0);
    }

    if (VAR_2->complete_values) {
        VAR_4 = FUNC_0(*VAR_2->values, sizeof(uintptr_t),
                                        &VAR_2->main);
        if (VAR_4 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_4 = (uintptr_t) ((void*)0);
    }

    return VAR_1;
}
