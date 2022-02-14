
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef char* PCHAR ;



ULONG FUNC_0(PCHAR VAR_0, ULONG VAR_1, PCHAR VAR_2, ULONG VAR_3, ULONG VAR_4)
{
    ULONG VAR_5;



    for (VAR_5=0; (VAR_4 < VAR_1); VAR_4++)
    {


        if (VAR_5 < (VAR_3 - 1))
        {
            VAR_2[VAR_5++] = VAR_0[VAR_4];
        }


        if (VAR_0[VAR_4] == '\n')
        {
            VAR_4++;
            break;
        }
    }


    VAR_2[VAR_5] = '\0';


    while(VAR_5 && (VAR_2[--VAR_5] == '\n' || VAR_2[VAR_5] == '\r'))
        VAR_2[VAR_5] = '\0';


    return VAR_4;
}
