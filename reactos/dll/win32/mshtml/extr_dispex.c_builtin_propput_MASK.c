
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t tid; int prop_vt; int put_vtbl_off; } ;
typedef TYPE_1__ func_info_t ;
typedef int VARIANT ;
struct TYPE_9__ {int cArgs; int cNamedArgs; scalar_t__* rgdispidNamedArgs; int * rgvarg; } ;
struct TYPE_8__ {int outer; } ;
typedef int IUnknown ;
typedef int IServiceProvider ;
typedef int HRESULT ;
typedef TYPE_2__ DispatchEx ;
typedef TYPE_3__ DISPPARAMS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int * VAR_6 ;

__attribute__((used)) static HRESULT FUNC_8(DispatchEx *VAR_7, func_info_t *VAR_8, DISPPARAMS *VAR_9, IServiceProvider *VAR_10)
{
    VARIANT *VAR_11, VAR_12;
    IUnknown *VAR_13;
    HRESULT VAR_14;

    if(VAR_9->cArgs != 1 || (VAR_9->cNamedArgs == 1 && *VAR_9->rgdispidNamedArgs != VAR_1)
            || VAR_9->cNamedArgs > 1) {
        FUNC_1("invalid args\n");
        return VAR_3;
    }

    if(!VAR_8->put_vtbl_off) {
        FUNC_1("No setter\n");
        return VAR_2;
    }

    VAR_11 = VAR_9->rgvarg;
    if(VAR_8->prop_vt != VAR_5 && FUNC_5(VAR_11) != VAR_8->prop_vt) {
        VAR_14 = FUNC_7(&VAR_12, VAR_11, VAR_8->prop_vt, VAR_10);
        if(FUNC_0(VAR_14))
            return VAR_14;
        VAR_11 = &VAR_12;
    }

    VAR_14 = FUNC_2(VAR_7->outer, VAR_6[VAR_8->tid], (void**)&VAR_13);
    if(FUNC_4(VAR_14)) {
        switch(VAR_8->prop_vt) {




        VAR_0;

        default:
            FUNC_1("Unimplemented vt %d\n", VAR_8->prop_vt);
            VAR_14 = VAR_4;
        }

        FUNC_3(VAR_13);
    }

    if(VAR_11 == &VAR_12)
        FUNC_6(VAR_11);
    return VAR_14;
}
