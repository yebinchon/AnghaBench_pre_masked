
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONGLONG ;
typedef int ULONG64 ;
typedef int UCHAR ;
typedef int* PUCHAR ;
typedef int LONGLONG ;
typedef int LONG64 ;
typedef int CHAR ;



PUCHAR FUNC_0(PUCHAR VAR_0, LONGLONG *VAR_1, ULONGLONG *VAR_2)
{
    UCHAR VAR_3;
    UCHAR VAR_4;
    CHAR VAR_5;


    VAR_3 = (*VAR_0 >> 4) & 0xF;

    VAR_4 = *VAR_0 & 0xF;


    *VAR_1 = 0;
    *VAR_2 = 0;


    VAR_0++;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        *VAR_2 += ((ULONG64)*VAR_0) << (VAR_5 * 8);

        VAR_0++;
    }


    if (VAR_3 == 0)
    {
        *VAR_1 = -1;
    }

    else
    {

        for (VAR_5 = 0; VAR_5 < VAR_3 - 1; VAR_5++)
        {
            *VAR_1 += ((ULONG64)*VAR_0) << (VAR_5 * 8);

            VAR_0++;
        }

        *VAR_1 = ((LONG64)(CHAR)(*(VAR_0++)) << (VAR_5 * 8)) + *VAR_1;
    }


    return VAR_0;
}
