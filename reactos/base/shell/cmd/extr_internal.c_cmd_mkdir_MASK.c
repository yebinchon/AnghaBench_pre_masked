
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_6 ;
 int * FUNC_8 (int ,scalar_t__*,int ,int ) ;

INT FUNC_9 (LPTSTR VAR_7)
{
    LPTSTR *VAR_8;
    INT VAR_9, VAR_10;
    if (!FUNC_6 (VAR_7, FUNC_5("/?"), 2))
    {
        FUNC_1(VAR_5,VAR_4);
        return 0;
    }

    VAR_8 = FUNC_8 (VAR_7, &VAR_9, VAR_1, VAR_1);
    if (VAR_9 == 0)
    {
        FUNC_0(VAR_2);
        FUNC_7(VAR_8);
        VAR_6 = 1;
        return 1;
    }

    VAR_6 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        if (!FUNC_4(VAR_8[VAR_10]))
        {
            if (FUNC_3() == VAR_0)
            {
                FUNC_0(VAR_3);
            }
            else
            {
                FUNC_2 (FUNC_3(), FUNC_5("MD"));
            }
            VAR_6 = 1;
        }
    }

    FUNC_7 (VAR_8);
    return VAR_6;
}
