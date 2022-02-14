
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef int PBYTE ;
typedef int DWORD ;


 int FUNC_0 (int ,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static DWORD
FUNC_2(PBYTE VAR_3, DWORD VAR_4, PDWORD VAR_5)
{
    DWORD VAR_6;


    if (!VAR_3 || !VAR_5)
        return VAR_1;

    *VAR_5 = sizeof(DWORD);


    if (VAR_4 < *VAR_5)
        return VAR_0;


    VAR_6 = FUNC_1();
    FUNC_0(VAR_3, &VAR_6, sizeof(DWORD));
    return VAR_2;
}
