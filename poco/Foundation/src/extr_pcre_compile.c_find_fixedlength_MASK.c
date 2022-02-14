
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* group; struct TYPE_5__* prev; } ;
typedef TYPE_1__ recurse_check ;
typedef int pcre_uchar ;
struct TYPE_6__ {scalar_t__ start_code; } ;
typedef TYPE_2__ compile_data ;
typedef int BOOL ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(pcre_uchar *VAR_3, BOOL VAR_4, BOOL VAR_5, compile_data *VAR_6,
  recurse_check *VAR_7)
{
int VAR_8 = -1;
recurse_check VAR_9;
register int VAR_10 = 0;
register pcre_uchar *VAR_11 = VAR_3 + 1 + VAR_1;




for (;;)
  {
  int VAR_12;
  pcre_uchar *VAR_13, *VAR_14;
  register pcre_uchar VAR_15 = *VAR_11;

  switch (VAR_15)
    {





    case 272:
    case 278:
    case 184:
    case 183:
    case 263:
    VAR_12 = FUNC_5(VAR_11 + ((VAR_15 == 272)? VAR_0 : 0), VAR_4, VAR_5, VAR_6,
      VAR_7);
    if (VAR_12 < 0) return VAR_12;
    VAR_10 += VAR_12;
    do VAR_11 += FUNC_0(VAR_11, 1); while (*VAR_11 == 287);
    VAR_11 += 1 + VAR_1;
    break;







    case 287:
    case 233:
    case 241:
    case 289:
    case 280:
    if (VAR_8 < 0) VAR_8 = VAR_10;
      else if (VAR_8 != VAR_10) return -1;
    if (*VAR_11 != 287) return VAR_8;
    VAR_11 += 1 + VAR_1;
    VAR_10 = 0;
    break;





    case 167:
    if (!VAR_5) return -3;
    VAR_14 = VAR_13 = (pcre_uchar *)VAR_6->start_code + FUNC_0(VAR_11, 1);
    do VAR_13 += FUNC_0(VAR_13, 1); while (*VAR_13 == 287);
    if (VAR_11 > VAR_14 && VAR_11 < VAR_13) return -1;
    else
      {
      recurse_check *VAR_16 = VAR_7;
      for (VAR_16 = VAR_7; VAR_16 != ((void*)0); VAR_16 = VAR_16->prev) if (VAR_16->group == VAR_14) break;
      if (VAR_16 != ((void*)0)) return -1;
      }
    VAR_9.prev = VAR_7;
    VAR_9.group = VAR_14;
    VAR_12 = FUNC_5(VAR_14 + VAR_0, VAR_4, VAR_5, VAR_6, &VAR_9);
    if (VAR_12 < 0) return VAR_12;
    VAR_10 += VAR_12;
    VAR_11 += 1 + VAR_1;
    break;



    case 283:
    case 279:
    case 282:
    case 281:
    do VAR_11 += FUNC_0(VAR_11, 1); while (*VAR_11 == 287);
    VAR_11 += 1 + VAR_1;
    break;



    case 229:
    case 170:
    case 154:
    case 148:
    VAR_11 += VAR_11[1] + FUNC_4(VAR_2)[*VAR_11];
    break;

    case 273:
    case 268:
    case 267:
    case 265:
    case 264:
    case 262:
    case 249:
    case 247:
    case 244:
    case 243:
    case 242:
    case 240:
    case 239:
    case 235:
    case 185:
    case 171:
    case 164:
    case 163:
    case 157:
    case 156:
    case 153:
    case 152:
    case 149:
    case 129:
    VAR_11 += FUNC_4(VAR_2)[*VAR_11];
    break;



    case 270:
    case 269:
    case 219:
    case 216:
    VAR_10++;
    VAR_11 += 2;



    break;




    case 238:
    case 237:
    case 218:
    case 217:
    VAR_10 += (int)FUNC_1(VAR_11,1);
    VAR_11 += 2 + VAR_0;



    break;

    case 147:
    VAR_10 += FUNC_1(VAR_11,1);
    if (VAR_11[1 + VAR_0] == 172 || VAR_11[1 + VAR_0] == 197)
      VAR_11 += 2;
    VAR_11 += 1 + VAR_0 + 1;
    break;



    case 172:
    case 197:
    VAR_11 += 2;


    case 234:
    case 132:
    case 189:
    case 188:
    case 190:
    case 248:
    case 187:
    case 131:
    case 186:
    case 130:
    case 286:
    case 288:
    VAR_10++;
    VAR_11++;
    break;




    case 285:
    return -2;



    case 266:
    case 220:
    VAR_11 += FUNC_4(VAR_2)[266];


    switch (*VAR_11)
      {
      case 250:
      case 258:
      case 257:
      case 261:
      case 252:
      case 260:
      case 253:
      case 256:
      case 255:
      return -1;

      case 251:
      case 259:
      case 254:
      if (FUNC_1(VAR_11,1) != FUNC_1(VAR_11,1+VAR_0)) return -1;
      VAR_10 += (int)FUNC_1(VAR_11,1);
      VAR_11 += 1 + 2 * VAR_0;
      break;

      default:
      VAR_10++;
      }
    break;



    case 284:
    case 277:
    case 276:
    case 275:
    case 274:
    case 271:
    case 236:
    case 232:
    case 231:
    case 230:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 221:
    case 215:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
    case 199:
    case 198:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 169:
    case 168:
    case 166:
    case 165:
    case 246:
    case 245:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 155:
    case 151:
    case 150:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    return -1;




    default:
    return -4;
    }
  }

}
