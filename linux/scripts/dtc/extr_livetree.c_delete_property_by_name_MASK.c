
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; int name; } ;
struct node {struct property* proplist; } ;


 int FUNC_0 (struct property*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

void FUNC_2(struct node *VAR_0, char *VAR_1)
{
 struct property *VAR_2 = VAR_0->proplist;

 while (VAR_2) {
  if (FUNC_1(VAR_2->name, VAR_1)) {
   FUNC_0(VAR_2);
   return;
  }
  VAR_2 = VAR_2->next;
 }
}
