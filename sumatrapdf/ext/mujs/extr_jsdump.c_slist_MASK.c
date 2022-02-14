
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* b; int a; } ;
typedef TYPE_1__ js_Ast ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1, js_Ast *VAR_2)
{
 FUNC_1('[');
 while (VAR_2) {
  FUNC_0(VAR_2->type == VAR_0);
  FUNC_2(VAR_1, VAR_2->a);
  VAR_2 = VAR_2->b;
  if (VAR_2)
   FUNC_1(' ');
 }
 FUNC_1(']');
}
