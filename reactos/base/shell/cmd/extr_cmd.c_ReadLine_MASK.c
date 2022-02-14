
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 scalar_t__* FUNC_4 () ;
 int FUNC_5 (scalar_t__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

BOOL
FUNC_8(TCHAR *VAR_9, BOOL VAR_10)
{
    TCHAR VAR_11[VAR_1];
    LPTSTR VAR_12;


    if (VAR_8 == ((void*)0))
    {
        if (VAR_10)
        {
            FUNC_2(VAR_3);
        }
        else
        {

            if (VAR_5)
            {
                if (!VAR_7)
                    FUNC_1(FUNC_7('\n'));
                FUNC_3();
            }
        }

        if (!FUNC_5(VAR_11, VAR_1 - 1))
        {
            VAR_6 = VAR_4;
            return VAR_2;
        }

        if (VAR_11[0] == FUNC_7('\0'))
            FUNC_1(FUNC_7('\n'));

        if (FUNC_0(VAR_0))
            return VAR_2;

        if (VAR_11[0] == FUNC_7('\0'))
            return VAR_2;

        VAR_12 = VAR_11;
    }
    else
    {
        VAR_12 = FUNC_4();
        if (!VAR_12)
            return VAR_2;
    }

    return FUNC_6(VAR_12, VAR_9, FUNC_7('%'));
}
