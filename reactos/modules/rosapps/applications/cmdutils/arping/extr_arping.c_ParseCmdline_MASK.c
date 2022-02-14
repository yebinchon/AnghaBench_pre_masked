
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int*) ;
 int FUNC_3 (int*,int *,int ) ;

__attribute__((used)) static BOOL FUNC_4(int VAR_13, LPWSTR VAR_14[])
{
    INT VAR_15;

    if (VAR_13 < 3)
    {
        FUNC_1();
        return VAR_0;
    }

    for (VAR_15 = 1; VAR_15 < VAR_13; VAR_15++)
    {
        if (VAR_14[VAR_15][0] == L'-' || VAR_14[VAR_15][0] == L'/')
        {
            switch (VAR_14[VAR_15][1])
            {
                case L't': VAR_7 = VAR_10; break;
                case L'n':
                    if (VAR_15 + 1 < VAR_13)
                    {
                        VAR_8 = FUNC_3(VAR_14[++VAR_15], ((void*)0), 0);

                        if (VAR_8 == 0)
                        {
                            FUNC_0(VAR_4, VAR_12);
                            return VAR_0;
                        }
                    }
                    else
                    {
                        FUNC_0(VAR_2, VAR_14[VAR_15]);
                        return VAR_0;
                    }
                    break;

                case L's':
                    if (VAR_9[0] != 0)
                    {
                        FUNC_0(VAR_3, VAR_14[VAR_15]);
                        return VAR_0;
                    }

                    if (VAR_15 + 1 < VAR_13)
                    {
                        FUNC_2(VAR_9, VAR_14[++VAR_15]);
                    }
                    else
                    {
                        FUNC_0(VAR_2, VAR_14[VAR_15]);
                        return VAR_0;
                    }
                    break;

                case '?':
                    FUNC_1();
                    return VAR_0;

                default:
                    FUNC_0(VAR_1, VAR_14[VAR_15]);
                    return VAR_0;
            }
        }
        else
        {
            if (VAR_11[0] != 0)
            {
                FUNC_0(VAR_3, VAR_14[VAR_15]);
                return VAR_0;
            }
            else
            {
                FUNC_2(VAR_11, VAR_14[VAR_15]);
            }
        }
    }

    if (VAR_11[0] == 0)
    {
        FUNC_0(VAR_5);
        return VAR_0;
    }

    if (VAR_9[0] == 0)
    {
        FUNC_0(VAR_6);
        return VAR_0;
    }

    return VAR_10;
}
