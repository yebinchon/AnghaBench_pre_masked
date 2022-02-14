
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_11__ {int bits; int reg; int big_endian; } ;
struct TYPE_10__ {int size; int delay; int addr; int jump; int fail; int val; void* type; TYPE_2__** src; TYPE_1__* dst; int esil; } ;
struct TYPE_9__ {void* reg; } ;
struct TYPE_8__ {void* reg; } ;
typedef int RAnalOpMask ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnal ;


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
 int VAR_15 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 () ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 void* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(RAnal *VAR_16, RAnalOp *VAR_17, ut64 VAR_18, const ut8 *VAR_19, int VAR_20, RAnalOpMask VAR_21) {
 ut32 VAR_22;

 int VAR_23, VAR_24 = (VAR_16->bits==16)?2:4;

 if (!VAR_17) {
  return VAR_24;
 }

 FUNC_0 (VAR_17, 0, sizeof (RAnalOp));
 VAR_17->type = VAR_13;
 VAR_17->size = VAR_24;
 VAR_17->delay = 0;
 VAR_17->addr = VAR_18;
 FUNC_5 (&VAR_17->esil);


 VAR_22 = FUNC_3 (VAR_19, VAR_16->big_endian);


 if (VAR_22 == 0) {
  VAR_17->type = VAR_6;
  return VAR_24;
 }

 VAR_23 = (VAR_19[0]>>2);

 if (VAR_23 == 0) {
  int VAR_25 = VAR_19[3]&63;
  switch (VAR_25) {
  case 0:
   break;
  case 2:
   break;
  case 3:
   break;
  case 4:
   break;
  case 6:
   break;
  case 7:
   break;
  case 8:


   if (((VAR_19[0]&3)<<3) + (VAR_19[1]>>5) == 31) {
    VAR_17->type = VAR_8;
   } else {
    VAR_17->type = VAR_5;
   }
   VAR_17->delay = 1;
   break;
  case 9:

   VAR_17->type = VAR_12;
   VAR_17->delay = 1;
   break;
  case 12:
   VAR_17->type = VAR_10;
   break;
  case 13:
   VAR_17->type = VAR_11;
   break;
  case 16:
  case 18:

  case 17:
  case 19:

  case 24:
  case 25:

  case 26:
  case 27:
   VAR_17->type = VAR_4;
   break;
  case 32:
  case 33:
   VAR_17->type = VAR_0;
   break;
  case 34:
  case 35:
   VAR_17->type = VAR_9;
   break;
  case 36:
   VAR_17->type = VAR_1;
   break;
  case 37:
   VAR_17->type = VAR_7;
   break;
  case 38:
   VAR_17->type = VAR_14;
   break;
  case 39:
  case 42:
  case 43:

   break;
  default:

   break;
  }

 } else
 if ((VAR_23 & 0x3e) == 2) {
  int VAR_26 = (((VAR_19[0]&3)<<24)+(VAR_19[1]<<16)+(VAR_19[2]<<8)+VAR_19[3]) << 2;
  ut64 VAR_27 = VAR_18 & 0xf0000000;
  switch (VAR_23) {
  case 2:
   VAR_17->type = VAR_5;
   VAR_17->jump = VAR_27 + VAR_26;
   VAR_17->delay = 1;
   FUNC_6 (&VAR_17->esil, "0x%08x,pc,=", VAR_26);
   break;
  case 3:
   VAR_17->type = VAR_2;
   VAR_17->jump = VAR_27 + VAR_26;
   VAR_17->fail = VAR_18+8;
   VAR_17->delay = 1;
   FUNC_6 (&VAR_17->esil, "pc,lr,=,0x%08x,pc,=", (ut32)VAR_26);
   break;
  }

 } else if ((VAR_23 & 0x1c) == 0x1c) {
  int VAR_28 = (VAR_19[3]&63);

  switch (VAR_28) {
  case 0:
   break;
  case 1:
   break;
  case 2:
   break;
  case 3:
   break;

  }
 } else {
  int VAR_29 = ((VAR_19[0]&3)<<3)+(VAR_19[1]>>5);
  int VAR_30 = VAR_19[1]&31;
  int VAR_31 = (VAR_19[2]<<8)+VAR_19[3];
  if (((VAR_23 >> 2) ^ 0x3) && (VAR_31 & 0x8000)) {
   VAR_31 = 0 - (0x10000 - VAR_31);
  }
  switch (VAR_23) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:

   VAR_17->type = VAR_3;
   VAR_17->jump = VAR_18+(VAR_31<<2)+4;
   VAR_17->fail = VAR_18+8;
   VAR_17->delay = 1;
   break;
  case 15:
   VAR_17->dst = FUNC_2 ();
   VAR_17->dst->reg = FUNC_4 (VAR_16->reg, FUNC_1(VAR_30), VAR_15);

   VAR_17->val = VAR_31;
   break;
  case 9:
   VAR_17->dst = FUNC_2 ();
   VAR_17->dst->reg = FUNC_4 (VAR_16->reg, FUNC_1(VAR_30), VAR_15);

   VAR_17->src[0] = FUNC_2 ();
   VAR_17->src[0]->reg = FUNC_4 (VAR_16->reg, FUNC_1(VAR_29), VAR_15);
   VAR_17->val = VAR_31;
   break;
  case 8:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 32:
  case 33:
  case 35:
  case 36:
  case 37:
  case 40:
  case 41:
  case 43:
  case 49:
  case 57:
   break;
  case 29:
   VAR_17->type = VAR_2;
   VAR_17->jump = VAR_18 + 4*((VAR_19[3] | VAR_19[2]<<8 | VAR_19[1]<<16));
   VAR_17->fail = VAR_18 + 8;
   VAR_17->delay = 1;
   break;
  }

 }
 return VAR_24;
 return VAR_17->size;
}
