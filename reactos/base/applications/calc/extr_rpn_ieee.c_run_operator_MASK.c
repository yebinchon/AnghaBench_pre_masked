
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_15__ ;


struct TYPE_22__ {void* f; int i; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_23__ {scalar_t__ base; TYPE_1__ number; } ;
typedef TYPE_2__ calc_node_t ;
struct TYPE_21__ {scalar_t__ base; int is_nan; } ;
struct TYPE_20__ {int (* op_i ) (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;int (* op_f ) (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;int (* op_p ) (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;} ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_18__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*) ;
 TYPE_15__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void FUNC_7(calc_node_t *VAR_6,
                  calc_node_t *VAR_7,
                  calc_node_t *VAR_8,
                  unsigned int VAR_9)
{
    calc_number_t VAR_10, VAR_11, VAR_12;
    DWORD VAR_13 = VAR_3.base;

    VAR_10 = VAR_7->number;
    VAR_11 = VAR_8->number;
    if (VAR_7->base == VAR_1 && VAR_8->base != VAR_1) {
        VAR_11.f = FUNC_3(&VAR_8->number);
        VAR_13 = VAR_1;
    } else
    if (VAR_7->base != VAR_1 && VAR_8->base == VAR_1) {
        VAR_10.f = FUNC_3(&VAR_7->number);
        VAR_13 = VAR_1;
    }

    if (VAR_13 == VAR_1) {
        if (VAR_5) {
            VAR_5 = VAR_0;
            VAR_4[VAR_9].op_p(&VAR_12, &VAR_10, &VAR_11);
        } else
            VAR_4[VAR_9].op_f(&VAR_12, &VAR_10, &VAR_11);
        if (FUNC_0(VAR_12.f) == 0)
            VAR_3.is_nan = VAR_2;
    } else {
        VAR_4[VAR_9].op_i(&VAR_12, &VAR_10, &VAR_11);

        FUNC_1(&VAR_12);
    }

    if (VAR_7->base == VAR_1 && VAR_8->base != VAR_1) {
        VAR_6->number.i = FUNC_2(&VAR_12);
        FUNC_1(&VAR_6->number);
    } else
    if (VAR_7->base != VAR_1 && VAR_8->base == VAR_1)
        VAR_6->number.f = VAR_12.f;
    else
        VAR_6->number = VAR_12;
}
