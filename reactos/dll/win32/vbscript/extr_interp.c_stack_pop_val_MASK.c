
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int store; int * v; scalar_t__ owned; } ;
typedef TYPE_1__ variant_val_t ;
struct TYPE_8__ {int script; } ;
typedef TYPE_2__ exec_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_6(exec_ctx_t *VAR_3, variant_val_t *VAR_4)
{
    FUNC_5(VAR_3, VAR_4);

    if(FUNC_3(VAR_4->v) == VAR_2) {
        HRESULT VAR_5;

        VAR_5 = FUNC_4(VAR_3->script, FUNC_2(VAR_4->v), &VAR_4->store);
        if(VAR_4->owned)
            FUNC_1(FUNC_2(VAR_4->v));
        if(FUNC_0(VAR_5))
            return VAR_5;

        VAR_4->owned = VAR_1;
        VAR_4->v = &VAR_4->store;
    }

    return VAR_0;
}
