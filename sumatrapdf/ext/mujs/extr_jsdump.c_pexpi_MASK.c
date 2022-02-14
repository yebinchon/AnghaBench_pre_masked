
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int type; char* string; double number; struct TYPE_9__* c; struct TYPE_9__* b; struct TYPE_9__* a; } ;
typedef TYPE_1__ js_Ast ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,int,TYPE_1__*,char*) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,double) ;
 int FUNC_9 (char*,double) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,int,TYPE_1__*,char*,char*) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(int VAR_0, int VAR_1, js_Ast *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_2) return;

 VAR_3 = FUNC_7(VAR_2->type);
 VAR_4 = 0;
 if (VAR_3 < VAR_1) {
  FUNC_5('(');
  VAR_4 = 1;
 }
 VAR_1 = VAR_3;

 switch (VAR_2->type) {
 case 192: FUNC_10(VAR_2->string); break;
 case 163: FUNC_10(VAR_2->string); break;
 case 147: FUNC_9("%.9g", VAR_2->number); break;
 case 135: FUNC_12(VAR_2->string); break;
 case 140: FUNC_8(VAR_2->string, VAR_2->number); break;

 case 130: break;
 case 148: FUNC_10("null"); break;
 case 132: FUNC_10("true"); break;
 case 167: FUNC_10("false"); break;
 case 133: FUNC_10("this"); break;

 case 146: FUNC_6(VAR_0, VAR_2->a); break;
 case 190: FUNC_3(VAR_0, VAR_2->a); break;

 case 170: FUNC_13(VAR_0, VAR_1, VAR_2, "delete ", ""); break;
 case 128: FUNC_13(VAR_0, VAR_1, VAR_2, "void ", ""); break;
 case 131: FUNC_13(VAR_0, VAR_1, VAR_2, "typeof ", ""); break;
 case 141: FUNC_13(VAR_0, VAR_1, VAR_2, "++", ""); break;
 case 142: FUNC_13(VAR_0, VAR_1, VAR_2, "--", ""); break;
 case 143: FUNC_13(VAR_0, VAR_1, VAR_2, "", "++"); break;
 case 144: FUNC_13(VAR_0, VAR_1, VAR_2, "", "--"); break;
 case 145: FUNC_13(VAR_0, VAR_1, VAR_2, "+", ""); break;
 case 150: FUNC_13(VAR_0, VAR_1, VAR_2, "-", ""); break;
 case 176: FUNC_13(VAR_0, VAR_1, VAR_2, "~", ""); break;
 case 157: FUNC_13(VAR_0, VAR_1, VAR_2, "!", ""); break;

 case 156: FUNC_4(VAR_0, VAR_1, VAR_2, "||"); break;
 case 158: FUNC_4(VAR_0, VAR_1, VAR_2, "&&"); break;
 case 175: FUNC_4(VAR_0, VAR_1, VAR_2, "|"); break;
 case 174: FUNC_4(VAR_0, VAR_1, VAR_2, "^"); break;
 case 177: FUNC_4(VAR_0, VAR_1, VAR_2, "&"); break;
 case 168: FUNC_4(VAR_0, VAR_1, VAR_2, "=="); break;
 case 151: FUNC_4(VAR_0, VAR_1, VAR_2, "!="); break;
 case 137: FUNC_4(VAR_0, VAR_1, VAR_2, "==="); break;
 case 136: FUNC_4(VAR_0, VAR_1, VAR_2, "!=="); break;
 case 155: FUNC_4(VAR_0, VAR_1, VAR_2, "<"); break;
 case 164: FUNC_4(VAR_0, VAR_1, VAR_2, ">"); break;
 case 159: FUNC_4(VAR_0, VAR_1, VAR_2, "<="); break;
 case 165: FUNC_4(VAR_0, VAR_1, VAR_2, ">="); break;
 case 162: FUNC_4(VAR_0, VAR_1, VAR_2, "in"); break;
 case 139: FUNC_4(VAR_0, VAR_1, VAR_2, "<<"); break;
 case 138: FUNC_4(VAR_0, VAR_1, VAR_2, ">>"); break;
 case 129: FUNC_4(VAR_0, VAR_1, VAR_2, ">>>"); break;
 case 191: FUNC_4(VAR_0, VAR_1, VAR_2, "+"); break;
 case 134: FUNC_4(VAR_0, VAR_1, VAR_2, "-"); break;
 case 152: FUNC_4(VAR_0, VAR_1, VAR_2, "*"); break;
 case 169: FUNC_4(VAR_0, VAR_1, VAR_2, "/"); break;
 case 153: FUNC_4(VAR_0, VAR_1, VAR_2, "%"); break;
 case 189: FUNC_4(VAR_0, VAR_1, VAR_2, "="); break;
 case 182: FUNC_4(VAR_0, VAR_1, VAR_2, "*="); break;
 case 184: FUNC_4(VAR_0, VAR_1, VAR_2, "/="); break;
 case 183: FUNC_4(VAR_0, VAR_1, VAR_2, "%="); break;
 case 188: FUNC_4(VAR_0, VAR_1, VAR_2, "+="); break;
 case 179: FUNC_4(VAR_0, VAR_1, VAR_2, "-="); break;
 case 181: FUNC_4(VAR_0, VAR_1, VAR_2, "<<="); break;
 case 180: FUNC_4(VAR_0, VAR_1, VAR_2, ">>="); break;
 case 178: FUNC_4(VAR_0, VAR_1, VAR_2, ">>>="); break;
 case 187: FUNC_4(VAR_0, VAR_1, VAR_2, "&="); break;
 case 185: FUNC_4(VAR_0, VAR_1, VAR_2, "^="); break;
 case 186: FUNC_4(VAR_0, VAR_1, VAR_2, "|="); break;

 case 160:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_10(" instanceof ");
  FUNC_15(VAR_0, VAR_1, VAR_2->b);
  break;

 case 172:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_5(','); FUNC_14();
  FUNC_15(VAR_0, VAR_1, VAR_2->b);
  break;

 case 171:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_14(); FUNC_5('?'); FUNC_14();
  FUNC_15(VAR_0, VAR_1, VAR_2->b);
  FUNC_14(); FUNC_5(':'); FUNC_14();
  FUNC_15(VAR_0, VAR_1, VAR_2->c);
  break;

 case 161:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_5('[');
  FUNC_15(VAR_0, 0, VAR_2->b);
  FUNC_5(']');
  break;

 case 154:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_5('.');
  FUNC_15(VAR_0, 0, VAR_2->b);
  break;

 case 173:
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_5('(');
  FUNC_2(VAR_0, VAR_2->b);
  FUNC_5(')');
  break;

 case 149:
  FUNC_10("new ");
  FUNC_15(VAR_0, VAR_1, VAR_2->a);
  FUNC_5('(');
  FUNC_2(VAR_0, VAR_2->b);
  FUNC_5(')');
  break;

 case 166:
  if (VAR_1 == 0) FUNC_5('(');
  FUNC_10("function ");
  FUNC_15(VAR_0, 0, VAR_2->a);
  FUNC_5('(');
  FUNC_2(VAR_0, VAR_2->b);
  FUNC_5(')'); FUNC_14(); FUNC_5('{'); FUNC_1();
  FUNC_11(VAR_0, VAR_2->c);
  FUNC_0(VAR_0); FUNC_5('}');
  if (VAR_1 == 0) FUNC_5(')');
  break;

 default:
  FUNC_10("<UNKNOWN>");
  break;
 }

 if (VAR_4) FUNC_5(')');
}
