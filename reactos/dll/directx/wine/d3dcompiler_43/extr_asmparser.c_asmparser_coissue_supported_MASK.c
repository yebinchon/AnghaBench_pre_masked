
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asm_parser {TYPE_2__* shader; int status; int line_no; } ;
struct TYPE_4__ {int num_instrs; TYPE_1__** instr; } ;
struct TYPE_3__ {int coissue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asm_parser*,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct asm_parser *VAR_2) {

    if(!VAR_2->shader) return;
    if(VAR_2->shader->num_instrs == 0){
        FUNC_0(VAR_2, "Line %u: Coissue flag on the first shader instruction\n", VAR_2->line_no);
        FUNC_1(&VAR_2->status, VAR_0);
    }
    VAR_2->shader->instr[VAR_2->shader->num_instrs-1]->coissue = VAR_1;
}
