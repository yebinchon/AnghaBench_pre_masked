
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(PCHAR VAR_3, ULONG VAR_4)
{
    ULONG VAR_5;



    for (VAR_5=0; VAR_5<VAR_4; VAR_5++)
    {
        if ((VAR_3[VAR_5] == ' ') ||
            (VAR_3[VAR_5] == '\t'))
        {
            continue;
        }
        else if (VAR_3[VAR_5] == VAR_1)
        {
            return VAR_2;
        }
        else
        {
            break;
        }
    }

    return VAR_0;
}
