
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {scalar_t__ nActiveChildren; scalar_t__ hwndChildMaximized; } ;
struct TYPE_5__ {int bottom; int top; int right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MDICLIENTINFO ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (scalar_t__,int ,int,int ) ;
 int FUNC_11 (scalar_t__,int ,int,int,int,int,int) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__* FUNC_13 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_14( HWND VAR_14, MDICLIENTINFO *VAR_15, WPARAM VAR_16 )
{
    HWND *VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21;
    BOOL VAR_22 = VAR_0;

    if (VAR_15->hwndChildMaximized)
        FUNC_10(VAR_14, VAR_12, (WPARAM)VAR_15->hwndChildMaximized, 0);

    if (VAR_15->nActiveChildren == 0) return;

    if (!(VAR_17 = FUNC_13( VAR_14 ))) return;


    for (VAR_18 = VAR_19 = VAR_20 = 0; VAR_17[VAR_18]; VAR_18++)
    {
        if (!FUNC_9( VAR_17[VAR_18] )) continue;
        if (FUNC_4( VAR_17[VAR_18], VAR_2 )) continue;
        if (FUNC_7( VAR_17[VAR_18] ))
        {
            VAR_22 = VAR_11;
            continue;
        }
        if ((VAR_16 & VAR_4) && !FUNC_8( VAR_17[VAR_18] )) continue;
        if(VAR_19 == (VAR_20 * (VAR_20 + 2))) VAR_20++;
        VAR_17[VAR_19++] = VAR_17[VAR_18];
    }
    VAR_17[VAR_19] = 0;

    FUNC_12("%u windows to tile\n", VAR_19);

    if (VAR_19)
    {
        HWND *VAR_23 = VAR_17;
        RECT VAR_24;
        int VAR_25, VAR_26, VAR_27, VAR_28;
        int VAR_29, VAR_30, VAR_31;

        FUNC_1(VAR_14,&VAR_24);
        VAR_21 = VAR_19/VAR_20;


        if( VAR_16 & VAR_3 )
        {
            VAR_31 = VAR_20;
            VAR_20 = VAR_21;
            VAR_21 = VAR_31;
        }

        if (VAR_22)
        {
            VAR_26 = VAR_24.bottom - 2 * FUNC_3(VAR_6) - FUNC_3(VAR_5);
            VAR_24.bottom = ( VAR_26 - FUNC_3(VAR_5) < VAR_24.top )? VAR_24.bottom: VAR_26;
        }

        VAR_28 = VAR_24.bottom / VAR_20;
        VAR_27 = VAR_24.right / VAR_21;

        for (VAR_25 = VAR_31 = 0, VAR_30 = 1; VAR_30 <= VAR_21 && *VAR_23; VAR_30++)
        {
            if (VAR_30 == VAR_21)
            {
                VAR_20 = VAR_19 - VAR_31;
                VAR_28 = VAR_24.bottom / VAR_20;
            }

            VAR_26 = 0;
            for (VAR_29 = 1; VAR_29 <= VAR_20 && *VAR_23; VAR_29++, VAR_31++)
            {
                LONG VAR_32 = VAR_7 | VAR_8 | VAR_10;
                LONG VAR_33 = FUNC_5(VAR_17[VAR_31], VAR_1);
                if (!(VAR_33 & VAR_13)) VAR_32 |= VAR_9;

                FUNC_11(*VAR_23, 0, VAR_25, VAR_26, VAR_27, VAR_28, VAR_32);
                VAR_26 += VAR_28;
                VAR_23++;
            }
            VAR_25 += VAR_27;
        }
    }
    FUNC_6( FUNC_2(), 0, VAR_17 );
    if (VAR_22) FUNC_0( VAR_14 );
}
