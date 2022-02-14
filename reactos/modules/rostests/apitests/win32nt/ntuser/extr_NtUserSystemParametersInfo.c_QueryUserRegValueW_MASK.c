
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PVOID ;
typedef int PCWSTR ;
typedef int LPDWORD ;
typedef int LPBYTE ;
typedef int LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ) ;

LONG
FUNC_3(PCWSTR VAR_2, PCWSTR VAR_3, PVOID VAR_4, LPDWORD VAR_5, LPDWORD VAR_6)
{
    HKEY VAR_7;
    LONG VAR_8;

    FUNC_1(VAR_0, VAR_2, 0, VAR_1, &VAR_7);
    VAR_8 = FUNC_2(VAR_7, VAR_3, ((void*)0), VAR_6, (LPBYTE)VAR_4, VAR_5);
    FUNC_0(VAR_7);
    return VAR_8;
}
