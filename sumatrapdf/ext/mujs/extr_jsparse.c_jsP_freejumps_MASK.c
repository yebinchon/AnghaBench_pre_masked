
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ js_JumpList ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_0, js_JumpList *VAR_1)
{
 while (VAR_1) {
  js_JumpList *VAR_2 = VAR_1->next;
  FUNC_0(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
}
