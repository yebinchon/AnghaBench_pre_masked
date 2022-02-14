
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int size; void** item; } ;


 scalar_t__ FUNC_0 (struct stack*,int) ;

int
FUNC_1(struct stack *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_0->size * 2) < 0)
  return -1;

 VAR_0->item[VAR_0->size++] = VAR_1;
 return 0;
}
