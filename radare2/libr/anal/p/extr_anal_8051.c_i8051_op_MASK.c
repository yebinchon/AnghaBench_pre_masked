
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_12__ {int const op; int const mask; int arg1; int arg2; int len; int instr; int type; int cycles; scalar_t__ string; } ;
struct TYPE_11__ {int reg; } ;
struct TYPE_10__ {int jump; int fail; int ptr; int val; int nopcode; int size; int id; int eob; int stackptr; int refptr; int mnemonic; void* stackop; int cond; int family; int type; int failcycles; int cycles; scalar_t__ delay; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;


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
 void* VAR_13 ;
 TYPE_9__* VAR_14 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ,int*) ;
 void* FUNC_1 (int ,int const*) ;
 int const FUNC_2 (int const) ;
 void* FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (int*,int const*,int) ;
 int FUNC_7 (int ,int const*,int,int*) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(RAnal *VAR_15, RAnalOp *VAR_16, ut64 VAR_17, const ut8 *VAR_18, int VAR_19, RAnalOpMask VAR_20) {
 FUNC_8 (VAR_15, 0);

 int VAR_21 = 0;
 while (VAR_14[VAR_21].string && VAR_14[VAR_21].op != (VAR_18[0] & ~VAR_14[VAR_21].mask)) {
  VAR_21++;
 }

 VAR_16->jump = VAR_16->fail = -1;
 VAR_16->ptr = VAR_16->val = -1;

 ut8 VAR_22 = VAR_14[VAR_21].arg1;
 ut8 VAR_23 = VAR_14[VAR_21].arg2;

 VAR_16->delay = 0;
 VAR_16->cycles = VAR_14[VAR_21].cycles;
 VAR_16->failcycles = VAR_14[VAR_21].cycles;
 VAR_16->nopcode = 1;
 VAR_16->size = VAR_14[VAR_21].len;
 VAR_16->type = VAR_14[VAR_21].type;
 VAR_16->family = VAR_10;
 VAR_16->id = VAR_21;

 switch (VAR_14[VAR_21].instr) {
 default:
  VAR_16->cond = VAR_5;
 break;
 case 140:
 case 139:
 case 138:
 case 137:
 case 132:
  VAR_16->cond = VAR_9;
 break;
 case 134:
 case 131:
  VAR_16->cond = VAR_6;
 break; case 136:
  VAR_16->cond = VAR_7;
 break; case 133:
  VAR_16->cond = VAR_8;
 }

 switch (VAR_14[VAR_21].instr) {
 default:
  VAR_16->eob = 0;
 break;
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_16->eob = 1;
 }



 switch (VAR_22) {
 default:
 break; case 144:
  VAR_16->ptr = FUNC_5 (VAR_15, VAR_18[1]);
 break; case 145:
  VAR_16->ptr = FUNC_5 (VAR_15, FUNC_2 (VAR_18[1]));
 break; case 142:
  VAR_16->val = VAR_18[1];
 break; case 143:
  VAR_16->val = VAR_18[1] * 256 + VAR_18[2];
  VAR_16->ptr = VAR_16->val + FUNC_4 (VAR_15->reg, "_xdata");
 }

 switch (VAR_23) {
 default:
 break; case 144:
  if (VAR_22 == VAR_3 || VAR_22 == VAR_4) {
   VAR_16->ptr = FUNC_5 (VAR_15, VAR_18[1]);
  } else if (VAR_22 != 144) {
   VAR_16->ptr = FUNC_5 (VAR_15, VAR_18[2]);
  }
 break; case 145:
  VAR_16->ptr = FUNC_2 ((VAR_22 == VAR_3 || VAR_22 == VAR_4) ? VAR_18[1] : VAR_18[2]);
  VAR_16->ptr = FUNC_5 (VAR_15, VAR_16->ptr);
 break; case 142:
  VAR_16->val = (VAR_22 == VAR_3 || VAR_22 == VAR_4) ? VAR_18[1] : VAR_18[2];
 }

 switch(VAR_14[VAR_21].instr) {
 default:
 break; case 129:
  VAR_16->stackop = VAR_13;
  VAR_16->stackptr = 1;
 break; case 130:
  VAR_16->stackop = VAR_13;
  VAR_16->stackptr = -1;
 break; case 128:
  VAR_16->stackop = VAR_13;
  VAR_16->stackptr = -2;
 break; case 141:
  VAR_16->stackop = VAR_13;
  VAR_16->stackptr = 2;
  if (VAR_22 == VAR_0) {
   VAR_16->jump = FUNC_1 (VAR_17 + VAR_16->size, VAR_18);
   VAR_16->fail = VAR_17 + VAR_16->size;
  } else if (VAR_22 == VAR_1) {
   VAR_16->jump = 0x100 * VAR_18[1] + VAR_18[2];
   VAR_16->fail = VAR_17 + VAR_16->size;
  }
 break; case 135:
  if (VAR_22 == VAR_0) {
   VAR_16->jump = FUNC_1 (VAR_17 + VAR_16->size, VAR_18);
   VAR_16->fail = VAR_17 + VAR_16->size;
  } else if (VAR_22 == VAR_1) {
   VAR_16->jump = 0x100 * VAR_18[1] + VAR_18[2];
   VAR_16->fail = VAR_17 + VAR_16->size;
  } else if (VAR_22 == VAR_2) {
   VAR_16->jump = FUNC_3 (VAR_17 + VAR_16->size, VAR_18[1]);
   VAR_16->fail = VAR_17 + VAR_16->size;
  }
 break;
 case 140:
 case 139:
 case 136:
 case 133:
 case 131:
 case 132:
 case 138:
 case 137:
 case 134:
  VAR_16->jump = FUNC_3 (VAR_17 + VAR_16->size, VAR_18[VAR_16->size - 1]);
  VAR_16->fail = VAR_17 + VAR_16->size;
 }

 if (VAR_16->ptr != -1 && VAR_16->refptr == 0) {
  VAR_16->refptr = 1;
 }

 if (VAR_20 & VAR_11) {
  ut8 VAR_24[3] = {0, 0, 0};
  FUNC_6 (VAR_24, VAR_18, VAR_19 >= 3 ? 3 : VAR_19);
  FUNC_0 (VAR_15, VAR_16, VAR_17, VAR_24);
 }

 int VAR_25 = 0;
 VAR_16->mnemonic = FUNC_7 (VAR_17, VAR_18, VAR_19, &VAR_25);
 VAR_16->size = VAR_25;

 if (VAR_20 & VAR_12) {

 }

 return VAR_16->size;
}
