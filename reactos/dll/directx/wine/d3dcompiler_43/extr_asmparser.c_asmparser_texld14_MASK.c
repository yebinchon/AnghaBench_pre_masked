
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct src_regs {int count; int * reg; } ;
struct shader_reg {int regnum; } ;
struct instruction {TYPE_3__* src; scalar_t__ comptype; void* shift; void* dstmod; int opcode; } ;
struct asm_parser {int status; int shader; TYPE_1__* funcs; int line_no; } ;
struct TYPE_5__ {int swizzle; } ;
struct TYPE_6__ {int * rel_reg; int srcmod; TYPE_2__ u; int regnum; int type; } ;
struct TYPE_4__ {int (* srcreg ) (struct asm_parser*,struct instruction*,int ,int *) ;int (* dstreg ) (struct asm_parser*,struct instruction*,struct shader_reg const*) ;} ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,struct instruction*) ;
 struct instruction* FUNC_3 (int) ;
 int FUNC_4 (struct asm_parser*,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct asm_parser*,struct instruction*,struct shader_reg const*) ;
 int FUNC_7 (struct asm_parser*,struct instruction*,int ,int *) ;

__attribute__((used)) static void FUNC_8(struct asm_parser *VAR_5, DWORD VAR_6, DWORD VAR_7,
                              const struct shader_reg *VAR_8,
                              const struct src_regs *VAR_9) {
    struct instruction *VAR_10;

    if(!VAR_9 || VAR_9->count != 1) {
        FUNC_4(VAR_5, "Line %u: texld (PS 1.4) has a wrong number of source registers\n", VAR_5->line_no);
        FUNC_5(&VAR_5->status, VAR_4);
        return;
    }

    VAR_10 = FUNC_3(2);
    if(!VAR_10) {
        FUNC_0("Error allocating memory for the instruction\n");
        FUNC_5(&VAR_5->status, VAR_4);
        return;
    }




    VAR_10->opcode = VAR_0;
    VAR_10->dstmod = VAR_6;
    VAR_10->shift = VAR_7;
    VAR_10->comptype = 0;

    VAR_5->funcs->dstreg(VAR_5, VAR_10, VAR_8);
    VAR_5->funcs->srcreg(VAR_5, VAR_10, 0, &VAR_9->reg[0]);




    FUNC_1(&VAR_10->src[1], sizeof(VAR_10->src[1]));
    VAR_10->src[1].type = VAR_1;
    VAR_10->src[1].regnum = VAR_8->regnum;
    VAR_10->src[1].u.swizzle = VAR_3;
    VAR_10->src[1].srcmod = VAR_2;
    VAR_10->src[1].rel_reg = ((void*)0);

    if(!FUNC_2(VAR_5->shader, VAR_10)) {
        FUNC_0("Out of memory\n");
        FUNC_5(&VAR_5->status, VAR_4);
    }
}
