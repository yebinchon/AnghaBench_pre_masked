
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ syskind_t ;
typedef int ULONG ;
typedef scalar_t__ LPCSTR ;
typedef int LCID ;


 int FUNC_0 (int) ;
 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char* VAR_7 ;
 unsigned char* VAR_8 ;
 unsigned char* VAR_9 ;
 unsigned char* VAR_10 ;
 unsigned char* VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_14 ;

unsigned int FUNC_4( syskind_t VAR_15, LCID VAR_16, LPCSTR VAR_17)
{
  ULONG VAR_18, VAR_19 = VAR_15 == VAR_13 ? 1 : 0;
  ULONG VAR_20, VAR_21 = 0x0deadbee;
  const unsigned char *VAR_22 = (const unsigned char *)VAR_17, *VAR_23 = ((void*)0);

  if (!VAR_22)
    return 0;

  switch (FUNC_1(FUNC_0(VAR_16)))
  {
  default:
    FUNC_3(VAR_14, "Unknown lcid %x, treating as latin-based, please report\n", VAR_16);

  case 220: case 219: case 217:
  case 216: case 215: case 214:
  case 213: case 212: case 210:
  case 209: case 205: case 204:
  case 203: case 202: case 200:
  case 199: case 197: case 196:
  case 194: case 193: case 192:
  case 190: case 188: case 185:
  case 183: case 181: case 180:
  case 179: case 178: case 176:
  case 175: case 174: case 173:
  case 172: case 171: case 169:
  case 168: case 167: case 166:
  case 163: case 161: case 160:
  case 159: case 155: case 154:
  case 153: case 151: case 148:
  case 147: case 146: case 144:
  case 143: case 142: case 141:
  case 137: case 135: case 134:
  case 132: case 170: case 184:
  case 156: case 136: case 139:
  case 129: case 128: case 130:
  case 211: case 165:


  case 195:


  case 145:


  case 158:


  case 149:


  case 140:


  case 133:


  case 201:


  case 131:


  case 207:

    VAR_18 = 16;
    VAR_23 = VAR_3;
    break;
  case 206: case 187: case 162:
  case 152: case 150:
    VAR_18 = 32;
    VAR_23 = VAR_8;
    break;
  case 189:
    VAR_18 = 48;
    VAR_23 = VAR_9;
    break;
  case 182:
    VAR_18 = 64;
    VAR_23 = VAR_10;
    break;
  case 177:
    VAR_18 = 80;
    VAR_23 = VAR_11;
    break;
  case 208:
    VAR_18 = 112;
    VAR_23 = VAR_0;
    break;
  case 191:
    VAR_18 = 128;
    VAR_23 = VAR_1;
    break;
  case 186:
    VAR_18 = 144;
    VAR_23 = VAR_2;
    break;
  case 138:
    VAR_18 = 160;
    VAR_23 = VAR_4;
    break;
  case 164:
    if (FUNC_2(FUNC_0(VAR_16)) == VAR_12)
    {
      VAR_18 = 176;
      VAR_23 = VAR_5;
    }
    else
    {
      VAR_18 = 16;
      VAR_23 = VAR_3;
    }
    break;
  case 218:
  case 198:
    VAR_18 = 208;
    VAR_23 = VAR_6;
    break;
  case 157:
    VAR_18 = 224;
    VAR_23 = VAR_7;
    break;
  }

  VAR_20 = (VAR_18 | VAR_19) << 16;

  while (*VAR_22)
  {
    VAR_21 = 37 * VAR_21 + VAR_23[*VAR_22 > 0x7f && VAR_19 ? *VAR_22 + 0x80 : *VAR_22];
    VAR_22++;
  }

  VAR_21 = (VAR_21 % 65599) & 0xffff;

  return VAR_20 | VAR_21;
}
