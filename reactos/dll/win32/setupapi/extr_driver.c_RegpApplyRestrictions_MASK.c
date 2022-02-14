
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__* PLONG ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static VOID
FUNC_0( DWORD VAR_13, DWORD VAR_14, DWORD VAR_15,
                       PLONG VAR_16 )
{

    if (*VAR_16 == VAR_2 || *VAR_16 == VAR_1)
    {
        DWORD VAR_17 = 0;

        switch (VAR_14)
        {
        case 130: VAR_17 = VAR_10; break;
        case 128: VAR_17 = VAR_12; break;
        case 132: VAR_17 = VAR_8; break;
        case 131: VAR_17 = VAR_9; break;
        case 134: VAR_17 = VAR_6; break;
        case 133: VAR_17 = VAR_7; break;
        case 129: VAR_17 = VAR_11; break;
        }

        if (VAR_13 & VAR_17)
        {

            if (VAR_14 == 134)
            {
                DWORD VAR_18 = 0;

                if ((VAR_13 & VAR_4) == VAR_4)
                    VAR_18 = 4;
                else if ((VAR_13 & VAR_5) == VAR_5)
                    VAR_18 = 8;

                if (VAR_18 && VAR_15 != VAR_18)
                    *VAR_16 = VAR_0;
            }
        }
        else *VAR_16 = VAR_3;
    }
}
