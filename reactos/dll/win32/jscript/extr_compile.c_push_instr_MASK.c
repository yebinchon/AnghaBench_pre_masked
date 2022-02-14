
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jsop_t ;
struct TYPE_8__ {int op; } ;
typedef TYPE_2__ instr_t ;
struct TYPE_9__ {size_t code_size; size_t code_off; TYPE_1__* code; } ;
typedef TYPE_3__ compiler_ctx_t ;
struct TYPE_7__ {TYPE_2__* instrs; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static unsigned FUNC_2(compiler_ctx_t *VAR_0, jsop_t VAR_1)
{
    FUNC_0(VAR_0->code_size >= VAR_0->code_off);

    if(VAR_0->code_size == VAR_0->code_off) {
        instr_t *VAR_2;

        VAR_2 = FUNC_1(VAR_0->code->instrs, VAR_0->code_size*2*sizeof(instr_t));
        if(!VAR_2)
            return 0;

        VAR_0->code->instrs = VAR_2;
        VAR_0->code_size *= 2;
    }

    VAR_0->code->instrs[VAR_0->code_off].op = VAR_1;
    return VAR_0->code_off++;
}
