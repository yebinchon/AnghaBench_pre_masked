
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {void* outdata; void* indata; int dwStyle; int hwndSelf; void* hbmPrevFrame; int hbrushBG; int transparentColor; TYPE_2__* inbih; TYPE_1__* outbih; scalar_t__ hic; } ;
struct TYPE_12__ {int right; int left; int bottom; int top; } ;
struct TYPE_11__ {int biWidth; int biHeight; } ;
struct TYPE_10__ {int biWidth; int biHeight; } ;
typedef TYPE_3__ RECT ;
typedef int* LPBITMAPINFO ;
typedef int HDC ;
typedef void* HBITMAP ;
typedef int BOOL ;
typedef int BITMAPINFO ;
typedef TYPE_4__ ANIMATE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int ,int,int,int,int,int ,int ,int ,int ) ;
 void* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_10 (int ,void*) ;
 int FUNC_11 (int ,void*,int ,int,void const*,int const*,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int ,int,int) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_13(ANIMATE_INFO* VAR_7, HDC VAR_8)
{
    void const *VAR_9;
    BITMAPINFO const *VAR_10;
    HDC VAR_11;
    HBITMAP VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15;
    int VAR_16;

    if (!VAR_8 || !VAR_7->inbih)
 return VAR_6;

    if (VAR_7->hic )
    {
        VAR_9 = VAR_7->outdata;
        VAR_10 = (LPBITMAPINFO)VAR_7->outbih;

        VAR_15 = VAR_7->outbih->biWidth;
        VAR_16 = VAR_7->outbih->biHeight;
    }
    else
    {
        VAR_9 = VAR_7->indata;
        VAR_10 = (LPBITMAPINFO)VAR_7->inbih;

        VAR_15 = VAR_7->inbih->biWidth;
        VAR_16 = VAR_7->inbih->biHeight;
    }

    if(!VAR_7->hbmPrevFrame)
    {
        VAR_7->hbmPrevFrame=FUNC_2(VAR_8, VAR_15,VAR_16 );
    }

    VAR_11 = FUNC_3(VAR_8);
    VAR_12 = FUNC_10(VAR_11, VAR_7->hbmPrevFrame);

    FUNC_11(VAR_11, VAR_7->hbmPrevFrame, 0, VAR_16, VAR_9, VAR_10, VAR_3);






    if(VAR_7->transparentColor == VAR_2)
    {
        VAR_7->transparentColor = FUNC_8(VAR_11,0,0);
    }

    if(VAR_7->dwStyle & VAR_1)
    {
        HDC VAR_17 = FUNC_3(VAR_8);
        HBITMAP VAR_18 = FUNC_2(VAR_8,VAR_15, VAR_16);
        HBITMAP VAR_19 = FUNC_10(VAR_17, VAR_18);
        RECT VAR_20;

        FUNC_12(&VAR_20, 0, 0, VAR_15, VAR_16);

        if(!VAR_7->hbrushBG)
            VAR_7->hbrushBG = FUNC_7(VAR_8, VAR_4);

        FUNC_6(VAR_17, &VAR_20, VAR_7->hbrushBG);
        FUNC_0(VAR_7, VAR_17, VAR_11);

        FUNC_10(VAR_17, VAR_19);
        FUNC_10(VAR_11, VAR_18);
        FUNC_4(VAR_17);
        FUNC_5(VAR_7->hbmPrevFrame);
        VAR_7->hbmPrevFrame = VAR_18;
    }

    if (VAR_7->dwStyle & VAR_0)
    {
        RECT VAR_21;

        FUNC_9(VAR_7->hwndSelf, &VAR_21);
        VAR_13 = ((VAR_21.right - VAR_21.left) - VAR_15)/2;
        VAR_14 = ((VAR_21.bottom - VAR_21.top) - VAR_16)/2;
    }
    FUNC_1(VAR_8, VAR_13, VAR_14, VAR_15, VAR_16, VAR_11, 0, 0, VAR_5);

    FUNC_10(VAR_11, VAR_12);
    FUNC_4(VAR_11);
    return VAR_6;
}
