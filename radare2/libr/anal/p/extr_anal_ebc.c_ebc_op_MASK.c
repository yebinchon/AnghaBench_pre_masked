
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ebc_command_t ;
struct TYPE_7__ {int jump; int fail; int ptr; int val; int size; void* type; int addr; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;
 int const VAR_0 ;
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
 int FUNC_0 (TYPE_1__*,int ,int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int const*) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5(RAnal *VAR_16, RAnalOp *VAR_17, ut64 VAR_18, const ut8 *VAR_19, int VAR_20, RAnalOpMask VAR_21) {
 int VAR_22;
 ebc_command_t VAR_23;
 ut8 VAR_24 = VAR_19[0] & VAR_0;

 if (!VAR_17) {
  return 2;
 }

 FUNC_4(VAR_17, 0, sizeof (RAnalOp));
 VAR_17->addr = VAR_18;
 VAR_17->jump = VAR_17->fail = -1;
 VAR_17->ptr = VAR_17->val = -1;

 VAR_22 = VAR_17->size = FUNC_3(VAR_19, &VAR_23);

 if (VAR_22 < 0) {
  return VAR_22;
 }

 switch (VAR_24) {
 case 154:
  FUNC_2(VAR_17, VAR_18, VAR_19);
  break;
 case 155:
  FUNC_1(VAR_17, VAR_18, VAR_19);
  break;
 case 152:
 case 138:
 case 150:
 case 143:
 case 153:
 case 139:
 case 151:
 case 145:
 case 140:
 case 141:
 case 144:
 case 146:
 case 147:
 case 149:
 case 148:
 case 142:
  VAR_17->type = VAR_4;
  break;
 case 132:
  VAR_17->type = VAR_9;
  break;
 case 165:
 case 158:
 case 164:
 case 156:
 case 157:
 case 163:
 case 161:
 case 162:
 case 159:
 case 160:
  VAR_17->type = VAR_3;
  break;
 case 130:
  VAR_17->type = VAR_11;
  break;
 case 131:
  VAR_17->type = VAR_10;
  break;
 case 135:
  VAR_17->type = VAR_6;
  break;
 case 128:
  VAR_17->type = VAR_15;
  break;
 case 137:
  VAR_17->type = VAR_5;
  break;
 case 133:
  VAR_17->type = VAR_8;
  break;
 case 134:
  VAR_17->type = VAR_7;
  break;
 case 168:
  VAR_17->type = VAR_2;
  break;
 case 169:
  VAR_17->type = VAR_1;
  break;
 case 129:
  VAR_17->type = VAR_12;
  break;
 case 136:
  VAR_17->type = VAR_12;
  break;
 case 166:
  FUNC_0(VAR_17, VAR_18, VAR_19);
  break;
 case 167:
  VAR_17->type = VAR_13;
  break;
 default:
  VAR_17->type = VAR_14;
  break;
 }

 return VAR_22;
}
