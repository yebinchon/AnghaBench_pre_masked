
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const DWORD ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(DWORD VAR_0)
{
    const DWORD VAR_1 = 0x800F0000L;
    const DWORD VAR_2 = 0xFFFF0000L;

    return (((VAR_0 & VAR_2) ^ VAR_1) == 0);
}
