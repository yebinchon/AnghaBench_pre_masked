
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int const ut16 ;
typedef int basm ;
struct TYPE_3__ {int size; int jump; int fail; int val; void* type; int esil; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
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
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t const,char*,int,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,size_t const) ;

__attribute__((used)) static int FUNC_5(RAnal *VAR_16, RAnalOp *VAR_17, ut64 VAR_18, const ut8 *VAR_19, int VAR_20, RAnalOpMask VAR_21) {
 char VAR_22[128];
 const size_t VAR_23 = sizeof (VAR_22)-1;
 int VAR_24 = FUNC_0 (*VAR_19);
 if (!VAR_17) {
  return 2;
 }
 FUNC_1 (&VAR_17->esil);
 ut8 VAR_25 = (*VAR_19 & 0xf0)>>4;
 ut8 VAR_26 = (*VAR_19 & 0xf);
 VAR_22[0] = 0;

 if (VAR_24 > VAR_20) {
  return VAR_17->size = 0;
 }
 switch (VAR_25) {
 case 0:
  if (VAR_26) {
   VAR_17->type = VAR_3;
  } else {
   VAR_17->type = VAR_7;
  }
  break;
 case 1:
  VAR_17->type = VAR_2;
  VAR_17->jump = (VAR_18 & (~0xFF)) + VAR_19[1];
  VAR_17->fail = VAR_18 + VAR_24;
  break;
 case 2:
  if (VAR_24 == 1) {
   FUNC_2 (VAR_22, VAR_23, "scr r%d", (VAR_26 & 0xe));
  } else {
   VAR_17->type = VAR_6;
   VAR_17->val = VAR_19[1];
   FUNC_2 (VAR_22, VAR_23, "fim r%d, 0x%02x", (VAR_26 & 0xe), VAR_19[1]);
  }
  break;
 case 3:
  if (VAR_26 & 1) {
   VAR_17->type = VAR_9;
  } else {
   VAR_17->type = VAR_6;
   FUNC_2 (VAR_22, VAR_23, "fin r%d", (VAR_26 & 0xe));
  }
  break;
 case 4:
  VAR_17->type = VAR_4;
  VAR_17->jump = (ut16) (VAR_26<<8) | VAR_19[1];
  break;
 case 5:
  VAR_17->type = VAR_1;
  VAR_17->jump = (ut16) (VAR_26<<8) | VAR_19[1];
  VAR_17->fail = VAR_18 + VAR_24;
  break;
 case 6:
  VAR_17->type = VAR_0;
  break;
 case 7:
  VAR_17->type = VAR_2;
  VAR_17->fail = (VAR_18 & (~0xFF)) + VAR_19[1];
  VAR_17->jump = VAR_18 + VAR_24;
  break;
 case 8:
  VAR_17->type = VAR_0;

  break;
 case 9:
  VAR_17->type = VAR_12;

  break;
 case 10:
  VAR_17->type = VAR_6;
  break;
 case 11:
  VAR_17->type = VAR_13;
  break;
 case 12:
  VAR_17->type = VAR_8;
  break;
 case 13:
  VAR_17->type = VAR_5;

  break;
 case 14:
  FUNC_4 (VAR_22, VAR_14[VAR_26], VAR_23);
  VAR_22[VAR_23] = '\0';
  break;
 case 15:
  FUNC_4 (VAR_22, VAR_15[VAR_26], VAR_23);
  VAR_22[VAR_23] = '\0';
  if (!FUNC_3 (VAR_22, "dac")) {
   VAR_17->type = VAR_12;
  }
  break;
 }
 if (!FUNC_3 (VAR_22, "invalid")) {
  VAR_17->type = VAR_3;
 } else if (!FUNC_3 (VAR_22, "ral")) {
  VAR_17->type = VAR_10;
 } else if (!FUNC_3 (VAR_22, "rar")) {
  VAR_17->type = VAR_11;
 }
 return VAR_17->size = VAR_24;
}
