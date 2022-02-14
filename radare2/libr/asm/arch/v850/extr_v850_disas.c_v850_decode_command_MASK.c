
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct v850_cmd {int dummy; } ;
 int FUNC_0 (int const*,int,struct v850_cmd*) ;
 int FUNC_1 (int ,int,struct v850_cmd*) ;
 int FUNC_2 (int const*,int,struct v850_cmd*) ;
 int FUNC_3 (int const*,int,struct v850_cmd*) ;
 int FUNC_4 (int ,struct v850_cmd*) ;
 int FUNC_5 (int const*,int,struct v850_cmd*) ;
 int FUNC_6 (int const*,int,struct v850_cmd*) ;
 int FUNC_7 (int ,struct v850_cmd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const*) ;

int FUNC_10 (const ut8 *VAR_0, int VAR_1, struct v850_cmd *VAR_2) {
 int VAR_3;

 if (VAR_1 < 2) {
  return -1;
 }
 ut16 VAR_4 = FUNC_9 (VAR_0);

 switch (FUNC_8 (VAR_4)) {
 case 152:
 case 145:
 case 159:
 case 155:
 case 137:
 case 139:
 case 141:
 case 148:
 case 144:
 case 129:
 case 164:
 case 130:
 case 131:
 case 132:
 case 167:
 case 161:
  VAR_3 = FUNC_7 (VAR_4, VAR_2);
  break;
 case 149:
 case 140:
 case 165:
 case 160:
 case 135:
 case 142:
 case 136:
 case 146:
  VAR_3 = FUNC_4 (VAR_4, VAR_2);
  break;
 case 166:
 case 151:
 case 150:
 case 138:
 case 143:
 case 128:
 case 163:
 case 147:
  VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  break;
 case 157:
 case 156:
  VAR_3 = FUNC_5 (VAR_0, VAR_1, VAR_2);
  break;
 case 134:
 case 154:
 case 153:
 case 133:
  VAR_3 = FUNC_6 (VAR_0, VAR_1, VAR_2);
  break;
 case 162:
  VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2);
  break;
 case 158:
  VAR_3 = FUNC_3 (VAR_0, VAR_1, VAR_2);
  break;
 default:
  if ((FUNC_8 (VAR_4) >> 2) == 0xB) {
   VAR_3 = FUNC_1 (VAR_4, VAR_1, VAR_2);
  } else {
   VAR_3 = -1;
  }
 }

 return VAR_3;
}
