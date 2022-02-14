
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int csh ;
struct TYPE_8__ {int size; int id; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_10__ {int imm; } ;
struct TYPE_9__ {int size; int fail; int jump; void* type; int opex; int esil; scalar_t__ delay; } ;
typedef int RAnalOpMask ;
typedef TYPE_2__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__ FUNC_0 (int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,int,int,int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(RAnal *VAR_12, RAnalOp *VAR_13, ut64 VAR_14, const ut8 *VAR_15, int VAR_16, RAnalOpMask VAR_17) {
 csh VAR_18;
 cs_insn *VAR_19;
 int VAR_20 = VAR_2;
 int VAR_21 = FUNC_4 (VAR_0, VAR_20, &VAR_18);
 VAR_13->type = VAR_10;
 VAR_13->size = 0;
 VAR_13->delay = 0;
 FUNC_7 (&VAR_13->esil);
 if (VAR_21 == VAR_1) {
  FUNC_5 (VAR_18, VAR_3, VAR_4);

  int VAR_22 = FUNC_2 (VAR_18, (const ut8*)VAR_15, VAR_16, VAR_14, 1, &VAR_19);
  if (VAR_22 < 1) {
   VAR_13->type = VAR_8;
  } else {
   if (VAR_17 & VAR_5) {
    FUNC_6 (&VAR_13->opex, VAR_18, VAR_19);
   }
   VAR_13->size = VAR_19->size;
   switch (VAR_19->id) {
   case 160:
   case 162:
    VAR_13->type = VAR_6;
    break;
   case 164:
    VAR_13->type = VAR_9;
    break;
   case 161:
   case 178:
   case 176:
   case 177:
   case 173:
   case 175:
   case 174:
   case 172:
   case 170:
   case 171:
   case 167:
   case 169:
   case 168:
   case 166:
   case 165:
   case 179:
   case 163:
   case 159:
   case 158:
    VAR_13->type = VAR_7;
    break;
   case 156:
   case 154:
   case 139:
   case 152:
   case 140:
   case 153:
   case 137:
   case 150:
   case 136:
   case 149:
   case 138:
   case 151:
   case 135:
   case 148:
   case 133:
   case 146:
   case 134:
   case 147:
   case 131:
   case 144:
   case 130:
   case 143:
   case 132:
   case 145:
   case 129:
   case 142:
   case 128:
   case 141:
   case 155:
    VAR_13->type = VAR_7;
    VAR_13->jump = FUNC_0(0).imm;
    VAR_13->fail = VAR_14+VAR_13->size;
    break;
   case 157:
    VAR_13->type = VAR_9;
    VAR_13->jump = FUNC_0(0).imm;
    VAR_13->fail = VAR_11;
    break;
   }
  }
  FUNC_3 (VAR_19, VAR_22);
  FUNC_1 (&VAR_18);
 }
 return VAR_13->size;
}
