
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int palNumEntries; int palPalEntry; int palVersion; } ;
typedef TYPE_1__* PLOGPALETTE ;
typedef int PHYSDEV ;
typedef int PALETTEENTRY ;
typedef int LOGPALETTE ;
typedef int HPALETTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_1__*,int) ;
 int VAR_0 ;

HPALETTE FUNC_6( PHYSDEV VAR_1, HPALETTE VAR_2, BOOL VAR_3 )
{


    PLOGPALETTE VAR_4;
    WORD VAR_5 = 0;
    BOOL VAR_6;
    int VAR_7;

    FUNC_0(VAR_2, sizeof(WORD), &VAR_5);

    if (VAR_5 == 0) return 0;

    VAR_7 = sizeof(LOGPALETTE) + ((VAR_5-1) * sizeof(PALETTEENTRY));
    VAR_4 = FUNC_3( FUNC_2(), 0, VAR_7 );

    if (VAR_4 == ((void*)0)) return 0;

    VAR_4->palVersion = 0x0300;
    VAR_4->palNumEntries = VAR_5;

    FUNC_1(VAR_2, 0, VAR_5, VAR_4->palPalEntry);

    VAR_6 = FUNC_5( VAR_1, VAR_2, VAR_4, VAR_7 );

    FUNC_4( FUNC_2(), 0, VAR_4 );

    if (VAR_6)
        return VAR_2;

    return 0;
}
