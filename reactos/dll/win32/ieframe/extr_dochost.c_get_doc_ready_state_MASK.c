
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_6__ {int member_3; int member_2; int * member_1; int * member_0; } ;
struct TYPE_5__ {int document; } ;
typedef int READYSTATE ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int EXCEPINFO ;
typedef TYPE_1__ DocHost ;
typedef TYPE_2__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ,int ,TYPE_2__*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,void**) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_8(DocHost *VAR_8, READYSTATE *VAR_9)
{
    DISPPARAMS VAR_10 = {((void*)0),((void*)0),0,0};
    IDispatch *VAR_11;
    EXCEPINFO VAR_12;
    VARIANT VAR_13;
    HRESULT VAR_14;

    VAR_14 = FUNC_3(VAR_8->document, &VAR_3, (void**)&VAR_11);
    if(FUNC_0(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_1(VAR_11, VAR_1, &VAR_4, VAR_5, VAR_0,
            &VAR_10, &VAR_13, &VAR_12, ((void*)0));
    FUNC_2(VAR_11);
    if(FUNC_0(VAR_14)) {
        FUNC_7("Invoke(DISPID_READYSTATE failed: %08x\n", VAR_14);
        return VAR_14;
    }

    if(FUNC_5(&VAR_13) != VAR_7) {
        FUNC_7("V_VT(var) = %d\n", FUNC_5(&VAR_13));
        FUNC_6(&VAR_13);
        return VAR_2;
    }

    *VAR_9 = FUNC_4(&VAR_13);
    return VAR_6;
}
