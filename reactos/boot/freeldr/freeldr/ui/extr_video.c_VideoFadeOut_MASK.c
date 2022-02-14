
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;


 int FUNC_0 (scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

VOID FUNC_3(ULONG VAR_2)
{
    ULONG VAR_3;
    UCHAR VAR_4;
    UCHAR VAR_5;
    UCHAR VAR_6;
    UCHAR VAR_7;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        {
            if ((VAR_4 % VAR_1) == 0)
            {
                FUNC_2();
            }

            FUNC_0(VAR_4, &VAR_5, &VAR_6, &VAR_7);

            if (VAR_5 > 0)
            {
                VAR_5--;
            }
            if (VAR_6 > 0)
            {
                VAR_6--;
            }
            if (VAR_7 > 0)
            {
                VAR_7--;
            }

            FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
        }
    }
}
