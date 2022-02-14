
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCWSTR ;
typedef int* PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int * FUNC_0 (int *,scalar_t__*) ;

__attribute__((used)) static PCWSTR
FUNC_1(PCWSTR VAR_0, PBYTE VAR_1)
{
    DWORD VAR_2 = 0;

    VAR_0 = FUNC_0(VAR_0, &VAR_2);
    if (!VAR_0) return ((void*)0);

    *VAR_1 = (BYTE)VAR_2;
    if (*VAR_1 < 5 || *VAR_1 > 8)
        return ((void*)0);

    return VAR_0;
}
