
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct v810_cmd {int operands; int instr; } ;
typedef int st16 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;



 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_3 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut16 VAR_2, const ut16 VAR_3, struct v810_cmd *VAR_4) {
 FUNC_3 (VAR_4->instr, VAR_0 - 1, "%s",
  VAR_1[FUNC_0(VAR_2)]);

 switch (FUNC_0(VAR_2)) {
 case 130:
 case 129:
 case 128:
 case 133:
 case 132:
 case 131:
  FUNC_3 (VAR_4->operands, VAR_0 - 1,
    "r%d, %hd[r%d]",
    FUNC_2(VAR_2), (st16)VAR_3, FUNC_1(VAR_2));
  break;
 case 136:
 case 135:
 case 134:
 case 139:
 case 138:
 case 137:
 case 140:
  FUNC_3 (VAR_4->operands, VAR_0 - 1,
    "%hd[r%d], r%d",
    (st16)VAR_3, FUNC_1(VAR_2), FUNC_2(VAR_2));
  break;
 }

 return 4;
}
