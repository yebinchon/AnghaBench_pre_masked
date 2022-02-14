
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
struct propeller_cmd {int size; int ptr; int val; int opcode; int dst; int src; int type; int fail; int jump; int immed; int addr; } ;
typedef int cmd ;
typedef int RAnalOpMask ;
typedef struct propeller_cmd RAnalOp ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct propeller_cmd*,int ,int) ;
 int FUNC_1 (int const*,struct propeller_cmd*) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_14, RAnalOp *VAR_15, ut64 VAR_16, const ut8 *VAR_17, int VAR_18, RAnalOpMask VAR_19) {
 int VAR_20;
 struct propeller_cmd VAR_21;

 FUNC_0 (&VAR_21, 0, sizeof (VAR_21));
 FUNC_0 (VAR_15, 0, sizeof (RAnalOp));

 VAR_20 = VAR_15->size = FUNC_1 (VAR_17, &VAR_21);

 if (VAR_20 < 0) {
  return VAR_20;
 }

 VAR_15->addr = VAR_16;
 VAR_15->jump = VAR_15->fail = VAR_13;
 VAR_15->ptr = VAR_15->val = -1;

 switch (VAR_21.opcode) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 158:
 case 157:
  VAR_15->type = VAR_3;
  break;
 case 161:
 case 159:
 case 160:
  VAR_15->type = VAR_0;
  break;
 case 144:
  VAR_15->type = VAR_5;
  break;
 case 143:
 case 138:
 case 136:
  VAR_15->type = VAR_7;
  break;
 case 142:
 case 137:
 case 135:
  VAR_15->type = VAR_8;
  break;
 case 145:
  VAR_15->type = VAR_1;
  break;
 case 128:
  VAR_15->type = VAR_12;
  break;
 case 162:
 case 151:
 case 152:
 case 154:
 case 153:
 case 141:
 case 140:
 case 139:
 case 150:
 case 149:
 case 148:
 case 147:
 case 129:
 case 146:
  if (VAR_21.opcode == 150 && VAR_21.dst == 0x44 && VAR_21.src == 0x3c) {
   VAR_15->type = VAR_6;
  } else {
   VAR_15->type = VAR_4;
  }
  break;
 case 134:
  VAR_15->type = VAR_9;
  break;
 case 155:
 case 156:
  if (VAR_21.immed == 0) {
   VAR_15->type = VAR_2;
   VAR_15->jump = 0x20 + VAR_21.src;
   VAR_15->fail = VAR_16 + 2;
  } else {
   VAR_15->type = VAR_10;
   VAR_15->fail = VAR_16 + 2;
  }
  break;
 default:
  VAR_15->type = VAR_11;
  break;
 }

 return VAR_20;
}
