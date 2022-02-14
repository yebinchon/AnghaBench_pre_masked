
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PBYTE ;
typedef int DWORD ;



__attribute__((used)) static inline DWORD FUNC_0(DWORD VAR_0)
{
    DWORD VAR_1;
    PBYTE VAR_2 = (PBYTE)&VAR_1;
    VAR_2[0] = VAR_0 ; VAR_2[1] = VAR_0 >> 8;
    VAR_2[2] = VAR_0 >> 16; VAR_2[3] = VAR_0 >> 24;
    return VAR_1;
}
