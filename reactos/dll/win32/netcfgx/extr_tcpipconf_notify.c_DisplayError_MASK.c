
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTitle ;
typedef int szBuffer ;
typedef int WCHAR ;
typedef int VOID ;
typedef int UINT ;


 scalar_t__ FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int *,int*,int*,int ) ;
 int VAR_0 ;

VOID
FUNC_2(UINT VAR_1, UINT VAR_2, UINT VAR_3)
{
    WCHAR VAR_4[300];
    WCHAR VAR_5[100];

    if (FUNC_0(VAR_0, VAR_1, VAR_4, sizeof(VAR_4)/sizeof(WCHAR)))
        VAR_4[(sizeof(VAR_4)/sizeof(WCHAR))-1] = L'\0';
    else
        VAR_4[0] = L'\0';

    if (FUNC_0(VAR_0, VAR_2, VAR_5, sizeof(VAR_5)/sizeof(WCHAR)))
        VAR_5[(sizeof(VAR_5)/sizeof(WCHAR))-1] = L'\0';
    else
        VAR_5[0] = L'\0';

    FUNC_1(((void*)0), VAR_4, VAR_5, VAR_3);
}
