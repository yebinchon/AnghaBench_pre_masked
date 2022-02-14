
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut16 ;
struct v810_cmd {int operands; int instr; } ;
typedef int st16 ;


 int FUNC_0 (int const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_2(const ut16 VAR_3, struct v810_cmd *VAR_4) {
 st16 VAR_5;
 ut8 VAR_6;

 VAR_6 = (VAR_3 >> 9) & 0xF;
 VAR_5 = FUNC_0(VAR_3);

 if (VAR_6 == VAR_0) {
  FUNC_1 (VAR_4->instr, VAR_1 - 1, "nop");
 } else {
  FUNC_1 (VAR_4->instr, VAR_1 - 1, "b%s", VAR_2[VAR_6]);
  FUNC_1 (VAR_4->operands, VAR_1 - 1, "%d", VAR_5);
 }

 return 2;
}
