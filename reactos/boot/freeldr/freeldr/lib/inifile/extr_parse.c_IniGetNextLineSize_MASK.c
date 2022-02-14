
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef char* PCHAR ;



ULONG FUNC_0(PCHAR VAR_0, ULONG VAR_1, ULONG VAR_2)
{
    ULONG VAR_3 = 0;



    for (; (VAR_2 < VAR_1); VAR_2++)
    {

        VAR_3++;


        if (VAR_0[VAR_2] == '\n')
        {
            break;
        }
    }


    VAR_3++;


    return VAR_3;
}
