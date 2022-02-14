
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PTOKEN_GROUPS ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int const,int ,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static PTOKEN_GROUPS
FUNC_5(const HANDLE VAR_3)
{
    PTOKEN_GROUPS VAR_4 = ((void*)0);
    DWORD VAR_5 = 0;

    if (!FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5, &VAR_5)
        && FUNC_0() == VAR_0)
    {
        VAR_4 = FUNC_4(VAR_5);
    }
    if (!VAR_4)
    {
        FUNC_2(VAR_1, L"GetTokenGroups");
    }
    else if (!FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5, &VAR_5))
    {
        FUNC_2(VAR_1, L"GetTokenInformation");
        FUNC_3(VAR_4);
    }
    return VAR_4;
}
