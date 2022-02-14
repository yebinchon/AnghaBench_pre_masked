
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct v850_cmd {int operands; int instr; } ;


 int VAR_0 ;




 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char** VAR_1 ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_6(const ut8 *VAR_2, int VAR_3, struct v850_cmd *VAR_4) {
 if (VAR_3 < 4) {
  return -1;
 }

 ut16 VAR_5 = FUNC_4 (VAR_2);
 ut16 VAR_6 = FUNC_3 (VAR_2, 2);

 switch (FUNC_0 (VAR_5)) {
 case 129:
  FUNC_5 (VAR_4->instr, VAR_0 - 1, "%s.b", VAR_1[FUNC_0 (VAR_5)]);
  FUNC_5 (VAR_4->operands, VAR_0 - 1, "r%d, 0x%x[r%d]",
          FUNC_2 (VAR_5), VAR_6, FUNC_1 (VAR_5));
  break;
 case 131:
  FUNC_5 (VAR_4->instr, VAR_0 - 1, "%s.b", VAR_1[FUNC_0 (VAR_5)]);
  FUNC_5 (VAR_4->operands, VAR_0 - 1, "0x%x[r%d], r%d",
          FUNC_1 (VAR_5), VAR_6, FUNC_2 (VAR_5));
  break;
 case 130:
  FUNC_5 (VAR_4->instr, VAR_0 - 1, "%s.%c",
    VAR_1[FUNC_0 (VAR_5)], VAR_6 & 1 ? 'w' : 'h');
  FUNC_5 (VAR_4->operands, VAR_0 - 1, "0x%x[r%d], r%d",
    VAR_6 & 0xFFFE, FUNC_1 (VAR_5), FUNC_2 (VAR_5));
  break;
 case 128:
  FUNC_5 (VAR_4->instr, VAR_0 - 1, "%s.%c",
    VAR_1[FUNC_0 (VAR_5)], VAR_6 & 1 ? 'w' : 'h');
  FUNC_5 (VAR_4->operands, VAR_0 - 1, "r%d, 0x%x[r%d]",
          FUNC_2 (VAR_5), VAR_6 & 0xFFFE, FUNC_1 (VAR_5));
  break;
 }

 return 4;
}
