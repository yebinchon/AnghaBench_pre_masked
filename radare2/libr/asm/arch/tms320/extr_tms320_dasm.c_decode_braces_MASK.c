
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*,char*,...) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(tms320_dasm_t * VAR_3)
{
 char * VAR_4;

 VAR_4 = FUNC_3(VAR_3->syntax, "[(saturate]");
 if (VAR_4) {
  FUNC_2(VAR_4, "[)", ")[");
  FUNC_2(VAR_3->syntax, "[(saturate]", "%s", "(saturate");
 }

 if (FUNC_0(VAR_3, VAR_0)) {
  VAR_4 = FUNC_3(VAR_3->syntax, "[rnd(]");
  if (VAR_4) {
   FUNC_2(VAR_4, "[)", "%s", FUNC_1(VAR_3, VAR_0) ? ")[" : "[");
   FUNC_2(VAR_3->syntax, "[rnd(]", "%s", FUNC_1(VAR_3, VAR_0) ? "rnd(" : "");
  }
 }

 if (FUNC_0(VAR_3, VAR_1)) {
  VAR_4 = FUNC_3(VAR_3->syntax, "[uns(]");
  if (VAR_4) {
   FUNC_2(VAR_4, "[)", "%s", FUNC_1(VAR_3, VAR_1) ? ")[" : "[");
   FUNC_2(VAR_3->syntax, "[uns(]", "%s", FUNC_1(VAR_3, VAR_1) ? "uns(" : "");
  }
 }

 if (FUNC_0(VAR_3, VAR_2)) {
  bool VAR_5 = !!FUNC_3 (VAR_3->syntax, "::");


  FUNC_2(VAR_3->syntax, "[uns(]", "%s", FUNC_1(VAR_3, VAR_2) & 2 ? "uns(" : "");
  FUNC_2(VAR_3->syntax, "[)]", "%s", FUNC_1(VAR_3, VAR_2) & 2 ? ")" : "");

  if (VAR_5) {
   FUNC_2(VAR_3->syntax, "[uns(]", "%s", FUNC_1(VAR_3, VAR_2) & 2 ? "uns(" : "");
   FUNC_2(VAR_3->syntax, "[)]", "%s", FUNC_1(VAR_3, VAR_2) & 2 ? ")" : "");
  }


  FUNC_2(VAR_3->syntax, "[uns(]", "%s", FUNC_1(VAR_3, VAR_2) & 1 ? "uns(" : "");
  FUNC_2(VAR_3->syntax, "[)]", "%s", FUNC_1(VAR_3, VAR_2) & 1 ? ")" : "");

  if (VAR_5) {
   FUNC_2(VAR_3->syntax, "[uns(]", "%s", FUNC_1(VAR_3, VAR_2) & 1 ? "uns(" : "");
   FUNC_2(VAR_3->syntax, "[)]", "%s", FUNC_1(VAR_3, VAR_2) & 1 ? ")" : "");
  }
 }



 FUNC_4(VAR_3->syntax, "[]", "%s", "");
}
