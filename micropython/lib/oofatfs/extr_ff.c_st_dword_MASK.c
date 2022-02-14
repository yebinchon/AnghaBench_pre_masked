
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef void* BYTE ;



__attribute__((used)) static void FUNC_0 (BYTE* VAR_0, DWORD VAR_1)
{
    *VAR_0++ = (BYTE)VAR_1; VAR_1 >>= 8;
    *VAR_0++ = (BYTE)VAR_1; VAR_1 >>= 8;
    *VAR_0++ = (BYTE)VAR_1; VAR_1 >>= 8;
    *VAR_0++ = (BYTE)VAR_1;
}
