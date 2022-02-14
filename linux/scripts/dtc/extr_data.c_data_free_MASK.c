
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marker {struct marker* ref; struct marker* next; } ;
struct data {struct marker* val; struct marker* markers; } ;


 int FUNC_0 (struct marker*) ;

void FUNC_1(struct data VAR_0)
{
 struct marker *VAR_1, *VAR_2;

 VAR_1 = VAR_0.markers;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->ref);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 if (VAR_0.val)
  FUNC_0(VAR_0.val);
}
