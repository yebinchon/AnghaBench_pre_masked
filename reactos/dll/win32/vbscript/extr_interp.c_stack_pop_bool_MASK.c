
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v; } ;
typedef TYPE_1__ variant_val_t ;
typedef int exec_ctx_t ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(exec_ctx_t *VAR_3, BOOL *VAR_4)
{
    variant_val_t VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_8(VAR_3, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    switch (FUNC_5(VAR_5.v))
    {
    case 131:
        *VAR_4 = FUNC_2(VAR_5.v);
        break;
    case 128:
        *VAR_4 = VAR_1;
        break;
    case 130:
        *VAR_4 = FUNC_3(VAR_5.v);
        break;
    case 129:
        *VAR_4 = FUNC_4(VAR_5.v);
        break;
    default:
        FUNC_1("unsupported for %s\n", FUNC_6(VAR_5.v));
        FUNC_7(&VAR_5);
        return VAR_0;
    }
    return VAR_2;
}
