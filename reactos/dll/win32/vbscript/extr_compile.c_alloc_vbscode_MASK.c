
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* code_ctx; int type; } ;
struct TYPE_12__ {int entry; TYPE_2__ main_code; int option_explicit; int heap; int instrs; int source; } ;
typedef TYPE_3__ vbscode_t ;
typedef int instr_t ;
struct TYPE_10__ {int option_explicit; } ;
struct TYPE_13__ {int instr_cnt; int instr_size; TYPE_1__ parser; } ;
typedef TYPE_4__ compile_ctx_t ;
typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static vbscode_t *FUNC_7(compile_ctx_t *VAR_1, const WCHAR *VAR_2)
{
    vbscode_t *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->source = FUNC_4(VAR_2);
    if(!VAR_3->source) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    VAR_3->instrs = FUNC_0(32*sizeof(instr_t));
    if(!VAR_3->instrs) {
        FUNC_6(VAR_3);
        return ((void*)0);
    }

    VAR_1->instr_cnt = 1;
    VAR_1->instr_size = 32;
    FUNC_3(&VAR_3->heap);

    VAR_3->option_explicit = VAR_1->parser.option_explicit;

    VAR_3->main_code.type = VAR_0;
    VAR_3->main_code.code_ctx = VAR_3;

    FUNC_5(&VAR_3->entry);
    return VAR_3;
}
