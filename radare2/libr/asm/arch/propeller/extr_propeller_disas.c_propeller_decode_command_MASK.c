
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct propeller_cmd {char* instr; char* operands; int src; int dst; int opcode; } ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct propeller_cmd*,int) ;
 int FUNC_1 (struct propeller_cmd*,int) ;
 int FUNC_2 (struct propeller_cmd*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 char** VAR_3 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (char*,int,char*,...) ;

int FUNC_11(const ut8 *VAR_4, struct propeller_cmd *VAR_5)
{
 int VAR_6 = -1;
 ut32 VAR_7;
 ut16 VAR_8;

 VAR_7 = FUNC_9 (VAR_4);

 VAR_8 = FUNC_5 (VAR_7);

 if (!FUNC_3 (VAR_7)) {
  FUNC_10 (VAR_5->instr, VAR_0, "nop");
  VAR_5->operands[0] = '\0';
  return 4;
 }

 switch (VAR_8) {
  case 186:
  case 185:
  case 184:
  case 183:
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
  case 172:
  case 169:
  case 168:
  case 167:
  case 166:
  case 165:
  case 164:
  case 163:
  case 162:
  case 161:
  case 160:
  case 159:
  case 158:
  case 157:
  case 156:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 150:
  case 149:
  case 148:
  case 147:

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
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_10 (VAR_5->instr, sizeof VAR_5->instr, "%s", VAR_3[VAR_8]);

   if ((VAR_8 == 149 || VAR_8 == 148 ||
      VAR_8 == 147) && (!(FUNC_7 (VAR_7) & 0x2))) {
    VAR_5->instr[0] = 'w';
    VAR_5->instr[1] = 'r';
   }

   if (VAR_8 == VAR_1 && VAR_7 & 0x08000000) {
    FUNC_10 (VAR_5->instr, VAR_0 - 1, "sub");
   } else if (VAR_8 == VAR_2 && VAR_7 & 0x08000000) {
    FUNC_10 (VAR_5->instr, VAR_0 - 1, "subx");
   }

   if (FUNC_8 (VAR_7)) {
    VAR_5->src = FUNC_6 (VAR_7);
    VAR_5->dst = FUNC_4 (VAR_7);
    FUNC_10 (VAR_5->operands, VAR_0 - 1, "0x%x, #%d",
      FUNC_4 (VAR_7), FUNC_6 (VAR_7));
   } else {
    VAR_5->src = FUNC_6 (VAR_7) << 2;
    VAR_5->dst = FUNC_4 (VAR_7);
    FUNC_10 (VAR_5->operands, VAR_0 - 1, "0x%x, 0x%x",
      FUNC_4 (VAR_7), FUNC_6 (VAR_7) << 2);
   }

   VAR_6 = 4;
   break;
  case 171:
   VAR_6 = FUNC_0 (VAR_5, VAR_7);
   if (VAR_6 == -1) {
    FUNC_10 (VAR_5->instr, VAR_0 - 1, "%s",
      VAR_3[VAR_8]);

    if (FUNC_8 (VAR_7)) {
     VAR_5->src = FUNC_6 (VAR_7);
     VAR_5->dst = FUNC_4 (VAR_7);

     FUNC_10 (VAR_5->operands, VAR_0 - 1, "0x%x, #%d",
       FUNC_4 (VAR_7) << 2, FUNC_6 (VAR_7));
    } else {
     VAR_5->src = FUNC_6 (VAR_7);
     VAR_5->dst = FUNC_4 (VAR_7);

     FUNC_10 (VAR_5->operands, VAR_0 - 1, "0x%x, 0x%x",
       FUNC_4 (VAR_7), FUNC_6 (VAR_7));
    }

    VAR_6 = 4;
   }
   break;
  case 170:
   VAR_6 = FUNC_1 (VAR_5, VAR_7);
   break;
 }

 VAR_5->opcode = VAR_8;

 if (VAR_6 > 0) {
  FUNC_2 (VAR_5, VAR_7);
 }

 return VAR_6;
}
