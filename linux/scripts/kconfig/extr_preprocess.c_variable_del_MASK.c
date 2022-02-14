
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {struct variable* value; struct variable* name; int node; } ;


 int FUNC_0 (struct variable*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct variable *VAR_0)
{
 FUNC_1(&VAR_0->node);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->value);
 FUNC_0(VAR_0);
}
