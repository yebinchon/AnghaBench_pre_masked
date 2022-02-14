
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * stack; TYPE_3__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_12__ {TYPE_1__* base_scope; } ;
typedef TYPE_3__ call_frame_t ;
struct TYPE_10__ {int frame; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int const,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*,int const) ;
 size_t FUNC_7 (TYPE_3__*,int const) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_0)
{
    const int VAR_1 = FUNC_3(VAR_0, 0);
    call_frame_t *VAR_2 = VAR_0->call_ctx;
    jsval_t VAR_3;
    HRESULT VAR_4;

    FUNC_1("%d: %s\n", VAR_1, FUNC_2(FUNC_6(VAR_2, VAR_1)));

    if(!VAR_2->base_scope || !VAR_2->base_scope->frame)
        return FUNC_4(VAR_0, FUNC_6(VAR_2, VAR_1));

    VAR_4 = FUNC_5(VAR_0->stack[FUNC_7(VAR_2, VAR_1)], &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_8(VAR_0, VAR_3);
}
