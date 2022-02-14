
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int csh ;
typedef int cs_insn ;
struct TYPE_3__ {int esil; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 char* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(RAnal *VAR_0, RAnalOp *VAR_1, ut64 VAR_2, const ut8 *VAR_3, int VAR_4, csh *VAR_5, cs_insn *VAR_6, int VAR_7, char (*VAR_8)[32], const char *VAR_9, int VAR_10) {
 const char *VAR_11 = FUNC_0(0);
 const char *VAR_12;
 const char *VAR_13;
 bool VAR_14 = FUNC_1() > 3;
 if (FUNC_1() > 2) {
   VAR_12 = FUNC_0(1);
   VAR_13 = FUNC_0(2);
 } else {
  VAR_12 = VAR_11;
  VAR_13 = FUNC_0(1);
 }

 if (VAR_14) {
  FUNC_2 (&VAR_1->esil, "%s,", FUNC_0(3));
 }
 if (!FUNC_3 (VAR_13, "pc")) {
  FUNC_2 (&VAR_1->esil, "%d,$$,+", VAR_7);
 } else {
  FUNC_2 (&VAR_1->esil, "%s", VAR_13);
 }
 if (VAR_14) {
  FUNC_2 (&VAR_1->esil, ",>>>");
 }
 if (VAR_10) {
  FUNC_2 (&VAR_1->esil, ",-1,^");
 }
 if (!FUNC_3 (VAR_12, "pc")) {
  FUNC_2 (&VAR_1->esil, ",%d,$$,+,%s,0xffffffff,&,%s,=", VAR_7, VAR_9, VAR_11);
 } else {
  FUNC_2 (&VAR_1->esil, ",%s,%s,0xffffffff,&,%s,=", VAR_12, VAR_9, VAR_11);
 }
}
