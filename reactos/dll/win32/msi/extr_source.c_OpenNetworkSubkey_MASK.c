
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static UINT FUNC_2(HKEY VAR_0, HKEY *VAR_1, BOOL VAR_2)
{
    UINT VAR_3;
    static const WCHAR VAR_4[] = {'N','e','t',0};

    if (VAR_2)
        VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_1);
    else
        VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_1);

    return VAR_3;
}
