
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct cr16_cmd {int operands; int instr; } ;



 scalar_t__ VAR_0 ;

 size_t FUNC_0 (int) ;
 char** VAR_1 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_2, struct cr16_cmd *VAR_3)
{
 int VAR_4 = 4;
 ut16 VAR_5, VAR_6;
 ut32 VAR_7;

 VAR_5 = FUNC_2 (VAR_2);
 VAR_6 = FUNC_1 (VAR_2, 2);

 FUNC_3(VAR_3->instr, VAR_0 - 1, "bal");

 switch (VAR_5 >> 9) {
 case 129:
  FUNC_3(VAR_3->operands, VAR_0 - 1, "%s,0x%x",
   VAR_1[FUNC_0(VAR_5)], VAR_6);
  break;
 case 128:
  VAR_7 = VAR_6 | (((VAR_5 >> 1) & 0xF) << 16);
  FUNC_3(VAR_3->operands, VAR_0 - 1, "(%s,%s),0x%08x",
   VAR_1[FUNC_0(VAR_5) + 1],
   VAR_1[FUNC_0(VAR_5)], VAR_7);
  break;
 default:
  return -1;
 }

 return VAR_4;
}
