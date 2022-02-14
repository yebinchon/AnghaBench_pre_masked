
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_reg {int dummy; } ;
struct asm_parser {TYPE_1__* shader; } ;
struct TYPE_4__ {struct shader_reg predicate; int has_predicate; } ;
struct TYPE_3__ {int num_instrs; TYPE_2__** instr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct asm_parser *VAR_1,
                                          const struct shader_reg *VAR_2) {

    if(!VAR_1->shader) return;
    if(VAR_1->shader->num_instrs == 0) FUNC_0("Predicate without an instruction\n");
    VAR_1->shader->instr[VAR_1->shader->num_instrs - 1]->has_predicate = VAR_0;
    VAR_1->shader->instr[VAR_1->shader->num_instrs - 1]->predicate = *VAR_2;
}
