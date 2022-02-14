
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ins_item {int item; struct nn_ep* ep; } ;
struct nn_ep {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_ins_item *VAR_0, struct nn_ep *VAR_1)
{
    VAR_0->ep = VAR_1;
    FUNC_0 (&VAR_0->item);
}
