
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int fccHandler; } ;
struct TYPE_14__ {int biSize; int biPlanes; int biBitCount; int biClrUsed; scalar_t__ biClrImportant; int biYPelsPerMeter; int biXPelsPerMeter; int biSizeImage; int biCompression; int biHeight; int biWidth; } ;
struct TYPE_13__ {int biBitCount; int biClrUsed; int biSize; int biYPelsPerMeter; int biXPelsPerMeter; int biHeight; int biWidth; } ;
typedef int RGBQUAD ;
typedef int LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_2__* LPBITMAPINFOHEADER ;
typedef TYPE_3__ CodecInfo ;
typedef int BYTE ;
typedef int BITMAPINFOHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_1__*,int *) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int const*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static LRESULT FUNC_6(CodecInfo *VAR_6, LPCBITMAPINFOHEADER VAR_7,
     LPBITMAPINFOHEADER VAR_8)
{
  LRESULT VAR_9;

  FUNC_2("(%p,%p,%p)\n",VAR_6,VAR_7,VAR_8);


  FUNC_3(VAR_6 != ((void*)0));


  if (VAR_7 == ((void*)0)) {
    if (VAR_8 != ((void*)0))
      return VAR_3;
    return 0;
  }


  if (FUNC_0(VAR_6, VAR_7, ((void*)0)) != VAR_5)
    return (VAR_8 == ((void*)0) ? VAR_2 : 0);

  FUNC_3(0 < VAR_7->biBitCount && VAR_7->biBitCount <= 8);

  switch (VAR_6->fccHandler) {
  case 129:
    VAR_9 = 1 << 4;
    break;
  case 128:
    VAR_9 = 1 << 8;
    break;
  case 130:
  case 131:
    VAR_9 = (VAR_7->biBitCount <= 4 ? 1 << 4 : 1 << 8);
    break;
  default:
    return VAR_4;
  }

  if (VAR_7->biClrUsed != 0)
    VAR_9 = VAR_7->biClrUsed;

  VAR_9 = sizeof(BITMAPINFOHEADER) + VAR_9 * sizeof(RGBQUAD);

  if (VAR_8 != ((void*)0)) {
    VAR_8->biSize = sizeof(BITMAPINFOHEADER);
    VAR_8->biWidth = VAR_7->biWidth;
    VAR_8->biHeight = VAR_7->biHeight;
    VAR_8->biPlanes = 1;
    if (VAR_6->fccHandler == 129 ||
 VAR_7->biBitCount <= 4) {
      VAR_8->biCompression = VAR_0;
      VAR_8->biBitCount = 4;
    } else {
      VAR_8->biCompression = VAR_1;
      VAR_8->biBitCount = 8;
    }
    VAR_8->biSizeImage = FUNC_1(VAR_8);
    VAR_8->biXPelsPerMeter = VAR_7->biXPelsPerMeter;
    VAR_8->biYPelsPerMeter = VAR_7->biYPelsPerMeter;
    if (VAR_7->biClrUsed == 0)
      VAR_9 = 1<<VAR_7->biBitCount;
    else
      VAR_9 = VAR_7->biClrUsed;
    VAR_8->biClrUsed = FUNC_5(VAR_9, 1 << VAR_8->biBitCount);
    VAR_8->biClrImportant = 0;

    FUNC_4((LPBYTE)VAR_8 + VAR_8->biSize,
    (const BYTE*)VAR_7 + VAR_7->biSize, VAR_8->biClrUsed * sizeof(RGBQUAD));

    return VAR_5;
  } else
    return VAR_9;
}
