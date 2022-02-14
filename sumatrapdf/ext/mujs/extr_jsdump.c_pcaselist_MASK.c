
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* b; struct TYPE_5__* a; } ;
typedef TYPE_1__ js_Ast ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(int VAR_2, js_Ast *VAR_3)
{
 while (VAR_3) {
  js_Ast *VAR_4 = VAR_3->a;
  if (VAR_4->type == VAR_0) {
   FUNC_0(VAR_2); FUNC_4("case "); FUNC_3(VAR_2, VAR_4->a); FUNC_2(':'); FUNC_1();
   FUNC_5(VAR_2, VAR_4->b);
  }
  if (VAR_4->type == VAR_1) {
   FUNC_0(VAR_2); FUNC_4("default:"); FUNC_1();
   FUNC_5(VAR_2, VAR_4->a);
  }
  VAR_3 = VAR_3->b;
 }
}
