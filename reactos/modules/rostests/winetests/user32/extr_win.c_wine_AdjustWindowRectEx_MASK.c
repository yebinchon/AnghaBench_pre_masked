
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int left; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_2( RECT *VAR_20, LONG VAR_21, BOOL VAR_22, LONG VAR_23 )
{
    int VAR_24;

    if ((VAR_23 & (VAR_15|VAR_13)) ==
        VAR_15)
    {
        VAR_24 = 1;
    }
    else
    {
        VAR_24 = 0;
        if ((VAR_23 & VAR_13) ||
            (VAR_21 & (VAR_18|VAR_11))) VAR_24 = 2;
    }
    if (VAR_21 & VAR_18)
        VAR_24 += FUNC_0(VAR_2) - FUNC_0(VAR_0);
    if ((VAR_21 & (VAR_9|VAR_11)) ||
        (VAR_23 & VAR_13))
        VAR_24++;

    FUNC_1 (VAR_20, VAR_24, VAR_24);

    if ((VAR_21 & VAR_10) == VAR_10)
    {
        if (VAR_23 & VAR_16)
            VAR_20->top -= FUNC_0(VAR_8);
        else
            VAR_20->top -= FUNC_0(VAR_4);
    }
    if (VAR_22) VAR_20->top -= FUNC_0(VAR_7);

    if (VAR_23 & VAR_12)
        FUNC_1(VAR_20, FUNC_0(VAR_1), FUNC_0(VAR_5));

    if (VAR_21 & VAR_19)
    {
        if((VAR_23 & VAR_14) != 0)
            VAR_20->left -= FUNC_0(VAR_3);
        else
            VAR_20->right += FUNC_0(VAR_3);
    }
    if (VAR_21 & VAR_17) VAR_20->bottom += FUNC_0(VAR_6);
}
