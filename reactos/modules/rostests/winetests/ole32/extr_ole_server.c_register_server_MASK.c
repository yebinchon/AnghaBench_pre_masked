
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9(const char *VAR_8, BOOL VAR_9)
{
    static const WCHAR VAR_10[] = {'C','L','S','I','D','\\',0};
    DWORD VAR_11;
    HKEY VAR_12;
    WCHAR VAR_13[39 + 6];
    char VAR_14[VAR_6];

    FUNC_5(VAR_14, VAR_8);
    FUNC_4(VAR_14, " ole_server");

    FUNC_6(VAR_13, VAR_10);
    FUNC_3(&VAR_0, VAR_13 + 6, 39);

    VAR_11 = FUNC_1(VAR_2, VAR_13, 0, ((void*)0), 0,
                          VAR_4 | VAR_5 | VAR_3, ((void*)0), &VAR_12, ((void*)0));
    if (VAR_11 == VAR_1)
    {
        VAR_11 = FUNC_2(VAR_12, "LocalServer32", VAR_7, VAR_14, FUNC_8(VAR_14));
        FUNC_7(VAR_11 == VAR_1, "RegSetValue error %u\n", VAR_11);

        if (VAR_9)
        {
            VAR_11 = FUNC_2(VAR_12, "InprocHandler32", VAR_7, "ole32.dll", 9);
            FUNC_7(VAR_11 == VAR_1, "RegSetValue error %u\n", VAR_11);
        }

        FUNC_0(VAR_12);
    }

    return VAR_11 == VAR_1;
}
