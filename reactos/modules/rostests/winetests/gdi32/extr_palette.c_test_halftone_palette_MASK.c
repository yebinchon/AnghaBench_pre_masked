
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peRed; scalar_t__ peGreen; scalar_t__ peBlue; int peFlags; } ;
typedef TYPE_1__ PALETTEENTRY ;
typedef int HPALETTE ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    HDC VAR_1;
    HPALETTE VAR_2;
    PALETTEENTRY VAR_3[256];
    PALETTEENTRY VAR_4[20];
    int VAR_5, VAR_6;

    VAR_1 = FUNC_2(0);

    VAR_6 = FUNC_3( FUNC_4(VAR_0), 0, 20, VAR_4 );
    FUNC_7( VAR_6 == 20, "wrong size %u\n", VAR_6 );

    VAR_2 = FUNC_0( VAR_1 );
    VAR_6 = FUNC_3( VAR_2, 0, 256, VAR_3 );
    FUNC_7( VAR_6 == 256 || FUNC_6(VAR_6 <= 20),
        "wrong size %u\n", VAR_6 );


    if (VAR_6 >= 20)
    {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
        {
            FUNC_7( VAR_3[VAR_5].peRed == VAR_4[VAR_5].peRed &&
                VAR_3[VAR_5].peGreen == VAR_4[VAR_5].peGreen &&
                VAR_3[VAR_5].peBlue == VAR_4[VAR_5].peBlue &&
                !VAR_3[VAR_5].peFlags,
                "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_5,
                VAR_3[VAR_5].peRed, VAR_3[VAR_5].peGreen, VAR_3[VAR_5].peBlue, VAR_3[VAR_5].peFlags,
                VAR_4[VAR_5].peRed, VAR_4[VAR_5].peGreen, VAR_4[VAR_5].peBlue );
        }
        for (VAR_5 = VAR_6 - 8; VAR_5 < VAR_6; VAR_5++)
        {
            int VAR_7 = VAR_5 - VAR_6 + 20;
            FUNC_7( VAR_3[VAR_5].peRed == VAR_4[VAR_7].peRed &&
                VAR_3[VAR_5].peGreen == VAR_4[VAR_7].peGreen &&
                VAR_3[VAR_5].peBlue == VAR_4[VAR_7].peBlue &&
                !VAR_3[VAR_5].peFlags,
                "%u: wrong color %02x,%02x,%02x,%02x instead of %02x,%02x,%02x\n", VAR_5,
                VAR_3[VAR_5].peRed, VAR_3[VAR_5].peGreen, VAR_3[VAR_5].peBlue, VAR_3[VAR_5].peFlags,
                VAR_4[VAR_7].peRed, VAR_4[VAR_7].peGreen, VAR_4[VAR_7].peBlue );
        }
    }
    FUNC_1( VAR_2 );
    FUNC_5( 0, VAR_1 );
}
