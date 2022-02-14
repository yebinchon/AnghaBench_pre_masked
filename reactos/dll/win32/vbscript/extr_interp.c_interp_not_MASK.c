
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v; } ;
typedef TYPE_1__ variant_val_t ;
typedef int exec_ctx_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_6(exec_ctx_t *VAR_0)
{
    variant_val_t VAR_1;
    VARIANT VAR_2;
    HRESULT VAR_3;

    FUNC_1("\n");

    VAR_3 = FUNC_4(VAR_0, &VAR_1);
    if(FUNC_0(VAR_3))
        return VAR_3;

    VAR_3 = FUNC_2(VAR_1.v, &VAR_2);
    FUNC_3(&VAR_1);
    if(FUNC_0(VAR_3))
        return VAR_3;

    return FUNC_5(VAR_0, &VAR_2);
}
