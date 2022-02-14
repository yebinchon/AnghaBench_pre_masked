
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * stack; } ;
typedef TYPE_4__ script_ctx_t ;
struct TYPE_16__ {scalar_t__ variable_obj; TYPE_3__* function; TYPE_1__* base_scope; int arguments_obj; } ;
typedef TYPE_5__ call_frame_t ;
struct TYPE_14__ {unsigned int locals_cnt; TYPE_2__* locals; } ;
struct TYPE_13__ {int ref; int name; } ;
struct TYPE_12__ {scalar_t__ jsobj; TYPE_5__* frame; } ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_5__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 size_t FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_1, call_frame_t *VAR_2, BOOL VAR_3)
{
    unsigned VAR_4;
    HRESULT VAR_5;

    if(!VAR_2->base_scope || !VAR_2->base_scope->frame)
        return VAR_0;

    FUNC_1("detaching %p\n", VAR_2);

    FUNC_2(VAR_2 == VAR_2->base_scope->frame);
    FUNC_2(VAR_2->variable_obj == VAR_2->base_scope->jsobj);

    if(!VAR_3 && !VAR_2->arguments_obj) {
        VAR_5 = FUNC_5(VAR_1, VAR_2);
        if(FUNC_0(VAR_5))
            return VAR_5;
    }

    VAR_2->base_scope->frame = ((void*)0);

    for(VAR_4 = 0; VAR_4 < VAR_2->function->locals_cnt; VAR_4++) {
        VAR_5 = FUNC_3(VAR_2->variable_obj, VAR_2->function->locals[VAR_4].name,
                                   VAR_1->stack[FUNC_4(VAR_2, VAR_2->function->locals[VAR_4].ref)]);
        if(FUNC_0(VAR_5))
            return VAR_5;
    }

    return VAR_0;
}
