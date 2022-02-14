
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7(exec_ctx_t *VAR_0)
{
    variant_val_t VAR_1, VAR_2;
    VARIANT VAR_3;
    HRESULT VAR_4;

    FUNC_2("\n");

    VAR_4 = FUNC_5(VAR_0, &VAR_1);
    if(FUNC_0(VAR_4))
        return VAR_4;

    VAR_4 = FUNC_5(VAR_0, &VAR_2);
    if(FUNC_1(VAR_4)) {
        VAR_4 = FUNC_3(VAR_2.v, VAR_1.v, &VAR_3);
        FUNC_4(&VAR_2);
    }
    FUNC_4(&VAR_1);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_6(VAR_0, &VAR_3);
}
