
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
struct msp430_cmd {int jmp_addr; size_t jmp_cond; int type; int opcode; int operands; int instr; } ;
typedef int st16 ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char** VAR_1 ;
 int FUNC_2 (int ,int,char*,...) ;

__attribute__((used)) static void FUNC_3(ut16 VAR_2, struct msp430_cmd *VAR_3)
{
 ut16 VAR_4;

 FUNC_2(VAR_3->instr, sizeof (VAR_3->instr), "%s", VAR_1[FUNC_0(VAR_2)]);

 VAR_4 = VAR_2 & 0x3FF;

 VAR_3->jmp_addr = VAR_4 >= 0x300 ? (st16)((0xFE00 | VAR_4) * 2 + 2) : (VAR_4 & 0x1FF) * 2 + 2;
 FUNC_2(VAR_3->operands, sizeof (VAR_3->operands), "$%c0x%04x", VAR_4 >= 0x300 ? '-' : '+',
   VAR_4 >= 0x300 ? 0x400 - ((VAR_4 & 0x1FF) * 2 + 2) : (VAR_4 & 0x1FF) * 2 + 2);

 VAR_3->jmp_cond = FUNC_0(VAR_2);
 VAR_3->opcode = FUNC_1(VAR_2);
 VAR_3->type = VAR_0;
}
