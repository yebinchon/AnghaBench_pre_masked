
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* call_ctx; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_14__ {int off; } ;
struct TYPE_17__ {TYPE_1__ u; int type; } ;
typedef TYPE_4__ exprval_t ;
struct TYPE_18__ {TYPE_2__* base_scope; } ;
typedef TYPE_5__ call_frame_t ;
struct TYPE_15__ {int frame; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int const) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 unsigned int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,unsigned int const) ;
 int FUNC_4 (TYPE_5__*,int const) ;
 int FUNC_5 (TYPE_5__*,int const) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_1)
{
    const int VAR_2 = FUNC_1(VAR_1, 0);
    const unsigned VAR_3 = FUNC_2(VAR_1, 1);
    call_frame_t *VAR_4 = VAR_1->call_ctx;
    exprval_t VAR_5;

    FUNC_0("%d\n", VAR_2);

    if(!VAR_4->base_scope || !VAR_4->base_scope->frame)
        return FUNC_3(VAR_1, FUNC_4(VAR_4, VAR_2), VAR_3);

    VAR_5.type = VAR_0;
    VAR_5.u.off = FUNC_5(VAR_4, VAR_2);
    return FUNC_6(VAR_1, &VAR_5);
}
