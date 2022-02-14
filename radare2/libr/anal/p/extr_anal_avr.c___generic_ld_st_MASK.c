
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAnalOp ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, char *VAR_1, char VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
 if (VAR_2) {

  if (VAR_4 < 0) {
   FUNC_0 ("1,%c,-,%c,=,", VAR_2, VAR_2);
  }

  FUNC_0 ("%c,", VAR_2);

  if (VAR_5 != 0) {
   FUNC_0 ("%d,+,", VAR_5);
  }
 } else {
  FUNC_0 ("%d,", VAR_5);
 }
 if (VAR_3) {
  FUNC_0 ("16,ramp%c,<<,+,", VAR_2 ? VAR_2 : 'd');
 }

 FUNC_0 ("_%s,+,", VAR_1);

 FUNC_0 ("%s[1],", VAR_6 ? "=" : "");

 if (VAR_2 && VAR_4 > 0) {
  FUNC_0 ("1,%c,+,%c,=,", VAR_2, VAR_2);
 }
}
