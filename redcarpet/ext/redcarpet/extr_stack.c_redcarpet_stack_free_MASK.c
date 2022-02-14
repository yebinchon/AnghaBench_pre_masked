
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ asize; scalar_t__ size; int * item; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct stack *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->item);

 VAR_0->item = ((void*)0);
 VAR_0->size = 0;
 VAR_0->asize = 0;
}
