
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int DWORD ;



WORD
FUNC_0(DWORD VAR_0, void *VAR_1, ULONG VAR_2)
{
    WORD *VAR_3 = VAR_1;
    DWORD VAR_4;
    DWORD VAR_5 = VAR_0;

    for (VAR_4 = 0; VAR_4 < (VAR_2 + 1) / sizeof(WORD); VAR_4++)
    {
        VAR_5 += VAR_3[VAR_4];
        VAR_5 = (VAR_5 + (VAR_5 >> 16)) & 0xffff;
    }

    return VAR_5 ;
}
