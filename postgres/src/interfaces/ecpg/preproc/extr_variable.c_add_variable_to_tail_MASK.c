
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
 struct arguments *VAR_3,
      *VAR_4 = (struct arguments *) FUNC_0(sizeof(struct arguments));

 for (VAR_3 = *VAR_0; VAR_3 && VAR_3->next; VAR_3 = VAR_3->next);

 VAR_4->variable = VAR_1;
 VAR_4->indicator = VAR_2;
 VAR_4->next = ((void*)0);

 if (VAR_3)
  VAR_3->next = VAR_4;
 else
  *VAR_0 = VAR_4;
}
