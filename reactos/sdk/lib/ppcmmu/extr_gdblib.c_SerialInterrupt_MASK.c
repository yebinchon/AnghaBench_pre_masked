
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_trap_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (char) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_8 ;

int FUNC_6(int VAR_9, ppc_trap_frame_t *VAR_10)
{
    int VAR_11;

    if (!FUNC_4(VAR_8)) return 0;

    VAR_7 = VAR_9;
    VAR_6 = VAR_10;

    do
    {
        VAR_11 = FUNC_2();

        if (VAR_11 == 3)
        {
            VAR_2 = 0;
            FUNC_1(3);
        }
        else if (VAR_11 == '+')
        {

        }
        else if (VAR_11 == '$')
        {
            VAR_3 = 0;
            VAR_5 = 0;
            VAR_1 = 0;
            VAR_0 = 0;
        }
        else if (VAR_11 == '#' && VAR_5 == 0)
        {
            VAR_5 = 2;
        }
        else if (VAR_5 == 0)
        {
            VAR_1 += VAR_11;
            VAR_4[VAR_3++] = VAR_11;
        }
        else if (VAR_5 == 2)
        {
            VAR_0 = VAR_11;
            VAR_5++;
        }
        else if (VAR_5 == 3)
        {
            VAR_0 = FUNC_5(VAR_11) | (FUNC_5(VAR_0) << 4);
            VAR_1 &= 255;
            VAR_5 = -1;
            if (VAR_1 == VAR_0)
            {
                VAR_1 = 0;
                VAR_4[VAR_3] = 0;
                VAR_3 = 0;
                VAR_2 = 0;
                FUNC_3('+');
                FUNC_0();
            }
            else
                FUNC_3('-');
        }
        else if (VAR_5 == -1)
            FUNC_3('-');
    }
    while (!VAR_2);
    return 1;
}
