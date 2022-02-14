
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static DWORD FUNC_5(HKEY VAR_3)
{
    WCHAR VAR_4[VAR_2];
    DWORD VAR_5;

    while (!(VAR_5 = FUNC_2(VAR_3, 0, VAR_4, FUNC_4(VAR_4))))
    {
        HKEY VAR_6;
        if (!(VAR_5 = FUNC_3(VAR_3, VAR_4, 0, VAR_1, &VAR_6)))
        {
            VAR_5 = FUNC_5(VAR_6);
        }
        if (VAR_5)
            break;
    }
    if (VAR_5 == VAR_0)
    {
        FUNC_1(VAR_3, L"");
        VAR_5 = 0;
    }
    FUNC_0(VAR_3);
    return VAR_5;
}
