
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int elpPenStyle; int elpWidth; int elpHatch; int elpNumEntries; scalar_t__ elpColor; scalar_t__ elpBrushStyle; } ;
typedef TYPE_1__* PEXTLOGPEN ;
typedef scalar_t__* PDWORD ;
typedef int * PBOOL ;
typedef int LONG ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_18 ;
 int FUNC_1 (int ) ;

BOOL
FUNC_2(
    DWORD VAR_19,
    DWORD VAR_20,
    DWORD VAR_21,
    PDWORD VAR_22,
    UINT VAR_23,
    ULONG_PTR VAR_24,
    PBOOL VAR_25,
    PEXTLOGPEN VAR_26)
{
    *VAR_25 = VAR_6;

    if ((VAR_19 & VAR_15) == VAR_17)
    {
        if (VAR_22 == ((void*)0))
        {
            return VAR_6;
        }
    }
    else
    {
        if ((VAR_21 != 0) || (VAR_22 != ((void*)0)))
        {
            return VAR_6;
        }
    }

    if (VAR_23 == VAR_4)
    {
        if (VAR_24 == 0) return VAR_6;
    }

    if (VAR_23 == VAR_1)
    {
        if (VAR_24 == 0) return VAR_6;
        if (VAR_24 < 0xFFFF)
        {
            *VAR_25 = VAR_18;
            return VAR_6;
        }
    }

    if (VAR_23 == VAR_0)
    {
        return VAR_6;
    }

    if ((VAR_19 & VAR_15) == VAR_17)
    {
        if (VAR_21 == 0)
        {
            return VAR_6;
        }

        if (VAR_21 > 16)
        {
            return VAR_6;
        }

        if ((VAR_19 & VAR_16) == VAR_9)
        {
            if (VAR_22[0] == 0)
            {
                return VAR_6;
            }
        }
        else
        {
            if ((VAR_22[0] == 0) && (VAR_21 == 1))
            {
                return VAR_6;
            }
        }
    }

    if ((VAR_19 & VAR_15) == VAR_13)
    {
        VAR_26->elpPenStyle = VAR_13;
        VAR_26->elpWidth = 0;
        VAR_26->elpBrushStyle = VAR_5;
        VAR_26->elpColor = 0;
        VAR_26->elpHatch = 0;
        VAR_26->elpNumEntries = 0;
        return VAR_18;
    }


    if (((VAR_19 & VAR_15) >> 0) > VAR_8) return VAR_6;
    if (((VAR_19 & VAR_10) >> 8) > 2) return VAR_6;
    if (((VAR_19 & VAR_12) >> 12) > 2) return VAR_6;
    if (((VAR_19 & VAR_16) >> 16) > 1) return VAR_6;

    VAR_20 = FUNC_1(((LONG)VAR_20));

    if ((VAR_19 & VAR_16) == VAR_9)
    {
        if (VAR_20 != 1) return VAR_6;

        if ((VAR_23 != VAR_5) &&
            (VAR_23 != VAR_2))
        {
            return VAR_6;
        }

        if (VAR_23 == VAR_2)
        {
            if ((VAR_24 != 8) &&
                (VAR_24 != 10) &&
                (VAR_24 != 12))
            {
                return VAR_6;
            }

            if (VAR_24 >= VAR_7)
            {
                return VAR_6;
            }
        }

        if ((VAR_19 & VAR_15) == VAR_11)
        {
            return VAR_6;
        }
    }
    else
    {
        if ((VAR_19 & VAR_15) == VAR_8)
        {
            return VAR_6;
        }

        if (((VAR_19 & VAR_15) != VAR_14) &&
            ((VAR_19 & VAR_15) != VAR_11) &&
            ((VAR_19 & VAR_15) != VAR_17))
        {
            if (VAR_20 == 0)
            {
                return VAR_6;
            }
        }

        if (VAR_23 == VAR_3)
        {
            VAR_26->elpPenStyle = VAR_13;
            VAR_26->elpWidth = 0;
            VAR_26->elpBrushStyle = VAR_5;
            VAR_26->elpColor = 0;
            VAR_26->elpHatch = 0;
            VAR_26->elpNumEntries = 0;
            return VAR_18;
        }

        if (VAR_23 > VAR_2)
        {
            return VAR_6;
        }

        if (VAR_23 == VAR_2)
        {
            if (VAR_24 >= VAR_7)
            {
                return VAR_6;
            }
        }

    }

    VAR_26->elpPenStyle = VAR_19;
    VAR_26->elpWidth = VAR_20;
    VAR_26->elpBrushStyle = VAR_23;
    VAR_26->elpColor = FUNC_0(1,2,3);
    VAR_26->elpHatch = VAR_24;
    VAR_26->elpNumEntries = VAR_21;


    return VAR_18;
}
