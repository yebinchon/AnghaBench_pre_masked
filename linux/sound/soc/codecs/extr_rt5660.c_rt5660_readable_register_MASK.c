
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {unsigned int window_start; unsigned int window_len; unsigned int range_min; unsigned int range_max; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if ((VAR_2 >= VAR_0[VAR_3].window_start &&
       VAR_2 <= VAR_0[VAR_3].window_start +
       VAR_0[VAR_3].window_len) ||
      (VAR_2 >= VAR_0[VAR_3].range_min &&
       VAR_2 <= VAR_0[VAR_3].range_max))
   return 1;

 switch (VAR_2) {
 case 142:
 case 139:
 case 165:
 case 173:
 case 172:
 case 211:
 case 136:
 case 226:
 case 135:
 case 223:
 case 134:
 case 210:
 case 146:
 case 145:
 case 144:
 case 143:
 case 166:
 case 140:
 case 137:
 case 138:
 case 161:
 case 160:
 case 162:
 case 158:
 case 157:
 case 159:
 case 150:
 case 149:
 case 152:
 case 151:
 case 148:
 case 147:
 case 153:
 case 154:
 case 174:
 case 225:
 case 224:
 case 197:
 case 177:
 case 156:
 case 155:
 case 214:
 case 215:
 case 167:
 case 141:
 case 164:
 case 213:
 case 212:
 case 209:
 case 205:
 case 204:
 case 203:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 208:
 case 207:
 case 206:
 case 182:
 case 181:
 case 187:
 case 186:
 case 185:
 case 184:
 case 183:
 case 168:
 case 170:
 case 169:
 case 171:
 case 176:
 case 175:
 case 128:
 case 133:
 case 132:
 case 196:
 case 195:
 case 189:
 case 188:
 case 163:
 case 194:
 case 193:
 case 192:
 case 191:
 case 190:
 case 222:
 case 221:
 case 220:
 case 219:
 case 218:
 case 217:
 case 216:
 case 180:
 case 179:
 case 178:
 case 131:
 case 130:
 case 129:
  return 1;
 default:
  return 0;
 }
}
