
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 int FUNC_2 (scalar_t__ const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int FUNC_5( int VAR_5, const WCHAR *VAR_6, int VAR_7, WCHAR *VAR_8, int VAR_9 )
{
    WCHAR *VAR_10 = VAR_8;
    const WCHAR *VAR_11;
    int VAR_12;

    if (VAR_7 == -1)
        VAR_7 = FUNC_2(VAR_6) + 1;

    if (!VAR_9)
    {

        VAR_9 = VAR_7;

        if (VAR_5 & VAR_1)
        {
            while (VAR_7--)
            {
                VAR_9 += FUNC_1(*VAR_6);
                VAR_6++;
            }
        }
        else if (VAR_5 & VAR_0)
        {

        }
        else if (VAR_5 & VAR_4)
        {

        }
        return VAR_9;
    }

    if (VAR_7 > VAR_9)
        return 0;

    VAR_9 -= VAR_7;


    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
    {
        WCHAR VAR_13 = *VAR_6;

        if (VAR_5 & VAR_1)
        {
            VAR_11 = FUNC_0(VAR_13);
            if (VAR_11[0])
            {
                if (!VAR_9--)
                    return 0;
                VAR_8[0] = VAR_11[0];
                if (VAR_11[2])
                {
                    if (!VAR_9--)
                        return 0;
                    *++VAR_8 = VAR_11[1];
                    VAR_13 = VAR_11[2];
                }
                else
                    VAR_13 = VAR_11[1];
                VAR_8++;
            }
        }
        else if (VAR_5 & VAR_0)
        {

        }
        else if (VAR_5 & VAR_4)
        {

        }
        if (VAR_5 & VAR_3)
            VAR_13 = FUNC_3(VAR_13);
        if (VAR_5 & VAR_2)
            VAR_13 = FUNC_4(VAR_13);

        *VAR_8++ = VAR_13;
        VAR_6++;
    }
    return VAR_8 - VAR_10;
}
