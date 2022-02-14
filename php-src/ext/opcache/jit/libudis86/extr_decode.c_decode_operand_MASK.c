
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int udword; int sbyte; } ;
struct ud_operand {int type; int _oprcode; int size; scalar_t__ base; TYPE_1__ lval; } ;
struct ud {int br_far; int dis_mode; int _rex; } ;
typedef enum ud_operand_code { ____Placeholder_ud_operand_code } ud_operand_code ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ud*,char*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct ud*,struct ud_operand*) ;
 int FUNC_6 (struct ud*,unsigned int,struct ud_operand*) ;
 int FUNC_7 (struct ud*,struct ud_operand*,int ,unsigned int) ;
 int FUNC_8 (struct ud*,struct ud_operand*,int ,unsigned int) ;
 int FUNC_9 (struct ud*,unsigned int,struct ud_operand*) ;
 int FUNC_10 (struct ud*,struct ud_operand*,int ,int,unsigned int) ;
 int FUNC_11 (struct ud*,struct ud_operand*,unsigned int) ;
 int FUNC_12 (struct ud*,struct ud_operand*,unsigned int) ;
 int FUNC_13 (struct ud*) ;

__attribute__((used)) static int
FUNC_14(struct ud *VAR_12,
               struct ud_operand *VAR_13,
               enum ud_operand_code VAR_14,
               unsigned int VAR_15)
{
  VAR_13->type = VAR_6;
  VAR_13->_oprcode = VAR_14;

  switch (VAR_14) {
    case 184 :
      FUNC_5(VAR_12, VAR_13);
      break;
    case 160:
      FUNC_8(VAR_12, VAR_13, VAR_2,
                      FUNC_0(FUNC_13(VAR_12)) == 3 ?
                        FUNC_2(VAR_15) : FUNC_1(VAR_15));
      break;
    case 171:
      VAR_12->br_far = 1;

    case 161:
      if (FUNC_0(FUNC_13(VAR_12)) == 3) {
        FUNC_4(VAR_12, "expected modrm.mod != 3\n");
      }

    case 173:
      FUNC_8(VAR_12, VAR_13, VAR_2, VAR_15);
      break;
    case 169:
      FUNC_7(VAR_12, VAR_13, VAR_2, VAR_15);
      break;
    case 128:
    case 166:
      FUNC_6(VAR_12, VAR_15, VAR_13);
      break;
    case 165:
      VAR_13->type = VAR_7;
      VAR_13->lval.udword = 1;
      break;
    case 158:
      if (FUNC_0(FUNC_13(VAR_12)) != 3) {
        FUNC_4(VAR_12, "expected modrm.mod == 3\n");
      }

    case 155:
      FUNC_8(VAR_12, VAR_13, VAR_3, VAR_15);
      break;
    case 156:
      FUNC_7(VAR_12, VAR_13, VAR_3, VAR_15);
      break;
    case 135:
      if (FUNC_0(FUNC_13(VAR_12)) != 3) {
        FUNC_4(VAR_12, "expected modrm.mod == 3\n");
      }

    case 133:
      FUNC_8(VAR_12, VAR_13, VAR_5, VAR_15);
      break;
    case 134:
      FUNC_7(VAR_12, VAR_13, VAR_5, VAR_15);
      break;
    case 167:
      FUNC_12(VAR_12, VAR_13, VAR_15);
      break;
    case 159:
      FUNC_8(VAR_12, VAR_13, VAR_5,
                      FUNC_0(FUNC_13(VAR_12)) == 3 ?
                        FUNC_2(VAR_15) : FUNC_1(VAR_15));
      break;
    case 145:
      FUNC_7(VAR_12, VAR_13, VAR_4, VAR_15);
      break;
    case 157:
      FUNC_9(VAR_12, VAR_15, VAR_13);
      break;
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 146:
      FUNC_10(VAR_12, VAR_13, VAR_2,
                 (FUNC_3(VAR_12->_rex) << 3) | (VAR_14 - 153), VAR_15);
      break;
    case 183:
    case 182:
    case 132:
    case 129:
      FUNC_10(VAR_12, VAR_13, VAR_2, 0, VAR_15);
      break;
    case 180:
    case 178:
    case 131:
      FUNC_10(VAR_12, VAR_13, VAR_2, 1, VAR_15);
      break;
    case 176:
    case 174:
    case 130:
      FUNC_10(VAR_12, VAR_13, VAR_2, 2, VAR_15);
      break;
    case 172:
    case 179:
    case 175:
    case 144:
    case 170:
    case 168:

      if (VAR_12->dis_mode == 64) {
        if (VAR_14 != 170 && VAR_14 != 168) {
          FUNC_4(VAR_12, "invalid segment register in 64bits\n");
        }
      }
      VAR_13->type = VAR_9;
      VAR_13->base = (VAR_14 - 172) + VAR_10;
      VAR_13->size = 16;
      break;
    case 163 :
      FUNC_6(VAR_12, VAR_15, VAR_13);
      VAR_13->type = VAR_8;
      break ;
    case 154 :
      if (FUNC_0(FUNC_13(VAR_12)) != 3) {
        FUNC_4(VAR_12, "expected modrm.mod == 3\n");
      }
      FUNC_8(VAR_12, VAR_13, VAR_2, VAR_15);
      break;
    case 181:
      FUNC_7(VAR_12, VAR_13, VAR_0, VAR_15);
      break;
    case 177:
      FUNC_7(VAR_12, VAR_13, VAR_1, VAR_15);
      break;
    case 164 :
      VAR_13->type = VAR_7;
      VAR_13->lval.sbyte = 3;
      break;
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
      VAR_13->type = VAR_9;
      VAR_13->base = (VAR_14 - 143) + VAR_11;
      VAR_13->size = 80;
      break;
    case 162:
      FUNC_11(VAR_12, VAR_13, VAR_15);
      break;
    default :
      VAR_13->type = VAR_6;
      break;
  }
  return VAR_13->type;
}
