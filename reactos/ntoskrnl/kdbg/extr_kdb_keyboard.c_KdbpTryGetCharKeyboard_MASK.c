
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte_t ;
typedef scalar_t__ ULONG ;
typedef int* PULONG ;
typedef char CHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char** VAR_1 ;

CHAR
FUNC_2(PULONG VAR_2, ULONG VAR_3)
{
    static byte_t VAR_4 = 0;
    static byte_t VAR_5 = 0;
    char VAR_6;
    BOOLEAN VAR_7 = (VAR_3 == 0);

    while (VAR_7 || VAR_3-- > 0)
    {
        while (FUNC_1() & VAR_0)
        {
            byte_t VAR_8;

            VAR_8 = FUNC_0();


            if (((VAR_8 & 0x7F) == 42) || ((VAR_8 & 0x7F) == 54))
            {
                VAR_5 = !(VAR_8 & 0x80);
                continue;
            }


            if (VAR_8 & 0x80)
            {
                VAR_4 = 0;
            }
            else if (VAR_4 != VAR_8)
            {

                VAR_4 = VAR_8;
                VAR_6 = VAR_1[VAR_5][VAR_8];
                *VAR_2 = VAR_8;

                if (VAR_6 > 0)
                    return VAR_6;
            }
        }
    }

    return -1;
}
