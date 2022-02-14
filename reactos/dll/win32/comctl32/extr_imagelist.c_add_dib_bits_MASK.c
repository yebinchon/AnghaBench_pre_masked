
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int biWidth; } ;
struct TYPE_14__ {TYPE_1__ bmiHeader; } ;
struct TYPE_13__ {int* has_alpha; int cy; int cx; int hdcMask; int hdcImage; scalar_t__ hbmMask; } ;
struct TYPE_12__ {int y; int x; } ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__* HIMAGELIST ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_4__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int ,int,int,int*,TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( HIMAGELIST VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7,
                          BITMAPINFO *VAR_8, BITMAPINFO *VAR_9, DWORD *VAR_10, BYTE *VAR_11 )
{
    int VAR_12, VAR_13, VAR_14;
    POINT VAR_15;
    int VAR_16 = VAR_8->bmiHeader.biWidth;
    int VAR_17 = (VAR_8->bmiHeader.biWidth + 31) / 32 * 4;

    for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
    {
        BOOL VAR_18 = VAR_1;

        FUNC_1( VAR_3, VAR_4 + VAR_14, &VAR_15 );


        for (VAR_12 = 0; VAR_12 < VAR_7 && !VAR_18; VAR_12++)
            for (VAR_13 = VAR_14 * VAR_6; VAR_13 < (VAR_14 + 1) * VAR_6; VAR_13++)
                if ((VAR_18 = ((VAR_10[VAR_12 * VAR_16 + VAR_13] & 0xff000000) != 0))) break;

        if (!VAR_18)
        {
            for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
                for (VAR_13 = VAR_14 * VAR_6; VAR_13 < (VAR_14 + 1) * VAR_6; VAR_13++)
                    if (!VAR_9 || !((VAR_11[VAR_12 * VAR_17 + VAR_13 / 8] << (VAR_13 % 8)) & 0x80))
                        VAR_10[VAR_12 * VAR_16 + VAR_13] |= 0xff000000;
                    else
                        VAR_10[VAR_12 * VAR_16 + VAR_13] = 0;
        }
        else
        {
            VAR_3->has_alpha[VAR_4 + VAR_14] = 1;

            if (VAR_9 && VAR_3->hbmMask)
            {
                for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
                    for (VAR_13 = VAR_14 * VAR_6; VAR_13 < (VAR_14 + 1) * VAR_6; VAR_13++)
                        if ((VAR_10[VAR_12 * VAR_16 + VAR_13] >> 24) > 25)
                            VAR_11[VAR_12 * VAR_17 + VAR_13 / 8] &= ~(0x80 >> (VAR_13 % 8));
                        else
                            VAR_11[VAR_12 * VAR_17 + VAR_13 / 8] |= 0x80 >> (VAR_13 % 8);
            }
        }
        FUNC_0( VAR_3->hdcImage, VAR_15.x, VAR_15.y, VAR_3->cx, VAR_3->cy,
                       VAR_14 * VAR_6, 0, VAR_6, VAR_7, VAR_10, VAR_8, VAR_0, VAR_2 );
        if (VAR_9)
            FUNC_0( VAR_3->hdcMask, VAR_15.x, VAR_15.y, VAR_3->cx, VAR_3->cy,
                           VAR_14 * VAR_6, 0, VAR_6, VAR_7, VAR_11, VAR_9, VAR_0, VAR_2 );
    }
}
