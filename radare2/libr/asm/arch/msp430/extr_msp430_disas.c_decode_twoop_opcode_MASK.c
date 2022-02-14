
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut16 ;
struct msp430_cmd {size_t opcode; int instr; } ;


 int FUNC_0 (int ,int ,int ,struct msp430_cmd*) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 char** VAR_0 ;

__attribute__((used)) static int FUNC_6(ut16 VAR_1, ut16 VAR_2, ut16 VAR_3, struct msp430_cmd *VAR_4)
{
 ut8 VAR_5 = FUNC_2(VAR_1);

 FUNC_3 (VAR_4->instr, sizeof (VAR_4->instr), "%s", VAR_0[VAR_5]);
 if (FUNC_1 (VAR_1)) {
  FUNC_5 (VAR_4->instr, ".b", sizeof (VAR_4->instr) - 1 - FUNC_4(VAR_4->instr));
 }

 VAR_4->opcode = VAR_5;
 return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
}
