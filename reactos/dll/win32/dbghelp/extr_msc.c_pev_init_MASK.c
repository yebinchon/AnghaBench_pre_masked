
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pevaluator {char* error; int values; int pool; scalar_t__ stk_index; int stack; struct cpu_stack_walk* csw; } ;
struct pdb_cmd_pair {char* name; int * pvalue; } ;
struct cpu_stack_walk {int dummy; } ;
struct TYPE_3__ {int savedregs_size; int params_size; int locals_size; int start; } ;
typedef TYPE_1__ PDB_FPO_DATA ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct pevaluator*,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(struct pevaluator* VAR_0, struct cpu_stack_walk* VAR_1,
                      PDB_FPO_DATA* VAR_2, struct pdb_cmd_pair* VAR_3)
{
    VAR_0->csw = VAR_1;
    FUNC_2(&VAR_0->pool, 512);
    FUNC_3(&VAR_0->stack, sizeof(char*), 8);
    VAR_0->stk_index = 0;
    FUNC_0(&VAR_0->pool, &VAR_0->values, 8);
    VAR_0->error[0] = '\0';
    for (; VAR_3->name; VAR_3++)
        FUNC_1(VAR_0, VAR_3->name, *VAR_3->pvalue);
    FUNC_1(VAR_0, ".raSearchStart", VAR_2->start);
    FUNC_1(VAR_0, ".cbLocals", VAR_2->locals_size);
    FUNC_1(VAR_0, ".cbParams", VAR_2->params_size);
    FUNC_1(VAR_0, ".cbSavedRegs", VAR_2->savedregs_size);
}
