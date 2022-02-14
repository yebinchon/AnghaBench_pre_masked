
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_17__ {int desktop_color; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_16__ {TYPE_1__ rcItem; int hDC; } ;
struct TYPE_15__ {size_t backgroundSelection; int placementSelection; int cySource; int cxSource; TYPE_3__* pWallpaperBitmap; TYPE_2__* backgroundItems; int hBitmap; } ;
struct TYPE_14__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_13__ {float width; float height; int info; int bits; } ;
struct TYPE_12__ {scalar_t__ bWallpaper; } ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__* PBACKGROUND_DATA ;
typedef TYPE_6__* LPDRAWITEMSTRUCT ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int,int,int) ;





 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int,int,int,int,int,int,int ,int ,int ,int ) ;
 TYPE_7__ VAR_13 ;

__attribute__((used)) static VOID
FUNC_12(LPDRAWITEMSTRUCT VAR_14, PBACKGROUND_DATA VAR_15)
{
    float VAR_16;
    float VAR_17;
    int VAR_18;
    int VAR_19;
    int VAR_20, VAR_21;
    int VAR_22, VAR_23;
    int VAR_24, VAR_25;
    int VAR_26, VAR_27;
    HBRUSH VAR_28;
    int VAR_29;
    int VAR_30;
    HDC VAR_31;
    HGDIOBJ VAR_32;
    RECT VAR_33 = {
        VAR_6,
        VAR_8,
        VAR_7,
        VAR_4
    };

    VAR_31 = FUNC_0(VAR_14->hDC);
    VAR_32 = FUNC_9(VAR_31, VAR_15->hBitmap);

    if (VAR_15->backgroundItems[VAR_15->backgroundSelection].bWallpaper == VAR_3)
    {

        VAR_28 = FUNC_1(VAR_13.desktop_color);
        FUNC_4(VAR_31, &VAR_33, VAR_28);
        FUNC_3(VAR_28);
    }
    else
    if (VAR_15->pWallpaperBitmap != ((void*)0))
    {
        VAR_16 = ((float)FUNC_7(VAR_10) - 1) / (float)VAR_9;
        VAR_17 = ((float)FUNC_7(VAR_11) - 1) / (float)VAR_5;

        VAR_18 = (int)(VAR_15->pWallpaperBitmap->width / VAR_16);
        VAR_19 = (int)(VAR_15->pWallpaperBitmap->height / VAR_17);

        FUNC_4(VAR_31, &VAR_33, FUNC_6(VAR_1));

        FUNC_10(VAR_31, VAR_0);

        switch (VAR_15->placementSelection)
        {
            case 132:
                VAR_20 = (VAR_9 - VAR_18 + 1) / 2;
                VAR_22 = (VAR_5 - VAR_19 + 1) / 2;
                VAR_21 = 0;
                VAR_23 = 0;

                if (VAR_20 < 0) { VAR_21 = -VAR_20 / 2; VAR_20 = 0; }
                if (VAR_22 < 0) { VAR_23 = -VAR_22 / 2; VAR_22 = 0; }

                if (VAR_18 > VAR_9)
                    VAR_18 = VAR_9;

                if (VAR_19 > VAR_5)
                    VAR_19 = VAR_5;

                FUNC_11(VAR_31,
                              VAR_6+VAR_20,
                              VAR_8+VAR_22,
                              VAR_18,
                              VAR_19,
                              VAR_21,
                              VAR_23,
                              VAR_15->pWallpaperBitmap->width - (int)(VAR_21 * VAR_16),
                              VAR_15->pWallpaperBitmap->height - (int)(VAR_23 * VAR_17),
                              VAR_15->pWallpaperBitmap->bits,
                              VAR_15->pWallpaperBitmap->info,
                              VAR_2,
                              VAR_12);
                break;

            case 129:
                FUNC_11(VAR_31,
                              VAR_6,
                              VAR_8,
                              VAR_9,
                              VAR_5,
                              0,
                              0,
                              VAR_15->pWallpaperBitmap->width,
                              VAR_15->pWallpaperBitmap->height,
                              VAR_15->pWallpaperBitmap->bits,
                              VAR_15->pWallpaperBitmap->info,
                              VAR_2,
                              VAR_12);
                break;

            case 128:
                for (VAR_30 = 0; VAR_30 < VAR_5; VAR_30 += VAR_19)
                {
                    for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29 += VAR_18)
                    {
                        if ((VAR_9-VAR_29) >= VAR_18)
                            VAR_20 = VAR_18;
                        else
                            VAR_20 = VAR_9-VAR_29;


                        if ((VAR_5-VAR_30) >= VAR_19)
                            VAR_22 = VAR_19;
                        else
                            VAR_22 = VAR_5-VAR_30;

                        FUNC_11(VAR_31,
                                      VAR_6 + VAR_29,
                                      VAR_8 + VAR_30,
                                      VAR_20,
                                      VAR_22,
                                      0,
                                      0,
                                      VAR_15->pWallpaperBitmap->width * VAR_20 / VAR_18,
                                      VAR_15->pWallpaperBitmap->height * VAR_22 / VAR_19,
                                      VAR_15->pWallpaperBitmap->bits,
                                      VAR_15->pWallpaperBitmap->info,
                                      VAR_2,
                                      VAR_12);
                    }

                }

                break;

            case 130:
                if ((VAR_9 * VAR_19) <= (VAR_5 * VAR_18))
                {
                    VAR_24 = VAR_9;
                    VAR_25 = VAR_18;
                }
                else
                {
                    VAR_24 = VAR_5;
                    VAR_25 = VAR_19;
                }

                VAR_26 = FUNC_8(VAR_18, VAR_24, VAR_25);
                VAR_27 = FUNC_8(VAR_19, VAR_24, VAR_25);

                VAR_20 = (VAR_9 - VAR_26) / 2;
                VAR_22 = (VAR_5 - VAR_27) / 2;

                FUNC_11(VAR_31,
                              VAR_6 + VAR_20,
                              VAR_8 + VAR_22,
                              VAR_26,
                              VAR_27,
                              0,
                              0,
                              VAR_15->pWallpaperBitmap->width,
                              VAR_15->pWallpaperBitmap->height,
                              VAR_15->pWallpaperBitmap->bits,
                              VAR_15->pWallpaperBitmap->info,
                              VAR_2,
                              VAR_12);
                break;

            case 131:
                if ((VAR_9 * VAR_19) > (VAR_5 * VAR_18))
                {
                    VAR_24 = VAR_9;
                    VAR_25 = VAR_18;
                }
                else
                {
                    VAR_24 = VAR_5;
                    VAR_25 = VAR_19;
                }

                VAR_26 = FUNC_8(VAR_18, VAR_24, VAR_25);
                VAR_27 = FUNC_8(VAR_19, VAR_24, VAR_25);

                VAR_21 = (((VAR_26 - VAR_9) * VAR_15->pWallpaperBitmap->width) / (2 * VAR_26));
                VAR_23 = (((VAR_27 - VAR_5) * VAR_15->pWallpaperBitmap->height) / (2 * VAR_27));

                FUNC_11(VAR_31,
                              VAR_6,
                              VAR_8,
                              VAR_9,
                              VAR_5,
                              VAR_21,
                              VAR_23,
                              (VAR_9 * VAR_15->pWallpaperBitmap->width) / VAR_26,
                              (VAR_5 * VAR_15->pWallpaperBitmap->height) / VAR_27,
                              VAR_15->pWallpaperBitmap->bits,
                              VAR_15->pWallpaperBitmap->info,
                              VAR_2,
                              VAR_12);
                break;
        }
    }

    FUNC_5(VAR_14->hDC,
                      VAR_14->rcItem.left, VAR_14->rcItem.top,
                      VAR_14->rcItem.right-VAR_14->rcItem.left+1,
                      VAR_14->rcItem.bottom-VAR_14->rcItem.top+1,
                      VAR_31,
                      0, 0,
                      VAR_15->cxSource, VAR_15->cySource,
                      0xFF00FF);

    FUNC_9(VAR_31, VAR_32);
    FUNC_2(VAR_31);
}
