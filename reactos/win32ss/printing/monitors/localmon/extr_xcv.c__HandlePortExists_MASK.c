
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef int PCWSTR ;
typedef scalar_t__ PBYTE ;
typedef int * PBOOL ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static DWORD
FUNC_2(PBYTE VAR_2, PBYTE VAR_3, DWORD VAR_4, PDWORD VAR_5)
{

    if (!VAR_2 || !VAR_3 || !VAR_5)
        return VAR_1;

    *VAR_5 = sizeof(BOOL);


    if (VAR_4 < *VAR_5)
        return VAR_0;


    *(PBOOL)VAR_3 = FUNC_0((PCWSTR)VAR_2);
    return FUNC_1();
}
