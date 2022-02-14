
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PBYTE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;



__attribute__((used)) static
BOOL
FUNC_0(
    PBYTE VAR_0,
    DWORD VAR_1)
{
    DWORD VAR_2 = VAR_1 / 8;
    BYTE VAR_3 = 1 << (VAR_1 & 7);

    return ((VAR_0[VAR_2] & VAR_3) != 0);
}
