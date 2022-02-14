
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int TCHAR ;
typedef int * LPCTSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *,int ,int ,int *,int,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char const*,int ,int *) ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(DWORD VAR_4, const char *VAR_5)
{
    TCHAR VAR_6[256];
    LPCTSTR VAR_7;

    if (!VAR_4)
    {
        return;
    }

    VAR_7 = FUNC_2("Unknown Win32 Error");

    if (FUNC_0(VAR_2 | VAR_1
                      | VAR_0,
                      ((void*)0), VAR_4, 0, VAR_6, sizeof(VAR_6), ((void*)0)))
    {
        VAR_7 = VAR_6;
    }




    FUNC_1(VAR_3, "%s (status = %lu): %s", VAR_5, VAR_4, VAR_7);


}
