
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
typedef size_t UINT ;
struct TYPE_3__ {size_t cArgs; size_t cNamedArgs; size_t* rgdispidNamedArgs; int * rgvarg; } ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,size_t,size_t) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_2(
        DISPPARAMS *VAR_1,
        UINT *VAR_2,
        VARIANT *VAR_3)
{

    UINT VAR_4;

    FUNC_0("position=%d, cArgs=%d, cNamedArgs=%d\n",
          *VAR_2, VAR_1->cArgs, VAR_1->cNamedArgs);
    if (*VAR_2 < VAR_1->cArgs) {

      VAR_4 = VAR_1->cArgs - *VAR_2 - 1;
    } else {

      for (VAR_4=0; VAR_4<VAR_1->cNamedArgs; VAR_4++)
        if (VAR_1->rgdispidNamedArgs[VAR_4] == *VAR_2) break;

      if (VAR_4==VAR_1->cNamedArgs)
        return VAR_0;
    }
    *VAR_2 = VAR_4;
    return FUNC_1(VAR_3,
                        &VAR_1->rgvarg[VAR_4]);
}
