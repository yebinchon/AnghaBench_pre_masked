
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var_list {int number; void* pointer; struct var_list* next; } ;


 struct var_list* VAR_0 ;

void *
FUNC_0(int VAR_1)
{
 struct var_list *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0) && VAR_2->number != VAR_1; VAR_2 = VAR_2->next);
 return (VAR_2) ? VAR_2->pointer : ((void*)0);
}
