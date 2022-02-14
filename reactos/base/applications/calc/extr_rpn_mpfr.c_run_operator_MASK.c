
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int number; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_9__ {scalar_t__ base; } ;
struct TYPE_8__ {int (* op_i ) (int *,int *,int *) ;int (* op_f ) (int *,int *,int *) ;int (* op_p ) (int *,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;

void FUNC_4(calc_node_t *VAR_5,
                  calc_node_t *VAR_6,
                  calc_node_t *VAR_7,
                  unsigned int VAR_8)
{
    if (VAR_2.base == VAR_1) {
        if (VAR_4) {
            VAR_4 = VAR_0;
            VAR_3[VAR_8].op_p(&VAR_5->number, &VAR_6->number, &VAR_7->number);
        } else
            VAR_3[VAR_8].op_f(&VAR_5->number, &VAR_6->number, &VAR_7->number);
    } else {
        VAR_3[VAR_8].op_i(&VAR_5->number, &VAR_6->number, &VAR_7->number);

        FUNC_0(&VAR_5->number);
    }
}
