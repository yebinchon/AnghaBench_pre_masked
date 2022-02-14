
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int cy; int cx; } ;
struct TYPE_9__ {int cxLeftWidth; int cxRightWidth; scalar_t__ cyTopHeight; scalar_t__ cyBottomHeight; } ;
struct TYPE_8__ {int cy; int cx; } ;
struct TYPE_10__ {int dwStyle; int nBitmapHeight; int nBitmapWidth; int iListGap; TYPE_2__ themeMargins; TYPE_1__ szPadding; } ;
typedef TYPE_3__ TOOLBAR_INFO ;
typedef TYPE_4__ SIZE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static inline SIZE FUNC_2(const TOOLBAR_INFO *VAR_5, SIZE VAR_6,
                                         BOOL VAR_7, BOOL VAR_8)
{
    SIZE VAR_9;
    if (VAR_5->dwStyle & VAR_4)
    {

        VAR_9.cy = FUNC_1((VAR_7 ? VAR_5->nBitmapHeight : 0),
            VAR_6.cy);


        if (VAR_8)
        {




            if (VAR_7)
                VAR_9.cy += VAR_0;
            else

                VAR_9.cy += VAR_1;
        }
        else
            VAR_9.cy += VAR_5->szPadding.cy;


        VAR_9.cx = 2*FUNC_0(VAR_3) +
            VAR_5->nBitmapWidth + VAR_5->iListGap;
        if (VAR_6.cx > 0)
            VAR_9.cx += VAR_6.cx + VAR_5->szPadding.cx;

    }
    else
    {
        if (VAR_7)
        {



            VAR_9.cy = VAR_5->nBitmapHeight + VAR_0;

            if (VAR_6.cy > 0)
                VAR_9.cy += 1 + VAR_6.cy;
            VAR_9.cx = VAR_5->szPadding.cx +
                FUNC_1(VAR_6.cx, VAR_5->nBitmapWidth);
        }
        else
        {
            VAR_9.cy = VAR_6.cy + VAR_5->szPadding.cy +
                VAR_2;
            VAR_9.cx = VAR_5->szPadding.cx +
                FUNC_1(2*FUNC_0(VAR_3) + VAR_6.cx, VAR_5->nBitmapWidth);
        }
    }






    return VAR_9;
}
