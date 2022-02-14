
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int WORD ;
typedef int VARIANT ;
struct TYPE_3__ {unsigned int cNamedArgs; scalar_t__* rgdispidNamedArgs; int * rgvarg; } ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_11, const DISPPARAMS *VAR_12, WORD VAR_13, VARIANT *VAR_14, BOOL *VAR_15)
{
    unsigned VAR_16;

    for(VAR_16=0; VAR_16 < VAR_12->cNamedArgs; VAR_16++) {
        if(VAR_12->rgdispidNamedArgs[VAR_16] == VAR_2)
            break;
    }
    if(VAR_16 == VAR_12->cNamedArgs) {
        FUNC_4("no value to set\n");
        return VAR_4;
    }

    *VAR_14 = VAR_12->rgvarg[VAR_16];
    if(FUNC_3(VAR_14) == (VAR_10|VAR_8))
        *VAR_14 = *FUNC_2(VAR_14);
    *VAR_15 = VAR_5;

    if(FUNC_3(VAR_14) == VAR_9) {
        if(!(VAR_13 & VAR_1)) {
            HRESULT VAR_17;

            VAR_17 = FUNC_6(VAR_11, FUNC_1(VAR_14), VAR_14);
            if(FUNC_0(VAR_17))
                return VAR_17;

            *VAR_15 = VAR_7;
        }
    }else if(!(VAR_13 & VAR_0)) {
        FUNC_4("%s can't be assigned without DISPATCH_PROPERTYPUT flag\n", FUNC_5(VAR_14));
        return VAR_3;
    }

    return VAR_6;
}
