
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ gc_stack ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(gc_stack *VAR_0)
{
 gc_stack *VAR_1 = VAR_0->next;

 while (VAR_1) {
  VAR_0 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_0;
 }
}
