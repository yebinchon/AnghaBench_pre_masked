
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PWSTR ;
typedef int PVOID ;
typedef int PFIND_EXE_FILE_CALLBACKW ;
typedef int PCWSTR ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

HANDLE FUNC_3(PCWSTR VAR_0, PCWSTR VAR_1, PWSTR VAR_2, PFIND_EXE_FILE_CALLBACKW VAR_3, PVOID VAR_4)
{
    HANDLE VAR_5 = FUNC_0(VAR_0, 0, 0, ((void*)0), 0, 0, ((void*)0));
    if(VAR_5)
        FUNC_1(VAR_2, VAR_0, (FUNC_2(VAR_0) + 1)*sizeof(WCHAR));

    return VAR_5;
}
