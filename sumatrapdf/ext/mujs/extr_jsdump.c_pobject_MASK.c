
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* b; int c; struct TYPE_5__* a; } ;
typedef TYPE_1__ js_Ast ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(int VAR_2, js_Ast *VAR_3)
{
 FUNC_4('{');
 if (VAR_3) {
  FUNC_2();
  FUNC_1(VAR_2+1);
 }
 while (VAR_3) {
  js_Ast *VAR_4 = VAR_3->a;
  FUNC_0(VAR_3->type == VAR_0);
  switch (VAR_4->type) {
  default: break;
  case 128:
   FUNC_5(VAR_2+1, VAR_1, VAR_4->a);
   FUNC_4(':'); FUNC_8();
   FUNC_5(VAR_2+1, VAR_1, VAR_4->b);
   break;
  case 130:
   FUNC_6("get ");
   FUNC_5(VAR_2+1, VAR_1, VAR_4->a);
   FUNC_6("()"); FUNC_8(); FUNC_4('{'); FUNC_2();
   FUNC_7(VAR_2+1, VAR_4->c);
   FUNC_1(VAR_2+1); FUNC_4('}');
   break;
  case 129:
   FUNC_6("set ");
   FUNC_5(VAR_2+1, VAR_1, VAR_4->a);
   FUNC_4('(');
   FUNC_3(VAR_2+1, VAR_4->b);
   FUNC_4(')'); FUNC_8(); FUNC_4('{'); FUNC_2();
   FUNC_7(VAR_2+1, VAR_4->c);
   FUNC_1(VAR_2+1); FUNC_4('}');
   break;
  }
  VAR_3 = VAR_3->b;
  if (VAR_3) {
   FUNC_4(',');
   FUNC_2();
   FUNC_1(VAR_2+1);
  } else {
   FUNC_2();
   FUNC_1(VAR_2);
  }
 }
 FUNC_4('}');
}
