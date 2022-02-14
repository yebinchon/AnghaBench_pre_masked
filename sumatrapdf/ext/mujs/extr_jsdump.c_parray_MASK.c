
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* b; int a; } ;
typedef TYPE_1__ js_Ast ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, js_Ast *VAR_3)
{
 FUNC_2('[');
 while (VAR_3) {
  FUNC_0(VAR_3->type == VAR_0);
  FUNC_3(VAR_2, VAR_1, VAR_3->a);
  VAR_3 = VAR_3->b;
  if (VAR_3)
   FUNC_1();
 }
 FUNC_2(']');
}
