
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_mem {struct auto_mem* pointer; struct auto_mem* next; } ;


 int FUNC_0 (struct auto_mem*) ;
 struct auto_mem* FUNC_1 () ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 struct auto_mem *VAR_0 = FUNC_1();


 if (VAR_0)
 {
  do
  {
   struct auto_mem *VAR_1 = VAR_0;

   VAR_0 = VAR_0->next;
   FUNC_0(VAR_1->pointer);
   FUNC_0(VAR_1);
  } while (VAR_0);
  FUNC_2(((void*)0));
 }
}
