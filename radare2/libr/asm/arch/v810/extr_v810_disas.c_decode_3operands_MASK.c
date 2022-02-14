
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct v810_cmd {int operands; int instr; } ;
typedef int st16 ;


 size_t FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_3 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut16 VAR_3, const ut16 VAR_4, struct v810_cmd *VAR_5) {
 FUNC_3 (VAR_5->instr, VAR_1 - 1, "%s",
   VAR_2[FUNC_0(VAR_3)]);

 if (FUNC_0(VAR_3) == VAR_0) {
  FUNC_3 (VAR_5->operands, VAR_1 - 1, "%d, r%d, r%d",
    (st16) VAR_4, FUNC_1(VAR_3), FUNC_2(VAR_3));
 } else {
  FUNC_3 (VAR_5->operands, VAR_1 - 1, "0x%x, r%d, r%d",
    VAR_4, FUNC_1(VAR_3), FUNC_2(VAR_3));
 }

 return 4;
}
