
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int right; int bottom; int left; int top; } ;
struct TYPE_14__ {TYPE_1__ rcFrame; int dwSampleSize; int dwQuality; int dwSuggestedBufferSize; int dwLength; int dwStart; int dwRate; int dwScale; int dwInitialFrames; int wLanguage; int wPriority; int dwFlags; int fccHandler; int fccType; } ;
struct TYPE_15__ {int source; int dest; TYPE_11__* inbih; int hFile; TYPE_2__ ash_video; } ;
typedef TYPE_3__ WINE_MCIAVI ;
struct TYPE_16__ {int cksize; int ckid; } ;
struct TYPE_12__ {int biHeight; int biWidth; int biClrImportant; int biClrUsed; int biYPelsPerMeter; int biXPelsPerMeter; int biSizeImage; int biCompression; int biBitCount; int biPlanes; int biSize; } ;
typedef TYPE_4__ MMCKINFO ;
typedef int LPSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_11__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 int FUNC_9 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_4__*,TYPE_4__ const*,int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_12(WINE_MCIAVI* VAR_4, const MMCKINFO* VAR_5, MMCKINFO* VAR_6)
{
    MMCKINFO VAR_7;

    FUNC_7("ash.fccType='%c%c%c%c'\n", FUNC_4(FUNC_5(VAR_4->ash_video.fccType)),
                                         FUNC_1(FUNC_5(VAR_4->ash_video.fccType)),
                                         FUNC_4(FUNC_2(VAR_4->ash_video.fccType)),
                                         FUNC_1(FUNC_2(VAR_4->ash_video.fccType)));
    FUNC_7("ash.fccHandler='%c%c%c%c'\n", FUNC_4(FUNC_5(VAR_4->ash_video.fccHandler)),
                                         FUNC_1(FUNC_5(VAR_4->ash_video.fccHandler)),
                                         FUNC_4(FUNC_2(VAR_4->ash_video.fccHandler)),
                                         FUNC_1(FUNC_2(VAR_4->ash_video.fccHandler)));
    FUNC_7("ash.dwFlags=%d\n", VAR_4->ash_video.dwFlags);
    FUNC_7("ash.wPriority=%d\n", VAR_4->ash_video.wPriority);
    FUNC_7("ash.wLanguage=%d\n", VAR_4->ash_video.wLanguage);
    FUNC_7("ash.dwInitialFrames=%d\n", VAR_4->ash_video.dwInitialFrames);
    FUNC_7("ash.dwScale=%d\n", VAR_4->ash_video.dwScale);
    FUNC_7("ash.dwRate=%d\n", VAR_4->ash_video.dwRate);
    FUNC_7("ash.dwStart=%d\n", VAR_4->ash_video.dwStart);
    FUNC_7("ash.dwLength=%d\n", VAR_4->ash_video.dwLength);
    FUNC_7("ash.dwSuggestedBufferSize=%d\n", VAR_4->ash_video.dwSuggestedBufferSize);
    FUNC_7("ash.dwQuality=%d\n", VAR_4->ash_video.dwQuality);
    FUNC_7("ash.dwSampleSize=%d\n", VAR_4->ash_video.dwSampleSize);
    FUNC_7("ash.rcFrame=(%d,%d,%d,%d)\n", VAR_4->ash_video.rcFrame.top, VAR_4->ash_video.rcFrame.left,
   VAR_4->ash_video.rcFrame.bottom, VAR_4->ash_video.rcFrame.right);


    FUNC_9(VAR_4->hFile, VAR_6, 0);

    VAR_7.ckid = VAR_3;
    if (FUNC_10(VAR_4->hFile, &VAR_7, VAR_5, VAR_1) != 0) {
       FUNC_8("Can't find 'strf' chunk\n");
 return VAR_0;
    }

    VAR_4->inbih = FUNC_3(FUNC_0(), 0, VAR_7.cksize);
    if (!VAR_4->inbih) {
 FUNC_8("Can't alloc input BIH\n");
 return VAR_0;
    }

    FUNC_11(VAR_4->hFile, (LPSTR)VAR_4->inbih, VAR_7.cksize);

    FUNC_7("bih.biSize=%d\n", VAR_4->inbih->biSize);
    FUNC_7("bih.biWidth=%d\n", VAR_4->inbih->biWidth);
    FUNC_7("bih.biHeight=%d\n", VAR_4->inbih->biHeight);
    FUNC_7("bih.biPlanes=%d\n", VAR_4->inbih->biPlanes);
    FUNC_7("bih.biBitCount=%d\n", VAR_4->inbih->biBitCount);
    FUNC_7("bih.biCompression=%x\n", VAR_4->inbih->biCompression);
    FUNC_7("bih.biSizeImage=%d\n", VAR_4->inbih->biSizeImage);
    FUNC_7("bih.biXPelsPerMeter=%d\n", VAR_4->inbih->biXPelsPerMeter);
    FUNC_7("bih.biYPelsPerMeter=%d\n", VAR_4->inbih->biYPelsPerMeter);
    FUNC_7("bih.biClrUsed=%d\n", VAR_4->inbih->biClrUsed);
    FUNC_7("bih.biClrImportant=%d\n", VAR_4->inbih->biClrImportant);

    FUNC_6(&VAR_4->source, 0, 0, VAR_4->inbih->biWidth, VAR_4->inbih->biHeight);
    VAR_4->dest = VAR_4->source;

    return VAR_2;
}
