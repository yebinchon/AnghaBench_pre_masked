
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_magic {int type; int vallen; int reln; } ;
 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static size_t FUNC_3(const struct r_magic *VAR_1) {

 size_t VAR_2 = 2 * 10;

 switch (VAR_1->type) {
 case 153:
  return 0;
 case 155:
  VAR_2 += 1 * 10;
  break;
 case 129:
 case 141:
 case 157:
  VAR_2 += 2 * 10;
  break;
 case 139:
 case 145:
 case 161:
 case 136:
  VAR_2 += 4 * 10;
  break;
 case 135:
 case 128:
  VAR_2 += VAR_1->vallen * 10;
  break;
 case 156:
 case 140:
  VAR_2 += VAR_1->vallen * 10 / 2;
  break;
 case 130:
 case 131:
  VAR_2 += VAR_1->vallen * FUNC_0 (10 / VAR_1->vallen, 1);
  break;
 case 154:
 case 149:
 case 165:
 case 138:
 case 150:
 case 146:
 case 162:
 case 137:
 case 151:
 case 163:
 case 147:
  VAR_2 += 4 * 10;
  break;
 case 132:
 case 158:
 case 142:
 case 134:
 case 144:
 case 160:
 case 133:
 case 143:
 case 159:
 case 152:
 case 164:
 case 148:
  VAR_2 += 8 * 10;
  break;
 default:
  FUNC_2 ("Bad type %d\n", VAR_1->type);
  FUNC_1();
 }

 switch (VAR_1->reln) {
 case 'x':
 case '!':
  VAR_2 = 0;
  break;
 case '=':
  VAR_2 += 10;
  break;
 case '>':
 case '<':
  VAR_2 -= 2 * 10;
  break;
 case '^':
 case '&':
  VAR_2 -= 10;
  break;
 default:
  FUNC_2 ("Bad relation %c\n", VAR_1->reln);
  FUNC_1();
 }
 return VAR_2? VAR_2: 1;
}
