
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct msp430_cmd {char* operands; } ;
typedef int dstbuf ;





 int FUNC_0 (int,struct msp430_cmd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 char** VAR_0 ;
 int FUNC_6 (char*,int,char*,...) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(ut16 VAR_1, ut16 VAR_2, ut16 VAR_3, struct msp430_cmd *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 ut8 VAR_7, VAR_8, VAR_9, VAR_10;
 ut16 VAR_11;
 char VAR_12[16];

 FUNC_5(VAR_12, 0, sizeof(VAR_12));

 VAR_7 = FUNC_2(VAR_1);
 VAR_8 = FUNC_1(VAR_1);
 VAR_9 = FUNC_4(VAR_1);
 VAR_10 = FUNC_3(VAR_1);


 switch (VAR_7) {
 case 0:
  switch (VAR_9) {
  case 129:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#0");
   break;
  default:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "%s", VAR_0[VAR_9]);
  }
  VAR_5 = 2;
  break;
 case 1:
  VAR_5 = 4;
  switch (VAR_9) {
  case 130:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "0x%04x", VAR_2);
   VAR_6 = 1;
   break;
  case 129:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "%s", "#1");
   VAR_5 = 2;
   break;
  case 128:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "&0x%04x", VAR_2);
   VAR_6 = 1;
   break;
  default:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "0x%x(%s)", VAR_2, VAR_0[VAR_9]);
   VAR_6 = 1;
  }
  break;
 case 2:
  switch (VAR_9) {
  case 128:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#4");
   break;
  case 129:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#2");
   break;
  default:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "@%s", VAR_0[VAR_9]);
  }
  VAR_5 = 2;
  break;
 case 3:
  VAR_5 = 2;
  switch (VAR_9) {
  case 128:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#8");
   break;
  case 129:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#-1");
   break;
  case 130:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "#0x%04x", VAR_2);
   VAR_6 = 1;
   VAR_5 = 4;
   break;
  default:
   FUNC_6(VAR_4->operands, sizeof (VAR_4->operands), "@%s+", VAR_0[VAR_9]);
  }
  break;
 }


 switch (VAR_8) {
 case 0:
  FUNC_6(VAR_12, sizeof (VAR_12), ", %s", VAR_0[VAR_10]);
  break;
 case 1:

  if (VAR_6 != 0) {
      VAR_11 = VAR_3;
      VAR_5 = 6;
  } else {
      VAR_11 = VAR_2;
      VAR_5 = 4;
  }
  switch (FUNC_3(VAR_1)) {
  case 130:
   FUNC_6(VAR_12, sizeof (VAR_12), ", 0x%04x", VAR_11);
   break;
  case 128:
       FUNC_6(VAR_12, sizeof (VAR_12), ", &0x%04x", VAR_11);
   break;
  default:
   FUNC_6(VAR_12, sizeof (VAR_12), ", 0x%x(%s)", VAR_11, VAR_0[VAR_10]);
  }
  break;
 }

 FUNC_8(VAR_4->operands, VAR_12, sizeof (VAR_4->operands) - 1 - FUNC_7(VAR_4->operands));
 FUNC_0(VAR_1, VAR_4);
 return VAR_5;
}
