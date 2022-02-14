
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int operands; int instr; } ;


 int VAR_0 ;



 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 char** VAR_1 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ,char*,...) ;

int FUNC_4(const ut8 *VAR_2, struct cr16_cmd *VAR_3)
{
 int VAR_4 = 2;
 ut16 VAR_5;
 VAR_5 = FUNC_2 (VAR_2);

 switch (VAR_5 >> 9) {
 case 130:
  FUNC_3(VAR_3->instr, VAR_0 - 1, "mulsb");
  FUNC_3(VAR_3->operands, VAR_0 - 1, "%s,%s",
   VAR_1[FUNC_1(VAR_5)],
   VAR_1[FUNC_0(VAR_5)]);
  break;
 case 129:
  FUNC_3(VAR_3->instr, VAR_0 - 1, "mulsw");
  FUNC_3(VAR_3->operands, VAR_0 - 1, "%s,(%s,%s)",
   VAR_1[FUNC_1(VAR_5)],
   VAR_1[FUNC_0(VAR_5) + 1],
   VAR_1[FUNC_0(VAR_5)]);
  break;
 case 128:
  if (VAR_5 & 0x000C) {
   return -1;
  }

  FUNC_3(VAR_3->instr, VAR_0 - 1, "muluw");
  FUNC_3(VAR_3->operands, VAR_0 - 1, "%s,(%s,%s)",
   VAR_1[FUNC_1(VAR_5)],
   VAR_1[FUNC_0(VAR_5) + 1],
   VAR_1[FUNC_0(VAR_5)]);
  break;
 }

 return VAR_4;
}
