
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VOID ;
typedef int PCONSRV_CONSOLE ;
typedef int* LPWSTR ;
typedef int HDROP ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int*,scalar_t__,char*) ;
 int * FUNC_5 (int*,int) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static VOID
FUNC_7(PCONSRV_CONSOLE VAR_1, HDROP VAR_2)
{
    LPWSTR VAR_3;
    WCHAR VAR_4[VAR_0 + 2];

    VAR_4[0] = L'"';

    FUNC_2(VAR_2, 0, &VAR_4[1], FUNC_0(VAR_4) - 1);
    FUNC_1(VAR_2);

    if (FUNC_5(&VAR_4[1], L' ') != ((void*)0))
    {
        FUNC_4(VAR_4, FUNC_0(VAR_4), L"\"");
        VAR_3 = VAR_4;
    }
    else
    {
        VAR_3 = &VAR_4[1];
    }

    FUNC_3(VAR_1, VAR_3, FUNC_6(VAR_3));
}
