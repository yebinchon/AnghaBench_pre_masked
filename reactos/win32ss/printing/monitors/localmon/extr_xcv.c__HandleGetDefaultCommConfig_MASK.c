
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef int PCWSTR ;
typedef scalar_t__ PBYTE ;
typedef int LPCOMMCONFIG ;
typedef int DWORD ;
typedef int COMMCONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 () ;

__attribute__((used)) static DWORD
FUNC_2(PBYTE VAR_3, PBYTE VAR_4, DWORD VAR_5, PDWORD VAR_6)
{

    if (!VAR_3 || !VAR_6)
        return VAR_1;

    *VAR_6 = sizeof(COMMCONFIG);


    if (VAR_5 < *VAR_6)
        return VAR_0;


    if (!FUNC_0((PCWSTR)VAR_3, (LPCOMMCONFIG)VAR_4, VAR_6))
        return FUNC_1();

    return VAR_2;
}
