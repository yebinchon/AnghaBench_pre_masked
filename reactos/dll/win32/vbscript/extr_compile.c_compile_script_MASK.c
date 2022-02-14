
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_25__ {int entry; int main_code; } ;
typedef TYPE_1__ vbscode_t ;
struct TYPE_26__ {int code_list; TYPE_7__* classes; TYPE_3__* global_funcs; TYPE_5__* global_vars; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_27__ {struct TYPE_27__* next; } ;
typedef TYPE_3__ function_t ;
struct TYPE_28__ {struct TYPE_28__* next; } ;
typedef TYPE_4__ function_decl_t ;
struct TYPE_29__ {struct TYPE_29__* next; } ;
typedef TYPE_5__ dynamic_var_t ;
struct TYPE_24__ {TYPE_8__* class_decls; int stats; } ;
struct TYPE_30__ {TYPE_1__* code; TYPE_7__* classes; TYPE_3__* funcs; TYPE_5__* global_vars; TYPE_10__ parser; TYPE_4__* func_decls; int * const_decls; int * global_consts; scalar_t__ labels_size; scalar_t__ labels_cnt; int * stat_ctx; int * labels; } ;
typedef TYPE_6__ compile_ctx_t ;
struct TYPE_31__ {struct TYPE_31__* next; TYPE_2__* ctx; } ;
typedef TYPE_7__ class_desc_t ;
struct TYPE_32__ {struct TYPE_32__* next; } ;
typedef TYPE_8__ class_decl_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_6__*,int const*) ;
 int FUNC_3 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_6__*,int ,int *) ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*,TYPE_3__**) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_10__*,int const*,int const*) ;
 int FUNC_10 (TYPE_6__*) ;
 int VAR_2 ;

HRESULT FUNC_11(script_ctx_t *VAR_3, const WCHAR *VAR_4, const WCHAR *VAR_5, vbscode_t **VAR_6)
{
    function_t *VAR_7;
    function_decl_t *VAR_8;
    class_decl_t *VAR_9;
    compile_ctx_t VAR_10;
    vbscode_t *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_9(&VAR_10.parser, VAR_4, VAR_5);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_11 = VAR_10.code = FUNC_2(&VAR_10, VAR_4);
    if(!VAR_10.code)
        return VAR_0;

    VAR_10.funcs = ((void*)0);
    VAR_10.func_decls = ((void*)0);
    VAR_10.global_vars = ((void*)0);
    VAR_10.classes = ((void*)0);
    VAR_10.labels = ((void*)0);
    VAR_10.global_consts = ((void*)0);
    VAR_10.stat_ctx = ((void*)0);
    VAR_10.labels_cnt = VAR_10.labels_size = 0;

    VAR_12 = FUNC_5(&VAR_10, VAR_10.parser.stats, &VAR_10.code->main_code);
    if(FUNC_0(VAR_12)) {
        FUNC_10(&VAR_10);
        return VAR_12;
    }

    VAR_10.global_consts = VAR_10.const_decls;

    for(VAR_8 = VAR_10.func_decls; VAR_8; VAR_8 = VAR_8->next) {
        VAR_12 = FUNC_6(&VAR_10, VAR_8, &VAR_7);
        if(FUNC_0(VAR_12)) {
            FUNC_10(&VAR_10);
            return VAR_12;
        }

        VAR_7->next = VAR_10.funcs;
        VAR_10.funcs = VAR_7;
    }

    for(VAR_9 = VAR_10.parser.class_decls; VAR_9; VAR_9 = VAR_9->next) {
        VAR_12 = FUNC_4(&VAR_10, VAR_9);
        if(FUNC_0(VAR_12)) {
            FUNC_10(&VAR_10);
            return VAR_12;
        }
    }

    VAR_12 = FUNC_3(&VAR_10, VAR_3);
    if(FUNC_0(VAR_12)) {
        FUNC_10(&VAR_10);
        return VAR_12;
    }

    if(VAR_10.global_vars) {
        dynamic_var_t *VAR_13;

        for(VAR_13 = VAR_10.global_vars; VAR_13->next; VAR_13 = VAR_13->next);

        VAR_13->next = VAR_3->global_vars;
        VAR_3->global_vars = VAR_10.global_vars;
    }

    if(VAR_10.funcs) {
        for(VAR_7 = VAR_10.funcs; VAR_7->next; VAR_7 = VAR_7->next);

        VAR_7->next = VAR_3->global_funcs;
        VAR_3->global_funcs = VAR_10.funcs;
    }

    if(VAR_10.classes) {
        class_desc_t *VAR_14 = VAR_10.classes;

        while(1) {
            VAR_14->ctx = VAR_3;
            if(!VAR_14->next)
                break;
            VAR_14 = VAR_14->next;
        }

        VAR_14->next = VAR_3->classes;
        VAR_3->classes = VAR_10.classes;
    }

    if(FUNC_1(VAR_2))
        FUNC_7(&VAR_10);

    VAR_10.code = ((void*)0);
    FUNC_10(&VAR_10);

    FUNC_8(&VAR_3->code_list, &VAR_11->entry);
    *VAR_6 = VAR_11;
    return VAR_1;
}
