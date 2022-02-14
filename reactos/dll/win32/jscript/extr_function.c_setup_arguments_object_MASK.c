
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int object_constr; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_15__ {int * arguments_obj; TYPE_2__* base_scope; int argc; int function_instance; } ;
typedef TYPE_4__ call_frame_t ;
typedef char WCHAR ;
struct TYPE_17__ {int jsdisp; TYPE_5__* function; int argc; TYPE_4__* frame; } ;
struct TYPE_12__ {int dispex; } ;
struct TYPE_16__ {TYPE_1__ function; } ;
struct TYPE_13__ {int jsobj; } ;
typedef TYPE_5__ InterpretedFunction ;
typedef int HRESULT ;
typedef TYPE_6__ ArgumentsInstance ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *,TYPE_3__*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char const*,int,int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 char const* VAR_6 ;

HRESULT FUNC_12(script_ctx_t *VAR_7, call_frame_t *VAR_8)
{
    ArgumentsInstance *VAR_9;
    HRESULT VAR_10;

    static const WCHAR VAR_11[] = {'c','a','l','l','e','e',0};

    VAR_9 = FUNC_3(sizeof(*VAR_9));
    if(!VAR_9)
        return VAR_1;

    VAR_10 = FUNC_5(&VAR_9->jsdisp, VAR_7, &VAR_0, VAR_7->object_constr);
    if(FUNC_0(VAR_10)) {
        FUNC_4(VAR_9);
        return VAR_10;
    }

    VAR_9->function = (InterpretedFunction*)FUNC_2(FUNC_6(VAR_8->function_instance));
    VAR_9->argc = VAR_8->argc;
    VAR_9->frame = VAR_8;

    VAR_10 = FUNC_7(&VAR_9->jsdisp, VAR_6, VAR_3 | VAR_2,
                                       FUNC_10(VAR_9->argc));
    if(FUNC_1(VAR_10))
        VAR_10 = FUNC_7(&VAR_9->jsdisp, VAR_11, VAR_3 | VAR_2,
                                           FUNC_11(&VAR_9->function->function.dispex));
    if(FUNC_1(VAR_10))
        VAR_10 = FUNC_8(VAR_8->base_scope->jsobj, VAR_5, VAR_3, FUNC_11(&VAR_9->jsdisp));
    if(FUNC_0(VAR_10)) {
        FUNC_9(&VAR_9->jsdisp);
        return VAR_10;
    }

    VAR_8->arguments_obj = &VAR_9->jsdisp;
    return VAR_4;
}
