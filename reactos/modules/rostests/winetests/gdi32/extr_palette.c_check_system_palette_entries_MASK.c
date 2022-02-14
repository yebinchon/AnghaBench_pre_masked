
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int entries ;
typedef int defpal ;
struct TYPE_5__ {scalar_t__ peRed; scalar_t__ peGreen; scalar_t__ peBlue; int peFlags; } ;
typedef TYPE_1__ PALETTEENTRY ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_5(HDC VAR_1)
{
    PALETTEENTRY VAR_2[256];
    PALETTEENTRY VAR_3[20];
    int VAR_4, VAR_5;

    FUNC_3( VAR_3, 0xaa, sizeof(VAR_3) );
    VAR_5 = FUNC_0( FUNC_1(VAR_0), 0, 20, VAR_3 );
    FUNC_4( VAR_5 == 20, "wrong size %u\n", VAR_5 );

    FUNC_3( VAR_2, 0x55, sizeof(VAR_2) );
    VAR_5 = FUNC_2( VAR_1, 0, 256, VAR_2 );
    FUNC_4( VAR_5 == 0, "wrong size %u\n", VAR_5);
    for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
    {
        FUNC_4( VAR_2[VAR_4].peRed == VAR_3[VAR_4].peRed &&
            VAR_2[VAR_4].peGreen == VAR_3[VAR_4].peGreen &&
            VAR_2[VAR_4].peBlue == VAR_3[VAR_4].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags,
            VAR_3[VAR_4].peRed, VAR_3[VAR_4].peGreen, VAR_3[VAR_4].peBlue );
    }
    for (VAR_4 = 10; VAR_4 < 246; ++VAR_4)
    {
        FUNC_4( !VAR_2[VAR_4].peRed &&
            !VAR_2[VAR_4].peGreen &&
            !VAR_2[VAR_4].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of 0,0,0\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags);
    }
    for (VAR_4 = 246; VAR_4 < 256; VAR_4++)
    {
        int VAR_6 = VAR_4 - 246 + 10;
        FUNC_4( VAR_2[VAR_4].peRed == VAR_3[VAR_6].peRed &&
            VAR_2[VAR_4].peGreen == VAR_3[VAR_6].peGreen &&
            VAR_2[VAR_4].peBlue == VAR_3[VAR_6].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags,
            VAR_3[VAR_6].peRed, VAR_3[VAR_6].peGreen, VAR_3[VAR_6].peBlue );
    }

    FUNC_3( VAR_2, 0x55, sizeof(VAR_2) );
    VAR_5 = FUNC_2( VAR_1, 0, 10, VAR_2 );
    FUNC_4( VAR_5 == 0, "wrong size %u\n", VAR_5);
    for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
    {
        FUNC_4( VAR_2[VAR_4].peRed == VAR_3[VAR_4].peRed &&
            VAR_2[VAR_4].peGreen == VAR_3[VAR_4].peGreen &&
            VAR_2[VAR_4].peBlue == VAR_3[VAR_4].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags,
            VAR_3[VAR_4].peRed, VAR_3[VAR_4].peGreen, VAR_3[VAR_4].peBlue );
    }

    FUNC_3( VAR_2, 0x55, sizeof(VAR_2) );
    VAR_5 = FUNC_2( VAR_1, 10, 246, VAR_2 );
    FUNC_4( VAR_5 == 0, "wrong size %u\n", VAR_5);
    for (VAR_4 = 0; VAR_4 < 236; ++VAR_4)
    {
        FUNC_4( !VAR_2[VAR_4].peRed &&
            !VAR_2[VAR_4].peGreen &&
            !VAR_2[VAR_4].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of 0,0,0\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags);
    }
    for (VAR_4 = 236; VAR_4 < 246; VAR_4++)
    {
        int VAR_7 = VAR_4 - 236 + 10;
        FUNC_4( VAR_2[VAR_4].peRed == VAR_3[VAR_7].peRed &&
            VAR_2[VAR_4].peGreen == VAR_3[VAR_7].peGreen &&
            VAR_2[VAR_4].peBlue == VAR_3[VAR_7].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags,
            VAR_3[VAR_7].peRed, VAR_3[VAR_7].peGreen, VAR_3[VAR_7].peBlue );
    }

    FUNC_3( VAR_2, 0x55, sizeof(VAR_2) );
    VAR_5 = FUNC_2( VAR_1, 246, 10, VAR_2 );
    FUNC_4( VAR_5 == 0, "wrong size %u\n", VAR_5);
    for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
    {
        int VAR_8 = VAR_4 + 10;
        FUNC_4( VAR_2[VAR_4].peRed == VAR_3[VAR_8].peRed &&
            VAR_2[VAR_4].peGreen == VAR_3[VAR_8].peGreen &&
            VAR_2[VAR_4].peBlue == VAR_3[VAR_8].peBlue &&
            !VAR_2[VAR_4].peFlags,
            "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_4,
            VAR_2[VAR_4].peRed, VAR_2[VAR_4].peGreen, VAR_2[VAR_4].peBlue, VAR_2[VAR_4].peFlags,
            VAR_3[VAR_8].peRed, VAR_3[VAR_8].peGreen, VAR_3[VAR_8].peBlue );
    }
}
