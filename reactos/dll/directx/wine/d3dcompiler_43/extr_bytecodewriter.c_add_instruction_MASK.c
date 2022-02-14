
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {int dummy; } ;
struct bwriter_shader {int instr_alloc_size; int num_instrs; struct instruction** instr; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct instruction** FUNC_1 (int) ;
 struct instruction** FUNC_2 (struct instruction**,int) ;

BOOL FUNC_3(struct bwriter_shader *VAR_3, struct instruction *VAR_4) {
    struct instruction **VAR_5;

    if(!VAR_3) return VAR_0;

    if(VAR_3->instr_alloc_size == 0) {
        VAR_3->instr = FUNC_1(sizeof(*VAR_3->instr) * VAR_1);
        if(!VAR_3->instr) {
            FUNC_0("Failed to allocate the shader instruction array\n");
            return VAR_0;
        }
        VAR_3->instr_alloc_size = VAR_1;
    } else if(VAR_3->instr_alloc_size == VAR_3->num_instrs) {
        VAR_5 = FUNC_2(VAR_3->instr,
                                       sizeof(*VAR_3->instr) * (VAR_3->instr_alloc_size) * 2);
        if(!VAR_5) {
            FUNC_0("Failed to grow the shader instruction array\n");
            return VAR_0;
        }
        VAR_3->instr = VAR_5;
        VAR_3->instr_alloc_size = VAR_3->instr_alloc_size * 2;
    } else if(VAR_3->num_instrs > VAR_3->instr_alloc_size) {
        FUNC_0("More instructions than allocated. This should not happen\n");
        return VAR_0;
    }

    VAR_3->instr[VAR_3->num_instrs] = VAR_4;
    VAR_3->num_instrs++;
    return VAR_2;
}
