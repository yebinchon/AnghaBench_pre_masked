
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int const) ;
 int FUNC_4 (int,int const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;

void
FUNC_7(uint8_t *VAR_4, int VAR_5)
{
    static size_t VAR_6 = 0;

    if (VAR_2)
    {
        const int VAR_7 = FUNC_2(VAR_2);
        while (VAR_5 > 0)
        {
            const int VAR_8 = FUNC_4(VAR_5, VAR_7);
            FUNC_1(VAR_2, VAR_1, VAR_7 + VAR_3, VAR_1);
            FUNC_3(VAR_4, VAR_1, VAR_8);
            VAR_4 += VAR_8;
            VAR_5 -= VAR_8;


            VAR_6 += VAR_8;
            if (VAR_6 > VAR_0)
            {
                FUNC_5();
                VAR_6 = 0;
            }
        }
    }
    else
    {
        FUNC_0(FUNC_6(VAR_4, VAR_5));
    }
}
