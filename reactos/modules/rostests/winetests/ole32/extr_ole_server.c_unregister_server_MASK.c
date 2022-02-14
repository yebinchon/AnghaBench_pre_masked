
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_4[] = {'C','L','S','I','D','\\',0};
    DWORD VAR_5;
    HKEY VAR_6;
    WCHAR VAR_7[39 + 6];

    FUNC_4(VAR_7, VAR_4);
    FUNC_3(&VAR_0, VAR_7 + 6, 39);

    VAR_5 = FUNC_1(VAR_3, VAR_7, 0, ((void*)0), 0,
                          VAR_1, ((void*)0), &VAR_6, ((void*)0));
    if (VAR_5 == VAR_2)
    {
        VAR_5 = FUNC_2(VAR_6, "InprocHandler32");
        FUNC_5(VAR_5 == VAR_2, "RegDeleteKey error %u\n", VAR_5);
        VAR_5 = FUNC_2(VAR_6, "LocalServer32");
        FUNC_5(VAR_5 == VAR_2, "RegDeleteKey error %u\n", VAR_5);
        VAR_5 = FUNC_2(VAR_6, "");
        FUNC_5(VAR_5 == VAR_2, "RegDeleteKey error %u\n", VAR_5);
        FUNC_0(VAR_6);
    }
}
