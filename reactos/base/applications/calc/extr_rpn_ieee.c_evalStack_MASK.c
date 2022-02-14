
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_9__ {size_t operation; int number; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_11__ {size_t prev_operator; scalar_t__ is_nan; int prev; } ;
struct TYPE_10__ {unsigned int prec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_7__* VAR_4 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_5(calc_number_t *VAR_5)
{
    calc_node_t *VAR_6, VAR_7;
    unsigned int VAR_8;

    VAR_6 = FUNC_2();
    VAR_7 = *VAR_6;
    VAR_8 = VAR_4[VAR_7.operation].prec;
    while (!FUNC_1()) {
        VAR_6 = FUNC_2();

        if (VAR_8 <= VAR_4[VAR_6->operation].prec) {
            if (VAR_6->operation == VAR_1) continue;

            VAR_3.prev = VAR_7.number;
            FUNC_4(&VAR_7, VAR_6, &VAR_7, VAR_6->operation);
            if (VAR_3.is_nan) {
                FUNC_0();
                return;
            }
        } else {
            FUNC_3(VAR_6);
            break;
        }
    }

    if (VAR_7.operation != VAR_0 && VAR_7.operation != VAR_2)
        FUNC_3(&VAR_7);

    VAR_3.prev_operator = VAR_6->operation;

    *VAR_5 = VAR_7.number;
}
