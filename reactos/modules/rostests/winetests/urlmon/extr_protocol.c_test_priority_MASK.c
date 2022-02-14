
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IInternetProtocol ;
typedef int IInternetPriority ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(IInternetProtocol *VAR_2)
{
    IInternetPriority *VAR_3;
    LONG VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_4(VAR_2, &VAR_0,
                                            (void**)&VAR_3);
    FUNC_5(VAR_5 == VAR_1, "QueryInterface(IID_IInternetPriority) failed: %08x\n", VAR_5);
    if(FUNC_0(VAR_5))
        return;

    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    FUNC_5(VAR_5 == VAR_1, "GetPriority failed: %08x\n", VAR_5);
    FUNC_5(VAR_4 == 0, "pr=%d, expected 0\n", VAR_4);

    VAR_5 = FUNC_3(VAR_3, 1);
    FUNC_5(VAR_5 == VAR_1, "SetPriority failed: %08x\n", VAR_5);

    VAR_5 = FUNC_1(VAR_3, &VAR_4);
    FUNC_5(VAR_5 == VAR_1, "GetPriority failed: %08x\n", VAR_5);
    FUNC_5(VAR_4 == 1, "pr=%d, expected 1\n", VAR_4);

    FUNC_2(VAR_3);
}
