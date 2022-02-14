
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int ) ;

BOOL
FUNC_7(LPCWSTR VAR_4)
{
    WCHAR VAR_5[VAR_1];
    UNICODE_STRING VAR_6;
    NTSTATUS VAR_7 = -1;

    FUNC_5(VAR_5,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
    FUNC_4(VAR_5,
           VAR_4);

    FUNC_1(&VAR_6,
                         VAR_5);

    if (FUNC_3(VAR_3))
    {
        VAR_7 = FUNC_0(&VAR_6);
        if (VAR_7 != VAR_2)
        {
            DWORD VAR_8 = FUNC_2(VAR_7);
            FUNC_6(L"NtUnloadDriver failed [%lu]\n", VAR_8);
        }

        FUNC_3(VAR_0);
    }

    return (VAR_7 == VAR_2);
}
