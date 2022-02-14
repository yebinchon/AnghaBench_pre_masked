
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IInternetSession ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int **,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int *,char const*,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
    IInternetSession *VAR_3;
    HRESULT VAR_4;

    static const WCHAR VAR_5[] = {'w','i','n','e','t','e','s','t',0};

    VAR_4 = FUNC_0(0, &VAR_3, 0);
    FUNC_4(VAR_4 == VAR_1, "CoInternetGetSession failed: %08x\n", VAR_4);
    if(FUNC_1(VAR_4))
        return;

    VAR_4 = FUNC_2(VAR_3, &VAR_2, &VAR_0,
            VAR_5, 0, ((void*)0), 0);
    FUNC_4(VAR_4 == VAR_1, "RegisterNameSpace failed: %08x\n", VAR_4);

    FUNC_3(VAR_3);
}
