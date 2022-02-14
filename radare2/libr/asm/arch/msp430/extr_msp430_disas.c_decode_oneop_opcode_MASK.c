
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut16 ;
struct msp430_cmd {int opcode; char* operands; int type; int instr; } ;



 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(ut16 VAR_3, ut16 VAR_4, struct msp430_cmd *VAR_5)
{
 int VAR_6 = 2;
 ut8 VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_3);

 VAR_7 = FUNC_0(VAR_3);

 FUNC_3(VAR_5->instr, sizeof (VAR_5->instr), "%s", VAR_2[VAR_8]);

 VAR_5->opcode = FUNC_2(VAR_3);

 switch (FUNC_2(VAR_3)) {
 case 131:
 case 129:
 case 132:
 case 128:
 case 135:
 case 137:
  switch (VAR_7) {
  case 0:
   switch (FUNC_1(VAR_3)) {
   case 134:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "#0");
    break;
   default:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands),
      "%s", VAR_1[FUNC_1(VAR_3)]);
   }
   VAR_6 = 2;
   break;
  case 1:

   VAR_6 = 4;
   switch (FUNC_1(VAR_3)) {
   case 134:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "#1");

    VAR_6 = 2;
    break;
   case 136:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "0x%04x", VAR_4);
    break;
   case 130:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "&0x%04x", VAR_4);
    break;
   default:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands),
      "0x%x(%s)", VAR_4, VAR_1[FUNC_1(VAR_3)]);
   }

   break;
  case 2:
   switch (FUNC_1(VAR_3)) {
   case 130:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "#4");
    break;
   case 134:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "#2");
    break;
   default:
    FUNC_3(VAR_5->operands, sizeof (VAR_5->operands),
      "@%s", VAR_1[FUNC_1(VAR_3)]);
   }

   VAR_6 = 2;
   break;
  case 3:
   FUNC_3(VAR_5->operands, sizeof (VAR_5->operands), "#0x%04x", VAR_4);
   VAR_6 = 4;
   break;
  default:
   VAR_6 = -1;
  }
  break;
 case 133:
  VAR_5->operands[0] = '\0';
  break;
 }

 VAR_5->type = VAR_0;

 return VAR_6;
}
