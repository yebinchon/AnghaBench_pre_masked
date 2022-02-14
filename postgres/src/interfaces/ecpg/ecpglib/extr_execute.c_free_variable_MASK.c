
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {struct variable* next; } ;


 int FUNC_0 (struct variable*) ;

__attribute__((used)) static void
FUNC_1(struct variable *VAR_0)
{
 struct variable *VAR_1;

 while (VAR_0)
 {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
