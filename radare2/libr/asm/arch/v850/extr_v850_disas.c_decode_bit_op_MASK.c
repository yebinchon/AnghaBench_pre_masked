
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct v850_cmd {int operands; int instr; } ;


 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_2, int VAR_3, struct v850_cmd *VAR_4) {
 if (VAR_3 < 4) {
  return -1;
 }

 ut16 VAR_5 = FUNC_2 (VAR_2);
 ut16 VAR_6 = FUNC_1 (VAR_2, 2);
 FUNC_3 (VAR_4->instr, VAR_0 - 1, "%s", VAR_1[VAR_5 >> 14]);
 ut8 VAR_7 = FUNC_0 (VAR_5);
 FUNC_3 (VAR_4->operands, VAR_0 - 1, "%u, 0x%x[r%d]",
   (VAR_5 >> 11) & 0x7, VAR_6, VAR_7);
 return 4;
}
