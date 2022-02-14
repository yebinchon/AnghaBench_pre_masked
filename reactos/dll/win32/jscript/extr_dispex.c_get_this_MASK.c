
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cNamedArgs; scalar_t__* rgdispidNamedArgs; scalar_t__ rgvarg; } ;
typedef int IDispatch ;
typedef size_t DWORD ;
typedef TYPE_1__ DISPPARAMS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static IDispatch *FUNC_4(DISPPARAMS *VAR_2)
{
    DWORD VAR_3;

    for(VAR_3=0; VAR_3 < VAR_2->cNamedArgs; VAR_3++) {
        if(VAR_2->rgdispidNamedArgs[VAR_3] == VAR_0) {
            if(FUNC_2(VAR_2->rgvarg+VAR_3) == VAR_1)
                return FUNC_1(VAR_2->rgvarg+VAR_3);

            FUNC_3("This is not VT_DISPATCH\n");
            return ((void*)0);
        }
    }

    FUNC_0("no this passed\n");
    return ((void*)0);
}
