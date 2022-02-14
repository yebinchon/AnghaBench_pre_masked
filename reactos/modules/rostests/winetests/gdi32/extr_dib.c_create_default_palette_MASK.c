
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
struct TYPE_10__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
struct TYPE_9__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
struct TYPE_8__ {int palVersion; int palNumEntries; TYPE_1__* palPalEntry; } ;
struct TYPE_7__ {int peFlags; int peBlue; int peGreen; int peRed; } ;
typedef TYPE_1__ PALETTEENTRY ;
typedef TYPE_2__ LOGPALETTE ;
typedef int HPALETTE ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static HPALETTE FUNC_1( int VAR_3 )
{
    char VAR_4[sizeof(LOGPALETTE) + 255 * sizeof(PALETTEENTRY)];
    LOGPALETTE *VAR_5 = (LOGPALETTE *)VAR_4;
    PALETTEENTRY *VAR_6 = VAR_5->palPalEntry;
    int VAR_7;

    VAR_5->palVersion = 0x300;
    VAR_5->palNumEntries = 1 << VAR_3;
    switch (VAR_3)
    {
    case 1:
        for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
        {
            VAR_6[VAR_7].peRed = VAR_0[VAR_7].rgbRed;
            VAR_6[VAR_7].peGreen = VAR_0[VAR_7].rgbGreen;
            VAR_6[VAR_7].peBlue = VAR_0[VAR_7].rgbBlue;
            VAR_6[VAR_7].peFlags = 0;
        }
        break;
    case 4:
        for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
        {
            VAR_6[VAR_7].peRed = VAR_1[VAR_7].rgbRed;
            VAR_6[VAR_7].peGreen = VAR_1[VAR_7].rgbGreen;
            VAR_6[VAR_7].peBlue = VAR_1[VAR_7].rgbBlue;
            VAR_6[VAR_7].peFlags = 0;
        }
        break;
    case 8:
        for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
        {
            VAR_6[VAR_7].peRed = VAR_2[VAR_7].rgbRed;
            VAR_6[VAR_7].peGreen = VAR_2[VAR_7].rgbGreen;
            VAR_6[VAR_7].peBlue = VAR_2[VAR_7].rgbBlue;
            VAR_6[VAR_7].peFlags = 0;
        }
        break;
    }
    return FUNC_0( VAR_5 );
}
