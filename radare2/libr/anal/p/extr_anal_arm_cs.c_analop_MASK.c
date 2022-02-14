
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef scalar_t__ csh ;
struct TYPE_26__ {int size; int id; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_28__ {int bits; scalar_t__ cpu; scalar_t__ big_endian; } ;
struct TYPE_27__ {int size; int jump; int fail; int ptr; int val; int opex; int id; int mnemonic; int type; int esil; scalar_t__ refptr; int addr; scalar_t__ delay; int stackop; } ;
typedef int RAnalOpMask ;
typedef TYPE_2__ RAnalOp ;
typedef TYPE_3__ RAnal ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int const*,int,scalar_t__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ,int const*,int,scalar_t__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,TYPE_2__*,TYPE_1__*,int,int *,int) ;
 int FUNC_3 (scalar_t__,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__,int *,int,int ,int,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int,scalar_t__*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int const*,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,TYPE_1__*,int) ;
 int FUNC_11 (int *,scalar_t__,TYPE_1__*) ;
 int FUNC_12 (int *,scalar_t__,TYPE_1__*) ;
 int FUNC_13 (char*,int ,char*,scalar_t__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_18(RAnal *VAR_17, RAnalOp *VAR_18, ut64 VAR_19, const ut8 *VAR_20, int VAR_21, RAnalOpMask VAR_22) {
 static csh VAR_23 = 0;
 static int VAR_24 = -1;
 static int VAR_25 = 32;
 cs_insn *VAR_26 = ((void*)0);
 int VAR_27 = (VAR_17->bits==16)? VAR_7: VAR_3;
 int VAR_28, VAR_29;
 VAR_27 |= (VAR_17->big_endian)? VAR_4: VAR_5;
 if (VAR_17->cpu && FUNC_17 (VAR_17->cpu, "cortex")) {
  VAR_27 |= VAR_6;
 }

 if (VAR_27 != VAR_24 || VAR_17->bits != VAR_25) {
  FUNC_4 (&VAR_23);
  VAR_23 = 0;
  VAR_24 = VAR_27;
  VAR_25 = VAR_17->bits;
 }
 VAR_18->type = VAR_15;
 VAR_18->size = (VAR_17->bits==16)? 2: 4;
 VAR_18->stackop = VAR_16;
 VAR_18->delay = 0;
 VAR_18->jump = VAR_18->fail = -1;
 VAR_18->addr = VAR_19;
 VAR_18->ptr = VAR_18->val = -1;
 VAR_18->refptr = 0;
 FUNC_14 (&VAR_18->esil);
 if (VAR_23 == 0) {
  VAR_29 = (VAR_17->bits == 64)?
   FUNC_7 (VAR_1, VAR_27, &VAR_23):
   FUNC_7 (VAR_0, VAR_27, &VAR_23);
  FUNC_8 (VAR_23, VAR_8, VAR_9);
  if (VAR_29 != VAR_2) {
   VAR_23 = 0;
   return -1;
  }
 }
 int VAR_30 = FUNC_9 (VAR_17, VAR_18, VAR_20, VAR_21);
 if (VAR_30 > 0) {
  return VAR_30;
 }

 VAR_28 = FUNC_5 (VAR_23, (ut8*)VAR_20, VAR_21, VAR_19, 1, &VAR_26);
 if (VAR_28 < 1) {
  VAR_18->type = VAR_14;
  if (VAR_22 & VAR_10) {
   VAR_18->mnemonic = FUNC_16 ("invalid");
  }
 } else {
  if (VAR_22 & VAR_10) {
   VAR_18->mnemonic = FUNC_13 ("%s%s%s",
    VAR_26->mnemonic,
    VAR_26->op_str[0]?" ":"",
    VAR_26->op_str);
  }

  bool VAR_31 = VAR_17->bits == 16;
  VAR_18->size = VAR_26->size;
  VAR_18->id = VAR_26->id;
  if (VAR_17->bits == 64) {
   FUNC_3 (VAR_23, VAR_18, VAR_26);
   if (VAR_22 & VAR_12) {
    FUNC_12 (&VAR_18->opex, VAR_23, VAR_26);
   }
   if (VAR_22 & VAR_11) {
    FUNC_0 (VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, &VAR_23, VAR_26);
   }
  } else {
   FUNC_2 (VAR_17, VAR_23, VAR_18, VAR_26, VAR_31, (ut8*)VAR_20, VAR_21);
   if (VAR_22 & VAR_12) {
    FUNC_11 (&VAR_18->opex, VAR_23, VAR_26);
   }
   if (VAR_22 & VAR_11) {
    FUNC_1 (VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, &VAR_23, VAR_26, VAR_31);
   }
  }
  FUNC_15 (VAR_18);
  if (VAR_22 & VAR_13) {
   FUNC_10 (VAR_18, VAR_23, VAR_26, VAR_17->bits);
  }
  FUNC_6 (VAR_26, VAR_28);
 }

 return VAR_18->size;
}
