
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int dummy; } ;
 int FUNC_0 (int const*,struct cr16_cmd*) ;
 int FUNC_1 (int const*,struct cr16_cmd*) ;
 int FUNC_2 (int const*,struct cr16_cmd*) ;
 int FUNC_3 (int const*,struct cr16_cmd*) ;
 int FUNC_4 (int const*,struct cr16_cmd*) ;
 int FUNC_5 (int const*,struct cr16_cmd*) ;
 int FUNC_6 (int const*,struct cr16_cmd*) ;
 int FUNC_7 (int const*,struct cr16_cmd*) ;
 int FUNC_8 (int const*,struct cr16_cmd*) ;
 int FUNC_9 (int const*,struct cr16_cmd*) ;
 int FUNC_10 (int const*,struct cr16_cmd*) ;
 int FUNC_11 (int const*,struct cr16_cmd*) ;
 int FUNC_12 (int const*,struct cr16_cmd*) ;
 int FUNC_13 (int const*,struct cr16_cmd*) ;
 int FUNC_14 (int const*,struct cr16_cmd*) ;
 int FUNC_15 (int const*,struct cr16_cmd*) ;
 int FUNC_16 (int) ;
 int const FUNC_17 (int) ;
 int FUNC_18 (int const*) ;

int FUNC_19(const ut8 *VAR_0, struct cr16_cmd *VAR_1)
{
 int VAR_2;
 ut16 VAR_3;
 VAR_3 = FUNC_18 (VAR_0);

 switch (FUNC_17(VAR_3)) {
 case 148:
 case 163:
 case 161:
 case 162:
 case 144:
 case 132:
 case 131:
 case 155:
 case 160:
 case 140:
 case 128:
 case 159:
 case 149:
  switch(FUNC_16(VAR_3)) {
  case 154:
   VAR_2 = FUNC_4(VAR_0, VAR_1);
   break;
  case 135:
   VAR_2 = FUNC_13(VAR_0, VAR_1);
   break;
  default:
   VAR_2 = -1;
  }
  if (VAR_2 == -1 && FUNC_17(VAR_3) == 155) {
   VAR_2 = FUNC_14(VAR_0, VAR_1);
  }
  break;
 case 157:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 case 156:
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  break;
 default:
  VAR_2 = -1;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch ((VAR_3 >> 13)) {
 case 0x2:
 case 0x0:
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch (VAR_3 >> 9) {
 case 150:
 case 134:
  VAR_2 = FUNC_15(VAR_0, VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_13(VAR_0, VAR_1);
  if (VAR_2 == -1) {
   VAR_2 = FUNC_0 (VAR_0, VAR_1);
  }
  break;
 case 130:
  VAR_2 = FUNC_4(VAR_0, VAR_1);
  break;
 case 158:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 case 152:
 case 153:
 case 0x0B:
  VAR_2 = FUNC_5(VAR_0, VAR_1);
  if (VAR_2 == -1) {
   VAR_2 = FUNC_2 (VAR_0, VAR_1);
  }
  break;
 case 146:
 case 145:
  VAR_2 = FUNC_10(VAR_0, VAR_1);
  break;
 case 143:
 case 142:
 case 141:
  VAR_2 = FUNC_11(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch (VAR_3 >> 7) {
 case 136:
 case 139:
 case 138:
 case 137:
  VAR_2 = FUNC_12(VAR_0, VAR_1);
  break;
 case 151:
 case 133:
  VAR_2 = FUNC_7(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch (VAR_3 >> 10) {
 case 147:
  VAR_2 = FUNC_9(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }

 VAR_2 = FUNC_8(VAR_0, VAR_1);

 if (VAR_2 != -1) {
  return VAR_2;
 }

 switch (FUNC_16(VAR_3)) {
 case 0x2:
 case 0x3:
 case 0x1:
 case 0x0:
  VAR_2 = FUNC_6(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 != -1) {
  return VAR_2;
 }
 return VAR_2;
}
