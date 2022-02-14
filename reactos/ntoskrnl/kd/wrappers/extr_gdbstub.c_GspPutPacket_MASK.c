
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int* PCHAR ;
typedef size_t LONG ;
typedef int CHAR ;


 char FUNC_0 () ;
 int FUNC_1 (char) ;
 char* VAR_0 ;

VOID
FUNC_2(PCHAR VAR_1)
{
    CHAR VAR_2;
    LONG VAR_3;
    CHAR VAR_4;


    do
    {
        FUNC_1('$');
        VAR_2 = 0;
        VAR_3 = 0;

        while ((VAR_4 = VAR_1[VAR_3]))
        {
            FUNC_1(VAR_4);
            VAR_2 += VAR_4;
            VAR_3 += 1;
        }

        FUNC_1('#');
        FUNC_1(VAR_0[(VAR_2 >> 4) & 0xf]);
        FUNC_1(VAR_0[VAR_2 & 0xf]);
    }
    while (FUNC_0() != '+');
}
