
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct src_regs {int count; int * reg; } ;
struct shader_reg {int dummy; } ;
struct instruction {scalar_t__ comptype; void* shift; void* dstmod; int opcode; } ;
struct asm_parser {int status; int shader; TYPE_1__* funcs; int line_no; } ;
struct TYPE_2__ {int (* srcreg ) (struct asm_parser*,struct instruction*,int ,int *) ;int (* dstreg ) (struct asm_parser*,struct instruction*,struct shader_reg const*) ;} ;
typedef void* DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct instruction*) ;
 struct instruction* FUNC_2 (int) ;
 int FUNC_3 (struct asm_parser*,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct asm_parser*,struct instruction*,struct shader_reg const*) ;
 int FUNC_6 (struct asm_parser*,struct instruction*,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct asm_parser *VAR_2, DWORD VAR_3, DWORD VAR_4,
                             const struct shader_reg *VAR_5,
                             const struct src_regs *VAR_6) {
    struct instruction *VAR_7;

    if(!VAR_6 || VAR_6->count != 1) {
        FUNC_3(VAR_2, "Line %u: Wrong number of source registers in texcrd instruction\n", VAR_2->line_no);
        FUNC_4(&VAR_2->status, VAR_1);
        return;
    }

    VAR_7 = FUNC_2(1);
    if(!VAR_7) {
        FUNC_0("Error allocating memory for the instruction\n");
        FUNC_4(&VAR_2->status, VAR_1);
        return;
    }


    VAR_7->opcode = VAR_0;
    VAR_7->dstmod = VAR_3;
    VAR_7->shift = VAR_4;
    VAR_7->comptype = 0;

    VAR_2->funcs->dstreg(VAR_2, VAR_7, VAR_5);
    VAR_2->funcs->srcreg(VAR_2, VAR_7, 0, &VAR_6->reg[0]);

    if(!FUNC_1(VAR_2->shader, VAR_7)) {
        FUNC_0("Out of memory\n");
        FUNC_4(&VAR_2->status, VAR_1);
    }
}
