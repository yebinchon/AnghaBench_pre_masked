
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int type; struct TYPE_10__* b; struct TYPE_10__* a; struct TYPE_10__* d; struct TYPE_10__* c; } ;
typedef TYPE_1__ js_Ast ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,TYPE_1__*) ;
 int FUNC_9 (int,TYPE_1__*) ;
 int FUNC_10 (int,TYPE_1__*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(int VAR_2, js_Ast *VAR_3)
{
 if (VAR_3->type == VAR_0) {
  FUNC_3(VAR_2, VAR_3);
  return;
 }

 FUNC_0(VAR_2);

 switch (VAR_3->type) {
 case 146:
  FUNC_7("function ");
  FUNC_6(VAR_2, VAR_3->a);
  FUNC_4('(');
  FUNC_2(VAR_2, VAR_3->b);
  FUNC_4(')'); FUNC_11(); FUNC_4('{'); FUNC_1();
  FUNC_9(VAR_2, VAR_3->c);
  FUNC_0(VAR_2); FUNC_4('}');
  break;

 case 141:
  FUNC_4(';');
  break;

 case 130:
  FUNC_7("var ");
  FUNC_10(VAR_2, VAR_3->a);
  FUNC_4(';');
  break;

 case 136:
  FUNC_7("if"); FUNC_11(); FUNC_4('('); FUNC_6(VAR_2, VAR_3->a); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->b);
  if (VAR_3->c) {
   FUNC_1(); FUNC_0(VAR_2); FUNC_7("else");
   FUNC_8(VAR_2, VAR_3->c);
  }
  break;

 case 142:
  FUNC_7("do");
  FUNC_8(VAR_2, VAR_3->a);
  FUNC_1();
  FUNC_0(VAR_2); FUNC_7("while"); FUNC_11(); FUNC_4('('); FUNC_6(VAR_2, VAR_3->b); FUNC_4(')'); FUNC_4(';');
  break;

 case 129:
  FUNC_7("while"); FUNC_11(); FUNC_4('('); FUNC_6(VAR_2, VAR_3->a); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->b);
  break;

 case 140:
  FUNC_7("for"); FUNC_11(); FUNC_4('(');
  FUNC_6(VAR_2, VAR_3->a); FUNC_4(';'); FUNC_11();
  FUNC_6(VAR_2, VAR_3->b); FUNC_4(';'); FUNC_11();
  FUNC_6(VAR_2, VAR_3->c); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->d);
  break;
 case 137:
  FUNC_7("for"); FUNC_11(); FUNC_7("(var ");
  FUNC_10(VAR_2, VAR_3->a); FUNC_4(';'); FUNC_11();
  FUNC_6(VAR_2, VAR_3->b); FUNC_4(';'); FUNC_11();
  FUNC_6(VAR_2, VAR_3->c); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->d);
  break;
 case 139:
  FUNC_7("for"); FUNC_11(); FUNC_4('(');
  FUNC_6(VAR_2, VAR_3->a); FUNC_7(" in ");
  FUNC_6(VAR_2, VAR_3->b); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->c);
  break;
 case 138:
  FUNC_7("for"); FUNC_11(); FUNC_7("(var ");
  FUNC_10(VAR_2, VAR_3->a); FUNC_7(" in ");
  FUNC_6(VAR_2, VAR_3->b); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->c);
  break;

 case 144:
  FUNC_7("continue");
  if (VAR_3->a) {
   FUNC_4(' '); FUNC_6(VAR_2, VAR_3->a);
  }
  FUNC_4(';');
  break;

 case 145:
  FUNC_7("break");
  if (VAR_3->a) {
   FUNC_4(' '); FUNC_6(VAR_2, VAR_3->a);
  }
  FUNC_4(';');
  break;

 case 134:
  FUNC_7("return");
  if (VAR_3->a) {
   FUNC_4(' '); FUNC_6(VAR_2, VAR_3->a);
  }
  FUNC_4(';');
  break;

 case 128:
  FUNC_7("with"); FUNC_11(); FUNC_4('('); FUNC_6(VAR_2, VAR_3->a); FUNC_4(')');
  FUNC_8(VAR_2, VAR_3->b);
  break;

 case 133:
  FUNC_7("switch"); FUNC_11(); FUNC_4('(');
  FUNC_6(VAR_2, VAR_3->a);
  FUNC_4(')'); FUNC_11(); FUNC_4('{'); FUNC_1();
  FUNC_5(VAR_2, VAR_3->b);
  FUNC_0(VAR_2); FUNC_4('}');
  break;

 case 132:
  FUNC_7("throw "); FUNC_6(VAR_2, VAR_3->a); FUNC_4(';');
  break;

 case 131:
  FUNC_7("try");
  if (VAR_1 && VAR_3->a->type != VAR_0)
   FUNC_4(' ');
  FUNC_8(VAR_2, VAR_3->a);
  if (VAR_3->b && VAR_3->c) {
   FUNC_1(); FUNC_0(VAR_2); FUNC_7("catch"); FUNC_11(); FUNC_4('('); FUNC_6(VAR_2, VAR_3->b); FUNC_4(')');
   FUNC_8(VAR_2, VAR_3->c);
  }
  if (VAR_3->d) {
   FUNC_1(); FUNC_0(VAR_2); FUNC_7("finally");
   FUNC_8(VAR_2, VAR_3->d);
  }
  break;

 case 135:
  FUNC_6(VAR_2, VAR_3->a); FUNC_4(':'); FUNC_11(); FUNC_12(VAR_2, VAR_3->b);
  break;

 case 143:
  FUNC_7("debugger");
  FUNC_4(';');
  break;

 default:
  FUNC_6(VAR_2, VAR_3);
  FUNC_4(';');
 }
}
