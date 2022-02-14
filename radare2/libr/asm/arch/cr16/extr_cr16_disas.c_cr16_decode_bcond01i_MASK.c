
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int type; int operands; int instr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char** VAR_2 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,scalar_t__,char*,char*,int) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_3, struct cr16_cmd *VAR_4)
{
 ut16 VAR_5;
 int VAR_6 = 2;

 VAR_5 = FUNC_2 (VAR_3);

 if (!(VAR_5 & 1)) {
  return -1;
 }

 if (VAR_5 >> 14) {
  return -1;
 }

 switch ((VAR_5 >> 6) & 0x3) {
 case 0x0:
  FUNC_3(VAR_4->instr, VAR_0 - 1, "%s%c",
    "beq0", FUNC_1(VAR_5) ? 'w' : 'b');
  break;
 case 0x1:
  FUNC_3(VAR_4->instr, VAR_0 - 1, "%s%c",
    "beq1", FUNC_1(VAR_5) ? 'w' : 'b');
  break;
 case 0x2:
  FUNC_3(VAR_4->instr, VAR_0 - 1, "%s%c",
    "bne0", FUNC_1(VAR_5) ? 'w' : 'b');
  break;
 case 0x3:
  FUNC_3(VAR_4->instr, VAR_0 - 1, "%s%c",
    "bne1", FUNC_1(VAR_5) ? 'w' : 'b');
  break;
 }

 FUNC_3(VAR_4->operands, VAR_0 - 1, "%s,0x%x",
   VAR_2[FUNC_0(VAR_5)],
   (VAR_5 >> 1) & 0xF);

 VAR_4->type = VAR_1;

 return VAR_6;
}
