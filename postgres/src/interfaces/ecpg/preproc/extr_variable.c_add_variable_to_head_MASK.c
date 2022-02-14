
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int dummy; } ;
struct arguments {struct arguments* next; struct variable* indicator; struct variable* variable; } ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(struct arguments **VAR_0, struct variable *VAR_1, struct variable *VAR_2)
{
 struct arguments *VAR_3 = (struct arguments *) FUNC_0(sizeof(struct arguments));

 VAR_3->variable = VAR_1;
 VAR_3->indicator = VAR_2;
 VAR_3->next = *VAR_0;
 *VAR_0 = VAR_3;
}
