
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct cr16_cmd {int operands; int instr; } ;


 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,scalar_t__,char*,...) ;

int FUNC_3(const ut8 *VAR_2, struct cr16_cmd *VAR_3)
{
 int VAR_4 = 4;
 ut16 VAR_5;
 ut16 VAR_6;
 ut32 VAR_7;

 VAR_5 = FUNC_1 (VAR_2);
 VAR_6 = FUNC_0 (VAR_2, 2);

 if (VAR_5 & 1) {
  return -1;
 }

 FUNC_2(VAR_3->instr, VAR_0 - 1, "movd");

 VAR_7 = VAR_6 | (((VAR_5 >> 4) & 1) << 16) | (((VAR_5 >> 9) & 1) << 20) | (((VAR_5 >> 1) & 0x7) << 17);
 FUNC_2 (VAR_3->operands, VAR_0 - 1, "$0x%08x,(%s,%s)", VAR_7,
   VAR_1[((VAR_5 >> 5) & 0xF) + 1],
   VAR_1[(VAR_5 >> 5) & 0xF]);

 return VAR_4;
}
