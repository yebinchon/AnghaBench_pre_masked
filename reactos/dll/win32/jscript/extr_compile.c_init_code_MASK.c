
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int instr_t ;
struct TYPE_5__ {int code_size; int code_off; TYPE_2__* code; } ;
typedef TYPE_1__ compiler_ctx_t ;
typedef int bytecode_t ;
typedef int WCHAR ;
struct TYPE_6__ {int ref; int instrs; int source; int heap; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    VAR_2->code = FUNC_1(sizeof(bytecode_t));
    if(!VAR_2->code)
        return VAR_0;

    VAR_2->code->ref = 1;
    FUNC_2(&VAR_2->code->heap);

    VAR_2->code->source = FUNC_3(VAR_3);
    if(!VAR_2->code->source) {
        FUNC_4(VAR_2->code);
        return VAR_0;
    }

    VAR_2->code->instrs = FUNC_0(64 * sizeof(instr_t));
    if(!VAR_2->code->instrs) {
        FUNC_4(VAR_2->code);
        return VAR_0;
    }

    VAR_2->code_size = 64;
    VAR_2->code_off = 1;
    return VAR_1;
}
