
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enum_prog; char const* str_prog; } ;
typedef TYPE_1__ j2k_prog_order_t ;
typedef int OPJ_PROG_ORDER ;


 TYPE_1__* VAR_0 ;

const char *FUNC_0(OPJ_PROG_ORDER VAR_1)
{
    const j2k_prog_order_t *VAR_2;
    for (VAR_2 = VAR_0; VAR_2->enum_prog != -1; VAR_2++) {
        if (VAR_2->enum_prog == VAR_1) {
            return VAR_2->str_prog;
        }
    }
    return VAR_2->str_prog;
}
