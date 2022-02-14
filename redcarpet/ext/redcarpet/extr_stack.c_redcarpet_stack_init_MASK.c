
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ asize; scalar_t__ size; int * item; } ;


 int FUNC_0 (struct stack*,size_t) ;

int
FUNC_1(struct stack *VAR_0, size_t VAR_1)
{
 VAR_0->item = ((void*)0);
 VAR_0->size = 0;
 VAR_0->asize = 0;

 if (!VAR_1)
  VAR_1 = 8;

 return FUNC_0(VAR_0, VAR_1);
}
