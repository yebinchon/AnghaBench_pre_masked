
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assignment {struct assignment* variable; struct assignment* next; } ;


 struct assignment* VAR_0 ;
 int FUNC_0 (struct assignment*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 while (VAR_0)
 {
  struct assignment *VAR_1 = VAR_0;

  VAR_0 = VAR_1->next;
  FUNC_0(VAR_1->variable);
  FUNC_0(VAR_1);
 }
}
