
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct h8300_cmd {int dummy; } ;
typedef int st8 ;
struct TYPE_7__ {int jump; int fail; int ptr; int val; int size; scalar_t__ type; int addr; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int const*) ;
 int FUNC_3 (int const*,struct h8300_cmd*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5(RAnal *VAR_14, RAnalOp *VAR_15, ut64 VAR_16,
  const ut8 *VAR_17, int VAR_18, RAnalOpMask VAR_19)
{
 int VAR_20;
 ut8 VAR_21 = VAR_17[0];
 struct h8300_cmd VAR_22;

 if (!VAR_15) {
  return 2;
 }

 FUNC_4(VAR_15, 0, sizeof (RAnalOp));

 VAR_15->addr = VAR_16;
 VAR_15->jump = VAR_15->fail = -1;
 VAR_15->ptr = VAR_15->val = -1;
 VAR_20 = VAR_15->size = FUNC_3(VAR_17, &VAR_22);

 if (VAR_20 < 0) {
  return VAR_20;
 }
 switch (VAR_21 >> 4) {
 case 151:
 case 150:
 case 152:
  VAR_15->type = VAR_5;
  break;
 case 162:
  VAR_15->type = VAR_4;
  break;
 case 128:
  VAR_15->type = VAR_13;
  break;
 case 183:
  VAR_15->type = VAR_2;
  break;
 case 185:
 case 186:
  VAR_15->type = VAR_2;
  break;
 case 132:
  VAR_15->type = VAR_11;
  break;
 default:
  VAR_15->type = VAR_12;
  break;
 };

 if (VAR_15->type != VAR_12) {
  FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17);
  return VAR_20;
 }
 switch (VAR_21) {
 case 142:
 case 146:
 case 144:
 case 149:
 case 141:
 case 145:
 case 143:
 case 148:
 case 147:
 case 154:
 case 153:
 case 161:
  VAR_15->type = VAR_5;
  break;
 case 138:
  VAR_15->type = VAR_8;
  break;
 case 164:
 case 163:
 case 167:
 case 168:
  VAR_15->type = VAR_4;
  break;
 case 137:
  VAR_15->type = VAR_9;
  break;
 case 136:
  VAR_15->type = VAR_10;
  break;
 case 130:
 case 129:
  VAR_15->type = VAR_13;
  break;
 case 140:
  VAR_15->type = VAR_6;
  break;
 case 184:
  VAR_15->type = VAR_2;
  break;
 case 190:
 case 188:
 case 189:
 case 187:
  VAR_15->type = VAR_1;
  break;
 case 131:
 case 134:
 case 135:
 case 133:
  VAR_15->type = VAR_11;
  break;
 case 139:
  VAR_15->type = VAR_7;
  break;
 case 157:
 case 156:
 case 155:
  FUNC_2(VAR_15, VAR_16, VAR_17);
  break;
 case 160:
 case 159:
 case 158:
  FUNC_1(VAR_15, VAR_16, VAR_17);
  break;
 case 170:
 case 169:
 case 177:
 case 175:
 case 182:
 case 181:
 case 172:
 case 180:
 case 166:
 case 165:
 case 171:
 case 173:
 case 179:
 case 174:
 case 178:
 case 176:
  VAR_15->type = VAR_3;
  VAR_15->jump = VAR_16 + 2 + (st8)(VAR_17[1]);
  VAR_15->fail = VAR_16 + 2;
  break;
 default:
  VAR_15->type = VAR_12;
  break;
 };
 if (VAR_19 & VAR_0) {
  FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17);
 }
 return VAR_20;
}
