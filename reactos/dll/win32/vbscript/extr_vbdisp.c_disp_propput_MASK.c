
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lcid; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int WORD ;
typedef int ULONG ;
struct TYPE_7__ {int member_0; } ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_2__ EXCEPINFO ;
typedef int DISPPARAMS ;
typedef int DISPID ;


 int FUNC_0 (int *,int ,int ,int ,int *,int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int *,int *,TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

HRESULT FUNC_6(script_ctx_t *VAR_2, IDispatch *VAR_3, DISPID VAR_4, WORD VAR_5, DISPPARAMS *VAR_6)
{
    IDispatchEx *VAR_7;
    EXCEPINFO VAR_8 = {0};
    HRESULT VAR_9;

    VAR_9 = FUNC_3(VAR_3, &VAR_0, (void**)&VAR_7);
    if(FUNC_4(VAR_9)) {
        VAR_9 = FUNC_0(VAR_7, VAR_4, VAR_2->lcid, VAR_5, VAR_6, ((void*)0), &VAR_8, ((void*)0) );
        FUNC_1(VAR_7);
    }else {
        ULONG VAR_10 = 0;

        FUNC_5("using IDispatch\n");
        VAR_9 = FUNC_2(VAR_3, VAR_4, &VAR_1, VAR_2->lcid, VAR_5, VAR_6, ((void*)0), &VAR_8, &VAR_10);
    }

    return VAR_9;
}
