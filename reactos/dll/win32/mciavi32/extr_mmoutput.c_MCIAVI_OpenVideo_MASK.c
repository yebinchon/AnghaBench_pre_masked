
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fccHandler; } ;
struct TYPE_9__ {int dwCachedFrame; scalar_t__ hWndPaint; TYPE_7__* outbih; TYPE_5__* inbih; int hic; void* outdata; TYPE_1__ ash_video; } ;
typedef TYPE_2__ WINE_MCIAVI ;
struct TYPE_11__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; int biSizeImage; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; int biClrImportant; } ;
struct TYPE_10__ {scalar_t__ biCompression; } ;
typedef int RGBQUAD ;
typedef int LPSTR ;
typedef int HDC ;
typedef scalar_t__ FOURCC ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,TYPE_5__*,TYPE_7__*,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,TYPE_5__*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (char*,int) ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char,char,char,char) ;

BOOL FUNC_11(WINE_MCIAVI* VAR_10)
{
    HDC VAR_11;
    DWORD VAR_12;
    FOURCC VAR_13 = VAR_10->ash_video.fccHandler;

    FUNC_8("fcc %4.4s\n", (LPSTR)&VAR_13);

    VAR_10->dwCachedFrame = -1;


    if (VAR_13 == FUNC_10('C','R','A','M')) VAR_13 = FUNC_10('M','S','V','C');


    VAR_10->hic = FUNC_4(VAR_8, VAR_13, VAR_10->inbih, ((void*)0), VAR_6);
    if (!VAR_10->hic) {

        VAR_13 = VAR_10->inbih->biCompression;
        if ((VAR_13 == FUNC_10('D','I','B',' ')) ||
            (VAR_13 == FUNC_10('R','L','E',' ')) ||
            (VAR_13 == VAR_1) || (VAR_13 == VAR_3) ||
            (VAR_13 == VAR_2) || (VAR_13 == VAR_0))
            goto paint_frame;

 FUNC_9("Can't locate codec for the file\n");
 return VAR_4;
    }

    VAR_12 = sizeof(BITMAPINFOHEADER) + 256 * sizeof(RGBQUAD);

    VAR_10->outbih = FUNC_2(FUNC_1(), 0, VAR_12);
    if (!VAR_10->outbih) {
 FUNC_9("Can't alloc output BIH\n");
 return VAR_4;
    }
    if (!FUNC_3(VAR_10->hic, VAR_10->inbih, VAR_10->outbih, 0, 0, 0)) {
 FUNC_9("Can't open decompressor\n");
 return VAR_4;
    }

    FUNC_8("bih.biSize=%d\n", VAR_10->outbih->biSize);
    FUNC_8("bih.biWidth=%d\n", VAR_10->outbih->biWidth);
    FUNC_8("bih.biHeight=%d\n", VAR_10->outbih->biHeight);
    FUNC_8("bih.biPlanes=%d\n", VAR_10->outbih->biPlanes);
    FUNC_8("bih.biBitCount=%d\n", VAR_10->outbih->biBitCount);
    FUNC_8("bih.biCompression=%x\n", VAR_10->outbih->biCompression);
    FUNC_8("bih.biSizeImage=%d\n", VAR_10->outbih->biSizeImage);
    FUNC_8("bih.biXPelsPerMeter=%d\n", VAR_10->outbih->biXPelsPerMeter);
    FUNC_8("bih.biYPelsPerMeter=%d\n", VAR_10->outbih->biYPelsPerMeter);
    FUNC_8("bih.biClrUsed=%d\n", VAR_10->outbih->biClrUsed);
    FUNC_8("bih.biClrImportant=%d\n", VAR_10->outbih->biClrImportant);

    VAR_10->outdata = FUNC_2(FUNC_1(), 0, VAR_10->outbih->biSizeImage);
    if (!VAR_10->outdata) {
 FUNC_9("Can't alloc output buffer\n");
 return VAR_4;
    }

    if (FUNC_5(VAR_10->hic, VAR_7,
        (DWORD_PTR)VAR_10->inbih, (DWORD_PTR)VAR_10->outbih) != VAR_5) {
 FUNC_9("Can't begin decompression\n");
 return VAR_4;
    }

paint_frame:
    VAR_11 = VAR_10->hWndPaint ? FUNC_0(VAR_10->hWndPaint) : 0;
    if (VAR_11)
    {
        FUNC_6(VAR_10, VAR_11);
        FUNC_7(VAR_10->hWndPaint, VAR_11);
    }
    return VAR_9;
}
