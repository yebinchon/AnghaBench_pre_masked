
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int operands; int instr; } ;


 scalar_t__ VAR_0 ;




 char** VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_2, struct cr16_cmd *VAR_3)
{
 int VAR_4 = 2;
 ut16 VAR_5;

 VAR_5 = FUNC_0 (VAR_2);

 if ((VAR_5 & 1)) {
  return -1;
 }

 switch (VAR_5 >> 7) {
 case 128:
  FUNC_1(VAR_3->instr, VAR_0 - 1, "push");
  break;
 case 131:
  FUNC_1(VAR_3->instr, VAR_0 - 1, "pop");
  break;
 case 130:
 case 129:
  FUNC_1(VAR_3->instr, VAR_0 - 1, "popret");
  break;
 }

 FUNC_1(VAR_3->operands, VAR_0 - 1, "$0x%x,%s",
   ((VAR_5 >> 5) & 0x3) + 1,
   VAR_1[(VAR_5 >> 1) & 0xF]);

 return VAR_4;
}
