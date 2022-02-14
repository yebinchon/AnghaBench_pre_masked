
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct msp430_cmd {char* operands; int instr; int type; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,struct msp430_cmd*) ;
 int FUNC_1 (int,int,struct msp430_cmd*) ;
 int FUNC_2 (int,int,int,struct msp430_cmd*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int,char*) ;

int FUNC_7(const ut8 *VAR_2, int VAR_3, struct msp430_cmd *VAR_4) {
 int VAR_5 = -1;
 ut16 VAR_6 = 0, VAR_7 = 0;
 if (VAR_3 < 2) {
  return -1;
 }
 ut16 VAR_8 = FUNC_5 (VAR_2);
 ut8 VAR_9 = FUNC_3 (VAR_8);

 switch (VAR_9) {
 case 131:

  break;
 case 128:

  if ((VAR_8 & 0x0f80) <= 0x0300) {

   if (VAR_3 >= 4) {
    VAR_6 = FUNC_4 (VAR_2, 2);
   }
   VAR_5 = FUNC_1(VAR_8, VAR_6, VAR_4);
  }
  break;
 case 130:
 case 129:

  FUNC_0 (VAR_8, VAR_4);
  VAR_5 = 2;
  break;
 default:

  VAR_4->type = VAR_1;
  if (VAR_3 >= 4) {
   VAR_6 = FUNC_4 (VAR_2, 2);
   if (VAR_3 >= 6) {
    VAR_7 = FUNC_4 (VAR_2, 4);
   }
  }
  VAR_5 = FUNC_2 (VAR_8, VAR_6, VAR_7, VAR_4);
  break;
 }



 if (VAR_5 < 0) {
  VAR_4->type = VAR_0;
  FUNC_6(VAR_4->instr, sizeof (VAR_4->instr), "invalid");
  VAR_4->operands[0] = '\0';
  VAR_5 = 2;
 }

 return VAR_5;
}
