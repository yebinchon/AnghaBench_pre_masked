
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_data {int id; } ;
typedef enum iio_modifier { ____Placeholder_iio_modifier } iio_modifier ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
__attribute__((used)) static bool FUNC_4(struct iio_event_data *VAR_0)
{
 enum iio_chan_type VAR_1 = FUNC_0(VAR_0->id);
 enum iio_modifier VAR_2 = FUNC_2(VAR_0->id);
 enum iio_event_type VAR_3 = FUNC_3(VAR_0->id);
 enum iio_event_direction VAR_4 = FUNC_1(VAR_0->id);

 switch (VAR_1) {
 case 128:
 case 205:
 case 138:
 case 213:
 case 209:
 case 187:
 case 188:
 case 189:
 case 136:
 case 132:
 case 190:
 case 134:
 case 210:
 case 131:
 case 208:
 case 211:
 case 207:
 case 137:
 case 191:
 case 212:
 case 133:
 case 203:
 case 204:
 case 129:
 case 206:
 case 135:
 case 141:
 case 130:
 case 192:
 case 139:
 case 140:
 case 186:
  break;
 default:
  return 0;
 }

 switch (VAR_2) {
 case 142:
 case 153:
 case 146:
 case 143:
 case 152:
 case 150:
 case 145:
 case 151:
 case 149:
 case 147:
 case 144:
 case 148:
 case 179:
 case 175:
 case 162:
 case 158:
 case 178:
 case 174:
 case 176:
 case 180:
 case 173:
 case 177:
 case 163:
 case 157:
 case 156:
 case 172:
 case 170:
 case 171:
 case 169:
 case 160:
 case 181:
 case 154:
 case 159:
 case 161:
 case 182:
 case 164:
 case 185:
 case 184:
 case 183:
 case 155:
 case 168:
 case 166:
 case 165:
 case 167:
  break;
 default:
  return 0;
 }

 switch (VAR_3) {
 case 194:
 case 197:
 case 195:
 case 193:
 case 196:
 case 198:
  break;
 default:
  return 0;
 }

 switch (VAR_4) {
 case 202:
 case 199:
 case 201:
 case 200:
  break;
 default:
  return 0;
 }

 return 1;
}
