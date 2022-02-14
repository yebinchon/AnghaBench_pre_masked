
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int WCHAR ;
typedef int VOID ;
typedef int * PWSTR ;
typedef int LPWSTR ;
typedef char* DWORD ;


 int FUNC_0 (int ,char*,int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,...) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,char*,char*) ;

VOID
FUNC_4(
    DWORD VAR_11)
{
    WCHAR VAR_12[16];
    PWSTR VAR_13;
    PWSTR VAR_14[2] = {((void*)0), ((void*)0)};

    if (VAR_11 >= VAR_8 && VAR_11 <= VAR_7)
    {
        FUNC_1(VAR_1 | VAR_3 |
                       VAR_5,
                       VAR_10,
                       VAR_11,
                       VAR_6,
                       (LPWSTR)&VAR_13,
                       0,
                       ((void*)0));
        if (VAR_13)
        {
            FUNC_0(VAR_9, L"%s\n", VAR_13);
            FUNC_2(VAR_13);
            VAR_13 = ((void*)0);
        }
    }
    else
    {
        FUNC_1(VAR_1 | VAR_4 |
                       VAR_5,
                       ((void*)0),
                       VAR_11,
                       VAR_6,
                       (LPWSTR)&VAR_13,
                       0,
                       ((void*)0));
        if (VAR_13)
        {
            FUNC_0(VAR_9, L"%s\n", VAR_13);
            FUNC_2(VAR_13);
            VAR_13 = ((void*)0);
        }
    }

    if (VAR_11 != VAR_0)
    {

        FUNC_3(VAR_12, L"%lu", VAR_11);
        VAR_14[0] = VAR_12;


        FUNC_1(VAR_1 | VAR_3 |
                       VAR_2,
                       VAR_10,
                       3514,
                       VAR_6,
                       (LPWSTR)&VAR_13,
                       0,
                       (va_list *)VAR_14);
        if (VAR_13)
        {
            FUNC_0(VAR_9, L"%s\n", VAR_13);
            FUNC_2(VAR_13);
            VAR_13 = ((void*)0);
        }
    }
}
