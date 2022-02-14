
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {char* operands; int type; int instr; } ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(const ut8 *VAR_8, struct cr16_cmd *VAR_9)
{
 ut16 VAR_10;
 int VAR_11 = 2;

 VAR_10 = FUNC_0 (VAR_8);

 VAR_9->operands[0] = '\0';
 switch (VAR_10) {
 case 129:
  FUNC_2(VAR_9->instr, "retx", VAR_0 - 1);
  VAR_9->type = VAR_6;
  break;
 case 133:
  FUNC_2(VAR_9->instr, "di", VAR_0 - 1);
  VAR_9->type = VAR_1;
  break;
 case 132:
  FUNC_2(VAR_9->instr, "ei", VAR_0 - 1);
  VAR_9->type = VAR_2;
  break;
 case 130:
  FUNC_2(VAR_9->instr, "nop", VAR_0 - 1);
  VAR_9->type = VAR_5;
  break;
 case 128:
  FUNC_2(VAR_9->instr, "wait", VAR_0 - 1);
  VAR_9->type = VAR_7;
  break;
 case 131:
  FUNC_2(VAR_9->instr, "eiwait", VAR_0 - 1);
  VAR_9->type = VAR_3;
  break;
 default:
  switch (VAR_10 >> 5) {
  case 0x3DF:
   FUNC_2(VAR_9->instr, "excp", VAR_0 - 1);
   FUNC_1(VAR_9->operands, VAR_0 - 1,
     "0x%x", (VAR_10 >> 1) & 0xF);
   VAR_9->type = VAR_4;
   break;
  default:
   VAR_11 = -1;
  }
 }

 return VAR_11;
}
