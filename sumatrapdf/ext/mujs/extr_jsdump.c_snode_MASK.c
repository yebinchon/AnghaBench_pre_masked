
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t type; double number; struct TYPE_6__* d; struct TYPE_6__* c; struct TYPE_6__* b; struct TYPE_6__* a; int string; int line; } ;
typedef TYPE_1__ js_Ast ;




 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,double) ;
 int FUNC_3 (char*,double) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(int VAR_2, js_Ast *VAR_3)
{
 void (*VAR_4)(int,js_Ast*) = FUNC_8;
 void (*VAR_5)(int,js_Ast*) = FUNC_8;
 void (*VAR_6)(int,js_Ast*) = FUNC_8;
 void (*VAR_7)(int,js_Ast*) = FUNC_8;

 if (!VAR_3) {
  return;
 }

 if (VAR_3->type == VAR_0) {
  FUNC_7(VAR_2, VAR_3);
  return;
 }

 FUNC_0('(');
 FUNC_4(VAR_1[VAR_3->type]);
 FUNC_0(':');
 FUNC_1(VAR_3->line);
 switch (VAR_3->type) {
 default: break;
 case 139: FUNC_0(' '); FUNC_4(VAR_3->string); break;
 case 137: FUNC_0(' '); FUNC_4(VAR_3->string); break;
 case 132: FUNC_0(' '); FUNC_5(VAR_3->string); break;
 case 133: FUNC_0(' '); FUNC_2(VAR_3->string, VAR_3->number); break;
 case 136: FUNC_3(" %.9g", VAR_3->number); break;
 case 131: VAR_4 = FUNC_6; break;
 case 140: case 138: VAR_6 = FUNC_6; break;
 case 135: VAR_6 = FUNC_6; break;
 case 134: VAR_6 = FUNC_6; break;
 case 128: VAR_5 = FUNC_6; break;
 case 130: VAR_5 = FUNC_6; break;
 case 129: VAR_4 = FUNC_6; break;
 }
 if (VAR_3->a) { FUNC_0(' '); VAR_4(VAR_2, VAR_3->a); }
 if (VAR_3->b) { FUNC_0(' '); VAR_5(VAR_2, VAR_3->b); }
 if (VAR_3->c) { FUNC_0(' '); VAR_6(VAR_2, VAR_3->c); }
 if (VAR_3->d) { FUNC_0(' '); VAR_7(VAR_2, VAR_3->d); }
 FUNC_0(')');
}
