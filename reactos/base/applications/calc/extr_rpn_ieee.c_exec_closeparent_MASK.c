
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_7__ {scalar_t__ operation; int number; int base; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_8__ {scalar_t__ is_nan; int base; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,scalar_t__) ;

void FUNC_4(calc_number_t *VAR_2)
{
    calc_node_t *VAR_3, VAR_4;

    VAR_4.number = *VAR_2;
    VAR_4.base = VAR_1.base;
    while (!FUNC_1()) {
        VAR_3 = FUNC_2();

        if (VAR_3->operation == VAR_0)
            break;

        FUNC_3(&VAR_4, VAR_3, &VAR_4, VAR_3->operation);
        if (VAR_1.is_nan) {
            FUNC_0();
            return;
        }
    }
    *VAR_2 = VAR_4.number;
}
