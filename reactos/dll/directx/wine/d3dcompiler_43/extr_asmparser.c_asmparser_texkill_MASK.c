
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int dummy; } ;
struct instruction {int has_dst; int dst; scalar_t__ comptype; scalar_t__ shift; scalar_t__ dstmod; int opcode; } ;
struct asm_parser {int status; int shader; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct instruction*) ;
 struct instruction* FUNC_2 (int ) ;
 int FUNC_3 (struct shader_reg const*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct asm_parser *VAR_3,
                              const struct shader_reg *VAR_4) {
    struct instruction *VAR_5 = FUNC_2(0);

    if(!VAR_5) {
        FUNC_0("Error allocating memory for the instruction\n");
        FUNC_4(&VAR_3->status, VAR_1);
        return;
    }

    VAR_5->opcode = VAR_0;
    VAR_5->dstmod = 0;
    VAR_5->shift = 0;
    VAR_5->comptype = 0;
    VAR_5->dst = FUNC_3(VAR_4, VAR_2);
    VAR_5->has_dst = VAR_2;

    if(!FUNC_1(VAR_3->shader, VAR_5)) {
        FUNC_0("Out of memory\n");
        FUNC_4(&VAR_3->status, VAR_1);
    }
}
