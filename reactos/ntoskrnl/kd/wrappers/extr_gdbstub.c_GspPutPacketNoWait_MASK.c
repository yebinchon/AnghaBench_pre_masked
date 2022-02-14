
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int* PCHAR ;
typedef size_t LONG ;
typedef int CHAR ;


 int FUNC_0 (char) ;
 char* VAR_0 ;

VOID
FUNC_1(PCHAR VAR_1)
{
    CHAR VAR_2;
    LONG VAR_3;
    CHAR VAR_4;


    FUNC_0('$');
    VAR_2 = 0;
    VAR_3 = 0;

    while ((VAR_4 = VAR_1[VAR_3]))
    {
        FUNC_0(VAR_4);
        VAR_2 += VAR_4;
        VAR_3 += 1;
    }

    FUNC_0('#');
    FUNC_0(VAR_0[(VAR_2 >> 4) & 0xf]);
    FUNC_0(VAR_0[VAR_2 & 0xf]);
}
