
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {int jmp; int fail; } ;
struct TYPE_3__ {int jump; int fail; int ptr; int val; int size; void* type; scalar_t__ delay; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int,int,int) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_1 (struct winedbg_arm_insn*) ;
 int FUNC_2 (struct winedbg_arm_insn*) ;
 struct winedbg_arm_insn* FUNC_3 () ;
 int FUNC_4 (struct winedbg_arm_insn*,int const*) ;
 int FUNC_5 (struct winedbg_arm_insn*,void*) ;
 int FUNC_6 (struct winedbg_arm_insn*,int) ;

__attribute__((used)) static int FUNC_7(RAnal *VAR_22, RAnalOp *VAR_23, ut64 VAR_24, const ut8 *VAR_25, int VAR_26) {
 int VAR_27;
 ut16 *VAR_28 = (ut16 *) VAR_25;
 ut16 VAR_29 = *VAR_28;
 ut32 *VAR_30 = (ut32 *) VAR_25;
 ut32 VAR_31 = *VAR_30;

 struct winedbg_arm_insn *VAR_32 = FUNC_3 ();
 FUNC_6 (VAR_32, 1);
 FUNC_4 (VAR_32, VAR_25);
 FUNC_5 (VAR_32, VAR_24);
 VAR_23->jump = VAR_23->fail = -1;
 VAR_23->ptr = VAR_23->val = -1;
 VAR_23->delay = 0;
 VAR_23->size = FUNC_1 (VAR_32);
 VAR_23->jump = VAR_32->jmp;
 VAR_23->fail = VAR_32->fail;
 FUNC_2 (VAR_32);




 if (((VAR_29 & FUNC_0 (VAR_9, 0, 0, 0)) == FUNC_0 (VAR_0, 0, 0, 0))
     && (1 == (VAR_29 & FUNC_0 (1, VAR_5, 0, 0)) >> 11)) {
  VAR_23->type = VAR_13;
  return VAR_23->size;
 }
 if ((VAR_29 & FUNC_0 (VAR_10, VAR_7, 0, 0)) == FUNC_0 (VAR_2, 0, 0, 0)) {
  VAR_27 = (VAR_29 & FUNC_0 (0, VAR_1, VAR_7, 0)) >> 6;
  if (VAR_27 == 8 || VAR_27 == 10) {
   VAR_23->type = VAR_13;
   return VAR_23->size;
  }
 }
 if ((VAR_29 & FUNC_0 (VAR_10, VAR_7, 0, 0)) == FUNC_0 (VAR_2, VAR_2, 0, 0)) {
  VAR_27 = (VAR_29 & FUNC_0 (0, VAR_1, 0, 0)) >> 8;
  if (VAR_27 == 1) {
   VAR_23->type = VAR_13;
   return VAR_23->size;
  }
 }
 if (VAR_29 == 0xbf) {

  VAR_23->type = VAR_16;
 } else if (((VAR_27 = ((VAR_29 & FUNC_0 (VAR_10, VAR_5, 0, 0)) >> 11)) >= 12 &&
             VAR_27 <= 17)) {
  if (VAR_27 % 2) {
   VAR_23->type = VAR_15;
  } else {
   VAR_23->type = VAR_17;
  }
 } else if ((VAR_29 & FUNC_0 (VAR_10, 0, 0, 0)) == FUNC_0 (VAR_3, 0, 0, 0)) {
  VAR_27 = (VAR_29 & FUNC_0 (0, VAR_9, 0, 0)) >> 9;
  if (VAR_27 % 2) {
   VAR_23->type = VAR_15;
  } else {
   VAR_23->type = VAR_17;
  }
 } else if ((VAR_29 & FUNC_0 (VAR_10, 0, 0, 0)) == FUNC_0 (VAR_8, 0, 0, 0)) {

  int VAR_33 = (VAR_29 & FUNC_0 (0, 0, VAR_10, VAR_10));
  VAR_23->type = VAR_12;
  VAR_23->jump = VAR_24 + 4 + (VAR_33 << 1);
  VAR_23->fail = VAR_24 + 4;
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_5, 0, 0)) == FUNC_0 (VAR_9, 0, 0, 0)) {

  int VAR_34 = (VAR_29 & FUNC_0 (0, 0, VAR_10, VAR_10));
  VAR_23->type = VAR_14;
  VAR_23->jump = VAR_24 + 4 + (VAR_34 << 1);
  VAR_23->fail = VAR_24 + 4;
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_10, VAR_5, 0)) ==
            FUNC_0 (VAR_2, VAR_4, VAR_5, 0)) {

  VAR_23->type = VAR_20;
  VAR_23->fail = VAR_24 + 4;
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_10, VAR_5, 0)) ==
            FUNC_0 (VAR_2, VAR_4, 0, 0)) {

  VAR_23->type = VAR_21;
  VAR_23->fail = VAR_24 + 4;
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_5, 0, 0)) == FUNC_0 (VAR_10, 0, 0, 0)) {



  ut16 VAR_35 = (VAR_31 & 0xFFFF0000) >> 16;
  ut32 VAR_36 = (VAR_29 & FUNC_0 (0, VAR_4, VAR_10, VAR_10)) << 12;
  if (VAR_29 & FUNC_0 (0, VAR_2, 0, 0)) {
   VAR_36 |= FUNC_0 (VAR_10, VAR_5, 0, 0) << 16;
  }
  int VAR_37 = VAR_36 + ((VAR_35 & FUNC_0 (0, VAR_4, VAR_10, VAR_10)) * 2);
  VAR_23->jump = (int) (VAR_24 + 4 + (VAR_37));
  VAR_23->type = VAR_11;
  VAR_23->fail = VAR_24 + 4;
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_10, 0, 0)) == FUNC_0 (VAR_6, VAR_9, 0, 0)) {
  VAR_23->type = VAR_19;
  VAR_23->val = (ut64) (VAR_29 >> 8);
 } else if ((VAR_29 & FUNC_0 (VAR_10, VAR_10, 0, 0)) == FUNC_0 (VAR_8, VAR_10, 0, 0)) {
  VAR_23->type = VAR_18;
  VAR_23->val = (ut64) (VAR_29 >> 8);
 }
 return VAR_23->size;
}
