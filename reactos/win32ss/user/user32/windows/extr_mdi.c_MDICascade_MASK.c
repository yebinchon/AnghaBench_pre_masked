
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {scalar_t__ nActiveChildren; scalar_t__ hwndChildMaximized; } ;
struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ MDICLIENTINFO ;
typedef int LONG ;
typedef size_t INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,TYPE_1__*,size_t,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_11 (char*,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__* FUNC_12 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static LONG FUNC_13( HWND VAR_12, MDICLIENTINFO *VAR_13 )
{
    HWND *VAR_14;
    BOOL VAR_15 = VAR_0;
    int VAR_16, VAR_17;

    if (VAR_13->hwndChildMaximized)
        FUNC_9(VAR_12, VAR_10, (WPARAM)VAR_13->hwndChildMaximized, 0);

    if (VAR_13->nActiveChildren == 0) return 0;

    if (!(VAR_14 = FUNC_12( VAR_12 ))) return 0;


    for (VAR_16 = VAR_17 = 0; VAR_14[VAR_16]; VAR_16++)
    {
        if (!FUNC_7( VAR_14[VAR_16] )) continue;
        if (FUNC_3( VAR_14[VAR_16], VAR_2 )) continue;
        if (FUNC_6( VAR_14[VAR_16] ))
        {
            VAR_15 = VAR_9;
            continue;
        }
        VAR_14[VAR_17++] = VAR_14[VAR_16];
    }
    VAR_14[VAR_17] = 0;

    if (VAR_17)
    {
        INT VAR_18 = 0, VAR_19 = 0, VAR_20;
        POINT VAR_21[2];
        if (VAR_15) VAR_18 = FUNC_2(VAR_4) + FUNC_2(VAR_3);


        for (VAR_20 = VAR_17 - 1; VAR_20 >= 0; VAR_20--)
        {
            LONG VAR_22;
            LONG VAR_23 = VAR_5 | VAR_6 | VAR_8;

            FUNC_8(VAR_12, VAR_19++, VAR_21, VAR_18, ((void*)0));
            FUNC_11("move %p to (%ld,%ld) size [%ld,%ld]\n",
                  VAR_14[VAR_20], VAR_21[0].x, VAR_21[0].y, VAR_21[1].x, VAR_21[1].y);
            VAR_22 = FUNC_4(VAR_14[VAR_20], VAR_1);

            if (!(VAR_22 & VAR_11)) VAR_23 |= VAR_7;
            FUNC_10( VAR_14[VAR_20], 0, VAR_21[0].x, VAR_21[0].y, VAR_21[1].x, VAR_21[1].y,
                           VAR_23);
        }
    }
    FUNC_5( FUNC_1(), 0, VAR_14 );

    if (VAR_15) FUNC_0( VAR_12 );
    return 0;
}
