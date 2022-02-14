
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int type; int operands; int instr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,scalar_t__,char*,...) ;

int FUNC_2(const ut8 *VAR_3, struct cr16_cmd *VAR_4)
{
 int VAR_5 = 2;
 ut16 VAR_6;

 VAR_6 = FUNC_0 (VAR_3);

 if ((VAR_6 & 0x1F) != 4) {
  return -1;
 }

 FUNC_1(VAR_4->instr, VAR_0 - 1, "%s",
   VAR_2[VAR_6 >> 7]);
 FUNC_1(VAR_4->operands, VAR_0 - 1, "$0x%x",
   ((VAR_6 >> 5) & 0x3) + 1);

 VAR_4->type = VAR_1;

 return VAR_5;
}
