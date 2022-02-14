
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
struct state {int s_off; int const* s_buf; scalar_t__ s_prefix; int * s_out; int member_0; } ;
struct instruction {int in_reg; int in_opcode; } ;
struct TYPE_2__ {int member_0; } ;
struct directive {int d_inst; int d_off; int size; int jump; int eob; int fail; void* type; int d_operand; TYPE_1__ member_0; } ;
typedef int ins ;
typedef int RAnalOpMask ;
typedef struct directive RAnalOp ;
typedef int RAnal ;






 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct state*,struct directive*) ;
 int FUNC_1 (struct instruction*) ;
 void* FUNC_2 (struct directive*) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (struct directive*,char,int) ;
 int FUNC_5 (struct state*,struct directive*) ;

__attribute__((used)) static int FUNC_6(RAnal *VAR_16, RAnalOp *VAR_17, ut64 VAR_18, const ut8 *VAR_19, int VAR_20, RAnalOpMask VAR_21) {
 struct instruction *VAR_22 = (struct instruction *)VAR_19;
 ut16 VAR_23, VAR_24;
 struct directive VAR_25 = {0};
 struct state VAR_26 = {0};

 if (!VAR_16 || !VAR_17) {
  return 2;
 }

 FUNC_3 (&VAR_24, VAR_19, sizeof (VAR_24));
 FUNC_3 (&VAR_23, VAR_19, sizeof (VAR_24));
 VAR_26.s_buf = (void *)VAR_19;
 VAR_26.s_off = VAR_18;
 VAR_26.s_out = ((void*)0);
 VAR_26.s_prefix = 0;
 FUNC_4 (&VAR_25, '\0', sizeof (struct directive));
 FUNC_3 (&VAR_25.d_inst, VAR_26.s_buf, sizeof (VAR_25.d_inst));
 VAR_26.s_off += 2;
 VAR_25.d_off = VAR_26.s_off;
 FUNC_5 (&VAR_26, &VAR_25);
 VAR_25.d_operand = FUNC_0 (&VAR_26, &VAR_25);

 FUNC_4 (VAR_17, 0, sizeof (RAnalOp));
 VAR_17->type = VAR_14;
 VAR_17->size = 2;

 switch (FUNC_1 (VAR_22)) {
 case 128:
  VAR_17->type = VAR_8;
  break;
 case 130:
  VAR_17->type = VAR_13;
  break;
 case 131:
  VAR_17->type = VAR_13;
  break;
 case 129:
  VAR_17->type = VAR_13;
  break;
 default:
  switch (VAR_22->in_opcode) {
  case 0:
   switch (VAR_23&0xf) {
   case 1:
   case 2:
   case 3:
   case 0xa:
    VAR_17->type = VAR_11;
    break;
   case 4:
   case 5:
   case 6:
   case 7:
   case 0xe:
    VAR_17->type = VAR_10;
    break;
   }
   break;
  case 1:
   VAR_17->type = VAR_10;
   break;
  case 2:
   VAR_17->type = VAR_11;
   break;
  case 3:
  case 4:
  case 7:
   VAR_17->type = VAR_0;
   break;
  case 5:
  case 6:
   VAR_17->type = VAR_12;
   break;
  case 8:
   VAR_17->type = VAR_4;
   break;
  case 9:
   switch(VAR_22->in_reg) {
   case 0:
    VAR_17->type = VAR_7;
    break;
   case 1:
    VAR_17->type = VAR_5;
    break;
   case 2:
    VAR_17->type = VAR_4;
    break;
   case 3:

    VAR_17->type = VAR_2;
    VAR_17->jump = FUNC_2 (&VAR_25);
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->fail = VAR_18+2;
    VAR_17->eob = 1;
    break;
   }
   break;
  case 0xb:
   VAR_17->type = VAR_9;
   break;
  case 0xc:
   VAR_17->type = VAR_1;
   break;
  case 0xd:
   VAR_17->type = VAR_15;
   break;
  case 0xe:
   switch (VAR_22->in_reg) {
   case 0:
    VAR_17->type = VAR_6;
    VAR_17->jump = FUNC_2 (&VAR_25)+4;
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->eob = 1;
    break;
   case 1:

    VAR_17->type = VAR_3;
    VAR_17->jump = FUNC_2 (&VAR_25);
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->fail = VAR_18 + 2;
    VAR_17->eob = 1;
    break;
   case 2:

    VAR_17->type = VAR_3;
    VAR_17->jump = FUNC_2 (&VAR_25);
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->fail = VAR_18 + 2;
    VAR_17->eob = 1;
    break;
   case 3:

    VAR_17->type = VAR_3;
    VAR_17->jump = FUNC_2 (&VAR_25);
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->fail = VAR_18 + 2;
    VAR_17->eob = 1;
    break;
   }
   break;
  case 0xf:
   switch (VAR_22->in_reg) {
   case 0:
   case 1:
   case 2:
   case 3:
    VAR_17->type = VAR_3;
    VAR_17->jump = FUNC_2 (&VAR_25);
    if (VAR_17->jump & 1) {
     VAR_17->jump += 3;
    }
    VAR_17->fail = VAR_18+2;
    break;
   }
   break;
  }
  break;
 }
 return VAR_17->size;
}
