
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_2__ {int level; scalar_t__ override; int isolate; } ;
typedef TYPE_1__ StackItem ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_18, WORD *VAR_19, WORD *VAR_20, WORD *VAR_21, int VAR_22, BOOL VAR_23)
{

    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = 0;
    int VAR_27;

    StackItem VAR_28[VAR_9+2];
    int VAR_29 = VAR_9+1;

    VAR_28[VAR_29].level = VAR_18;
    VAR_28[VAR_29].override = VAR_10;
    VAR_28[VAR_29].isolate = VAR_3;

    if (VAR_23)
    {
        if (FUNC_2(VAR_18))
            FUNC_4(VAR_18, VAR_13, VAR_3);
        else
            FUNC_4(VAR_18, VAR_5, VAR_3);
    }

    for (VAR_27 = 0; VAR_27 < VAR_22; VAR_27++)
    {
        VAR_21[VAR_27] = VAR_28[VAR_29].override;


        if (VAR_19[VAR_27] == VAR_14)
        {
            int VAR_30 = FUNC_1(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_30))
                FUNC_4(VAR_30, VAR_10, VAR_3);
            else if (VAR_24 == 0)
                VAR_25++;
        }

        else if (VAR_19[VAR_27] == VAR_6)
        {
            int VAR_31 = FUNC_0(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_31))
                FUNC_4(VAR_31, VAR_10, VAR_3);
            else if (VAR_24 == 0)
                VAR_25++;
        }

        else if (VAR_19[VAR_27] == VAR_16)
        {
            int VAR_32 = FUNC_1(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_32))
                FUNC_4(VAR_32, VAR_13, VAR_3);
            else if (VAR_24 == 0)
                VAR_25++;
        }

        else if (VAR_19[VAR_27] == VAR_8)
        {
            int VAR_33 = FUNC_0(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_33))
                FUNC_4(VAR_33, VAR_5, VAR_3);
            else if (VAR_24 == 0)
                VAR_25++;
        }

        else if (VAR_19[VAR_27] == VAR_15)
        {
            int VAR_34 = FUNC_1(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_34))
            {
                VAR_26++;
                FUNC_4(VAR_34, VAR_10, VAR_17);
            }
            else
                VAR_24++;
        }

        else if (VAR_19[VAR_27] == VAR_7)
        {
            int VAR_35 = FUNC_0(VAR_28[VAR_29].level);
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (FUNC_5(VAR_35))
            {
                VAR_26++;
                FUNC_4(VAR_35, VAR_10, VAR_17);
            }
            else
                VAR_24++;
        }

        else if (VAR_19[VAR_27] == VAR_4)
        {
            int VAR_36;
            int VAR_37 = 0;
            int VAR_38 = 0;
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            for (VAR_36 = VAR_27+1; VAR_36 < VAR_22; VAR_36++)
            {
                if (VAR_19[VAR_36] == VAR_7 || VAR_19[VAR_36] == VAR_15 || VAR_19[VAR_36] == VAR_4)
                {
                    VAR_38++;
                    continue;
                }
                else if (VAR_19[VAR_36] == VAR_12)
                {
                    if (VAR_38)
                        VAR_38 --;
                    else
                        break;
                    continue;
                }

                if (VAR_38) continue;

                if (VAR_19[VAR_36] == VAR_5)
                {
                    VAR_37 = 0;
                    break;
                }
                else if (VAR_19[VAR_36] == VAR_13 || VAR_19[VAR_36] == VAR_0)
                {
                    VAR_37 = 1;
                    break;
                }
            }
            if (FUNC_2(VAR_37))
            {
                int VAR_39 = FUNC_1(VAR_28[VAR_29].level);
                if (FUNC_5(VAR_39))
                {
                    VAR_26++;
                    FUNC_4(VAR_39, VAR_10, VAR_17);
                }
                else
                    VAR_24++;
            }
            else
            {
                int VAR_40 = FUNC_0(VAR_28[VAR_29].level);
                if (FUNC_5(VAR_40))
                {
                    VAR_26++;
                    FUNC_4(VAR_40, VAR_10, VAR_17);
                }
                else
                    VAR_24++;
            }
        }

        else if (VAR_19[VAR_27] != VAR_1 && VAR_19[VAR_27] != VAR_2 && VAR_19[VAR_27] != VAR_12 && VAR_19[VAR_27] != VAR_11)
        {
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (VAR_28[VAR_29].override != VAR_10)
                VAR_19[VAR_27] = VAR_28[VAR_29].override;
        }

        else if (VAR_19[VAR_27] == VAR_12)
        {
            if (VAR_24) VAR_24--;
            else if (!VAR_26) { }
            else
            {
                VAR_25 = 0;
                while (!VAR_28[VAR_29].isolate) FUNC_3();
                FUNC_3();
                VAR_26 --;
            }
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
        }

        else if (VAR_19[VAR_27] == VAR_11)
        {
            VAR_20[VAR_27] = VAR_28[VAR_29].level;
            if (VAR_24) { }
            else if (VAR_25) VAR_25--;
            else if (!VAR_28[VAR_29].isolate && VAR_29 < (VAR_9+1))
                FUNC_3();
        }

    }

    for (VAR_27 = 0; VAR_27 < VAR_22 ; VAR_27++)
        if (VAR_19[VAR_27] == VAR_14 || VAR_19[VAR_27] == VAR_6 || VAR_19[VAR_27] == VAR_16 || VAR_19[VAR_27] == VAR_8 || VAR_19[VAR_27] == VAR_11)
            VAR_19[VAR_27] = VAR_2;
}
