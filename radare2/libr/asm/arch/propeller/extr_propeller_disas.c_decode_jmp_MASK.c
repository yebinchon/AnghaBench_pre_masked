
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct propeller_cmd {int dst; int src; int immed; int operands; int instr; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_5 (struct propeller_cmd *VAR_1, ut32 VAR_2) {
 ut16 VAR_3;
 ut8 VAR_4;
 int VAR_5 = 1;
 VAR_3 = FUNC_1 (VAR_2);
 switch (VAR_3) {
  case 128:
   VAR_4 = FUNC_3 (VAR_2);
   if (VAR_4 & 0x2) {
    FUNC_4 (VAR_1->instr, VAR_0 - 1,
      "%s", "jmpret");
    if (VAR_4 & 1) {
     VAR_1->dst = FUNC_0 (VAR_2) << 2;
     VAR_1->src = FUNC_2 (VAR_2) << 2;

     FUNC_4 (VAR_1->operands, VAR_0 - 1,
       "0x%x, #0x%x", FUNC_0 (VAR_2), FUNC_2 (VAR_2) << 2);
    } else {
     VAR_1->src = FUNC_2 (VAR_2) << 2;
     VAR_1->dst = FUNC_0 (VAR_2) << 2;
     FUNC_4 (VAR_1->operands, VAR_0 - 1,
       "0x%x, 0x%x", FUNC_0 (VAR_2), FUNC_2 (VAR_2) << 2);
    }
   } else {
    FUNC_4 (VAR_1->instr, VAR_0 - 1,
      "%s", "jmp");
    if (VAR_4 & 1) {
     VAR_1->src = FUNC_2 (VAR_2) << 2;
     VAR_1->immed = 1;
     FUNC_4 (VAR_1->operands, VAR_0 - 1,
       "#0x%x", FUNC_2 (VAR_2) << 2);
    } else {
     VAR_1->immed = 0;
     VAR_1->src = FUNC_2 (VAR_2) << 2;
     FUNC_4 (VAR_1->operands, VAR_0 - 1,
       "0x%x", FUNC_2 (VAR_2) << 2);
    }
   }

   VAR_5 = 4;
   break;
 }


 return VAR_5;
}
