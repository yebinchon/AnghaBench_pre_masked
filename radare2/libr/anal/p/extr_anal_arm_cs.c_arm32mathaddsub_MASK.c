
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
 int FUNC_2 (int *,char*,char const*,...) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(RAnal *VAR_0, RAnalOp *VAR_1, ut64 VAR_2, const ut8 *VAR_3, int VAR_4, csh *VAR_5, cs_insn *VAR_6, int VAR_7, char (*VAR_8)[32], const char *VAR_9) {
 const char *VAR_10 = FUNC_0(0);
 const char *VAR_11;
 bool VAR_12 = 0;
 if (!FUNC_3 (VAR_10, "pc")) {

  VAR_12 = 1;
 }
 if (FUNC_1() == 3) {
  FUNC_2 (&VAR_1->esil, "%s,0xffffffff,&,%s,=,", FUNC_0 (1), VAR_10);
  VAR_11 = FUNC_0 (2);
 } else {

  VAR_11 = FUNC_0 (1);

 }
 FUNC_2 (&VAR_1->esil, "%s,%s,%s,0xffffffff,&,%s,=", VAR_11, VAR_10, VAR_9, VAR_10);
 if (VAR_12) {
  return;
 }
 FUNC_2 (&VAR_1->esil, ",$z,zf,:=,%s,cf,:=,vf,=,0,nf,=",
   (!FUNC_3 (VAR_9, "+") ? "30,$c,31,$c,^,31,$c" : "30,$c,31,$c,^,32,$b"));
}
