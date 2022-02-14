
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef char* PCHAR ;



VOID FUNC_0(PCHAR VAR_0, PCHAR VAR_1, ULONG VAR_2)
{
    ULONG VAR_3;
    ULONG VAR_4;


    for (VAR_3=0; VAR_3<VAR_2; VAR_3++)
    {
        if ((VAR_1[VAR_3] == ' ') ||
            (VAR_1[VAR_3] == '\t'))
        {
            continue;
        }
        else
        {
            break;
        }
    }


    VAR_3++;


    for (VAR_4=0; VAR_3<VAR_2; VAR_3++)
    {
        if ((VAR_1[VAR_3] == ']') ||
            (VAR_1[VAR_3] == '\0'))
        {
            break;
        }


        VAR_0[VAR_4] = VAR_1[VAR_3];
        VAR_4++;
    }


    VAR_0[VAR_4] = '\0';
}
