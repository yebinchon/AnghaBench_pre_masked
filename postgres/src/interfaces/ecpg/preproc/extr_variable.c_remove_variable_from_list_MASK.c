
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int dummy; } ;
struct arguments {struct arguments* next; struct variable* variable; } ;



void
FUNC_0(struct arguments **VAR_0, struct variable *VAR_1)
{
 struct arguments *VAR_2,
      *VAR_3 = ((void*)0);
 bool VAR_4 = 0;

 for (VAR_2 = *VAR_0; VAR_2; VAR_2 = VAR_2->next)
 {
  if (VAR_2->variable == VAR_1)
  {
   VAR_4 = 1;
   break;
  }
  VAR_3 = VAR_2;
 }
 if (VAR_4)
 {
  if (VAR_3)
   VAR_3->next = VAR_2->next;
  else
   *VAR_0 = VAR_2->next;
 }
}
