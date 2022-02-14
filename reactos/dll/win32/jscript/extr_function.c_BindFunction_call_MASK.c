
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_7__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {unsigned int argc; int this; TYPE_3__* target; int * args; } ;
struct TYPE_5__ {int (* call ) (int *,TYPE_3__*,int ,unsigned int,unsigned int,int *,int *) ;} ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int FunctionInstance ;
typedef TYPE_2__ BindFunction ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int *,TYPE_3__*,int ,unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_1, FunctionInstance *VAR_2, IDispatch *VAR_3, unsigned VAR_4,
         unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    BindFunction *VAR_8 = (BindFunction*)VAR_2;
    jsval_t *VAR_9 = ((void*)0);
    unsigned VAR_10;
    HRESULT VAR_11;

    FUNC_0("%p\n", VAR_8);

    VAR_10 = VAR_8->argc + VAR_5;
    if(VAR_10) {
        VAR_9 = FUNC_1(VAR_8->argc * sizeof(*VAR_8->args));
        if(!VAR_9)
            return VAR_0;

        if(VAR_8->argc)
            FUNC_3(VAR_9, VAR_8->args, VAR_8->argc * sizeof(*VAR_9));
        if(VAR_5)
            FUNC_3(VAR_9 + VAR_8->argc, VAR_6, VAR_5 * sizeof(*VAR_9));
    }

    VAR_11 = VAR_8->target->vtbl->call(VAR_1, VAR_8->target, VAR_8->this, VAR_4, VAR_10, VAR_9, VAR_7);

    FUNC_2(VAR_9);
    return VAR_11;
}
