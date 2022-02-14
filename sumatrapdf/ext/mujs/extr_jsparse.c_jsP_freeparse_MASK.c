
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* gcast; } ;
typedef TYPE_1__ js_State ;
struct TYPE_8__ {int jumps; struct TYPE_8__* gcnext; } ;
typedef TYPE_2__ js_Ast ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2(js_State *VAR_0)
{
 js_Ast *VAR_1 = VAR_0->gcast;
 while (VAR_1) {
  js_Ast *VAR_2 = VAR_1->gcnext;
  FUNC_0(VAR_0, VAR_1->jumps);
  FUNC_1(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->gcast = ((void*)0);
}
