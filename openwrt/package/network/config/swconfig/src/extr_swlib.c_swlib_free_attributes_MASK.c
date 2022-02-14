
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_attr {struct switch_attr* description; struct switch_attr* name; struct switch_attr* next; } ;


 int FUNC_0 (struct switch_attr*) ;

__attribute__((used)) static void
FUNC_1(struct switch_attr **VAR_0)
{
 struct switch_attr *VAR_1 = *VAR_0;
 struct switch_attr *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1->description);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 *VAR_0 = ((void*)0);
}
