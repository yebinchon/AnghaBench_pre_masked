
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct v810_cmd {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct v810_cmd*) ;
 int FUNC_2 (int ,struct v810_cmd*) ;
 int FUNC_3 (int ,struct v810_cmd*) ;
 int FUNC_4 (int ,int ,struct v810_cmd*) ;
 int FUNC_5 (int ,struct v810_cmd*) ;
 int FUNC_6 (int ,int ,struct v810_cmd*) ;
 int FUNC_7 (int ,int ,struct v810_cmd*) ;
 int FUNC_8 (int ,struct v810_cmd*) ;
 int FUNC_9 (int const*) ;

int FUNC_10(const ut8 *VAR_0, int VAR_1, struct v810_cmd *VAR_2) {
 int VAR_3;
 ut16 VAR_4 = 0;
 ut16 VAR_5 = 0;

 VAR_4 = FUNC_9 (VAR_0);
 if (VAR_1 >= 4) {
  VAR_5 = FUNC_9 (VAR_0 + 2);
 }

 switch (FUNC_0(VAR_4)) {
 case 156:
 case 180:
 case 131:
 case 172:
 case 139:
 case 137:
 case 162:
 case 143:
 case 152:
 case 170:
 case 151:
 case 169:
 case 149:
 case 177:
 case 150:
 case 129:
  VAR_3 = FUNC_8 (VAR_4, VAR_2);
  break;
 case 153:
 case 178:
 case 140:
 case 171:
 case 138:
 case 136:
 case 173:
 case 142:
 case 130:
 case 144:
 case 167:
 case 158:
 case 133:
 case 141:
  VAR_3 = FUNC_5 (VAR_4, VAR_2);
  break;
 case 155:
 case 179:
 case 148:
 case 176:
 case 128:
 case 154:
  VAR_3 = FUNC_1 (VAR_4, VAR_5, VAR_2);
  break;
 case 161:
 case 163:
  VAR_3 = FUNC_6 (VAR_4, VAR_5, VAR_2);
  break;
 case 160:
 case 159:
 case 157:
 case 135:
 case 134:
 case 132:
 case 166:
 case 165:
 case 174:
 case 164:
 case 147:
 case 146:
 case 145:
  VAR_3 = FUNC_7 (VAR_4, VAR_5, VAR_2);
  break;
 case 175:
  VAR_3 = FUNC_3 (VAR_4, VAR_2);
  break;
 case 168:
  VAR_3 = FUNC_4 (VAR_4, VAR_5, VAR_2);
  break;
 default:
  if ((FUNC_0(VAR_4) >> 3) == 0x4) {
   VAR_3 = FUNC_2 (VAR_4, VAR_2);
  } else {
   VAR_3 = -1;
  }
 }

 if ((VAR_3 > 0) && (VAR_1 < VAR_3)) {
  VAR_3 = -1;
 }

 return VAR_3;
}
