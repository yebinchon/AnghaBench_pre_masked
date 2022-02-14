
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {struct pool* next; struct pool* mem; } ;


 int FUNC_0 (struct pool*) ;
 struct pool* VAR_0 ;

void FUNC_1(void)
{
 struct pool *VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); ) {
  struct pool *VAR_2;

  if (VAR_1->mem)
   FUNC_0(VAR_1->mem);

  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
}
