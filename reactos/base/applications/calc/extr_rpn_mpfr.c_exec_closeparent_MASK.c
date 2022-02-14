
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_7__ {scalar_t__ operation; int number; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_8__ {scalar_t__ is_nan; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*,scalar_t__) ;

void FUNC_7(calc_number_t *VAR_2)
{
    calc_node_t *VAR_3, VAR_4;

    FUNC_3(&VAR_4.number);
    FUNC_4(&VAR_4.number, VAR_2);
    while (!FUNC_1()) {
        VAR_3 = FUNC_2();

        if (VAR_3->operation == VAR_0)
            break;

        FUNC_6(&VAR_4, VAR_3, &VAR_4, VAR_3->operation);
        if (VAR_1.is_nan) {
            FUNC_0();
            return;
        }
    }
    FUNC_4(VAR_2, &VAR_4.number);
    FUNC_5(&VAR_4.number);
}
