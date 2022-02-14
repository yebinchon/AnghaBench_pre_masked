
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef scalar_t__ BYTE ;



__attribute__((used)) static void FUNC_0 (void* VAR_0, U64 VAR_1)
{
    BYTE* const VAR_2 = (BYTE*)VAR_0;
    VAR_2[0] = (BYTE)VAR_1;
    VAR_2[1] = (BYTE)(VAR_1 >> 8);
    VAR_2[2] = (BYTE)(VAR_1 >> 16);
    VAR_2[3] = (BYTE)(VAR_1 >> 24);
    VAR_2[4] = (BYTE)(VAR_1 >> 32);
    VAR_2[5] = (BYTE)(VAR_1 >> 40);
    VAR_2[6] = (BYTE)(VAR_1 >> 48);
    VAR_2[7] = (BYTE)(VAR_1 >> 56);
}
