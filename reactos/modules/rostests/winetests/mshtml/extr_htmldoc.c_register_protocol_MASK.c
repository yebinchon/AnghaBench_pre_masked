
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IInternetSession ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int **,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int *,char const*,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    IInternetSession *VAR_3;
    HRESULT VAR_4;

    static const WCHAR VAR_5[] = {'w','i','n','e','t','e','s','t',0};

    VAR_4 = FUNC_0(0, &VAR_3, 0);
    FUNC_3(VAR_4 == VAR_2, "CoInternetGetSession failed: %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_3, &VAR_0, &VAR_1,
            VAR_5, 0, ((void*)0), 0);
    FUNC_3(VAR_4 == VAR_2, "RegisterNameSpace failed: %08x\n", VAR_4);

    FUNC_2(VAR_3);
}
