
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* destroy ) (int ) ;} ;
struct nn_ep {int fsm; int item; int tran; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_ep*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4 (struct nn_ep *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    VAR_1->ops.destroy (VAR_1->tran);
    FUNC_2 (&VAR_1->item);
    FUNC_1 (&VAR_1->fsm);
}
