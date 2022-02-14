
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
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 char** VAR_3 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,scalar_t__,char*,char*) ;

int FUNC_4(const ut8 *VAR_4, struct cr16_cmd *VAR_5)
{
 int VAR_6 = 2;
 ut16 VAR_7;

 VAR_7 = FUNC_2 (VAR_4);

 if (VAR_7 & 1) {
  return -1;
 }

 FUNC_3(VAR_5->instr, VAR_0 - 1, "s%s",
   VAR_2[FUNC_0(VAR_7)]);
 FUNC_3(VAR_5->operands, VAR_0 - 1, "%s",
   VAR_3[FUNC_1(VAR_7)]);

 VAR_5->type = VAR_1;

 return VAR_6;
}
