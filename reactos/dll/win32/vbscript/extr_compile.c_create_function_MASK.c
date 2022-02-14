
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int arg_cnt; TYPE_1__* args; int is_public; int type; int code_ctx; scalar_t__ array_cnt; scalar_t__ var_cnt; int * vars; void* name; } ;
typedef TYPE_2__ function_t ;
struct TYPE_16__ {int body; TYPE_5__* args; int is_public; int type; int name; } ;
typedef TYPE_3__ function_decl_t ;
struct TYPE_17__ {int code; } ;
typedef TYPE_4__ compile_ctx_t ;
typedef int arg_desc_t ;
struct TYPE_18__ {int by_ref; int name; struct TYPE_18__* next; } ;
typedef TYPE_5__ arg_decl_t ;
struct TYPE_14__ {int by_ref; void* name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_2__*) ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ) ;

__attribute__((used)) static HRESULT FUNC_9(compile_ctx_t *VAR_4, function_decl_t *VAR_5, function_t **VAR_6)
{
    function_t *VAR_7;
    HRESULT VAR_8;

    if(FUNC_7(VAR_4, VAR_5->name) || FUNC_8(VAR_4, VAR_5->name) || FUNC_6(VAR_4, VAR_5->name, VAR_2)) {
        FUNC_1("%s: redefinition\n", FUNC_5(VAR_5->name));
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_4->code, sizeof(*VAR_7));
    if(!VAR_7)
        return VAR_1;

    VAR_7->name = FUNC_4(VAR_4->code, VAR_5->name);
    if(!VAR_7->name)
        return VAR_1;

    VAR_7->vars = ((void*)0);
    VAR_7->var_cnt = 0;
    VAR_7->array_cnt = 0;
    VAR_7->code_ctx = VAR_4->code;
    VAR_7->type = VAR_5->type;
    VAR_7->is_public = VAR_5->is_public;

    VAR_7->arg_cnt = 0;
    if(VAR_5->args) {
        arg_decl_t *VAR_9;
        unsigned VAR_10;

        for(VAR_9 = VAR_5->args; VAR_9; VAR_9 = VAR_9->next)
            VAR_7->arg_cnt++;

        VAR_7->args = FUNC_3(VAR_4->code, VAR_7->arg_cnt * sizeof(arg_desc_t));
        if(!VAR_7->args)
            return VAR_1;

        for(VAR_10 = 0, VAR_9 = VAR_5->args; VAR_9; VAR_9 = VAR_9->next, VAR_10++) {
            VAR_7->args[VAR_10].name = FUNC_4(VAR_4->code, VAR_9->name);
            if(!VAR_7->args[VAR_10].name)
                return VAR_1;
            VAR_7->args[VAR_10].by_ref = VAR_9->by_ref;
        }
    }else {
        VAR_7->args = ((void*)0);
    }

    VAR_8 = FUNC_2(VAR_4, VAR_5->body, VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    *VAR_6 = VAR_7;
    return VAR_3;
}
