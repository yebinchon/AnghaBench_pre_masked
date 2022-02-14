
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN FUNC_0(PCHAR VAR_2, ULONG VAR_3)
{
    ULONG VAR_4;


    for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
    {
        if (VAR_2[VAR_4] == '=')
        {
            return VAR_1;
        }
    }

    return VAR_0;
}
