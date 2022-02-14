
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int calc_number_t ;
struct TYPE_14__ {int mf; } ;
struct TYPE_13__ {size_t operation; TYPE_5__ number; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_15__ {unsigned int prec; } ;
struct TYPE_12__ {size_t prev_operator; scalar_t__ is_nan; int prev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_11__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 TYPE_8__* VAR_4 ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_9(calc_number_t *VAR_5)
{
    calc_node_t *VAR_6, VAR_7;
    unsigned int VAR_8;

    FUNC_3(VAR_7.number.mf);
    VAR_6 = FUNC_5();
    FUNC_4(&VAR_7, VAR_6);
    VAR_8 = VAR_4[VAR_7.operation].prec;
    while (!FUNC_1()) {
        VAR_6 = FUNC_5();

        if (VAR_8 <= VAR_4[VAR_6->operation].prec) {
            if (VAR_6->operation == VAR_1) continue;

            FUNC_7(&VAR_3.prev, &VAR_7.number);
            FUNC_8(&VAR_7, VAR_6, &VAR_7, VAR_6->operation);
            if (VAR_3.is_nan) {
                FUNC_0();
                FUNC_2(VAR_7.number.mf);
                return;
            }
        } else {
            FUNC_6(VAR_6);
            break;
        }
    }

    if (VAR_7.operation != VAR_0 && VAR_7.operation != VAR_2)
        FUNC_6(&VAR_7);

    VAR_3.prev_operator = VAR_6->operation;

    FUNC_7(VAR_5, &VAR_7.number);
    FUNC_2(VAR_7.number.mf);
}
