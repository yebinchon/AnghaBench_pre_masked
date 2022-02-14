
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;



__attribute__((used)) static void FUNC_0 (void* VAR_0, U32 VAR_1)
{
    BYTE* VAR_2 = (BYTE*)VAR_0;
    VAR_2[0] = (BYTE) VAR_1;
    VAR_2[1] = (BYTE)(VAR_1 >> 8);
    VAR_2[2] = (BYTE)(VAR_1 >> 16);
    VAR_2[3] = (BYTE)(VAR_1 >> 24);
}
