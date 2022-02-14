
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _variable {int * next; int * assign_hook; int * substitute_hook; int * value; int * name; } ;
typedef struct _variable* VariableSpace ;


 struct _variable* FUNC_0 (int) ;

VariableSpace
FUNC_1(void)
{
 struct _variable *VAR_0;

 VAR_0 = FUNC_0(sizeof *VAR_0);
 VAR_0->name = ((void*)0);
 VAR_0->value = ((void*)0);
 VAR_0->substitute_hook = ((void*)0);
 VAR_0->assign_hook = ((void*)0);
 VAR_0->next = ((void*)0);

 return VAR_0;
}
