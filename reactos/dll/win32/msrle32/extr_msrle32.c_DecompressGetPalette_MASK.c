
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int biBitCount; int biClrUsed; scalar_t__ biSize; } ;
struct TYPE_9__ {int biBitCount; int biClrUsed; int biSize; } ;
typedef int RGBQUAD ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_2__* LPBITMAPINFOHEADER ;
typedef int CodecInfo ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int const*,int) ;

__attribute__((used)) static LRESULT FUNC_4(CodecInfo *VAR_4, LPCBITMAPINFOHEADER VAR_5,
        LPBITMAPINFOHEADER VAR_6)
{
  int VAR_7;

  FUNC_1("(%p,%p,%p)\n",VAR_4,VAR_5,VAR_6);


  FUNC_2(VAR_4 != ((void*)0));


  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    return VAR_1;

  if (FUNC_0(VAR_4, VAR_5, VAR_6) != VAR_3)
    return VAR_0;

  if (VAR_6->biBitCount > 8)
    return VAR_2;

  if (VAR_5->biBitCount <= 8) {
    if (VAR_5->biClrUsed > 0)
      VAR_7 = VAR_5->biClrUsed;
    else
      VAR_7 = (1 << VAR_5->biBitCount);

    VAR_6->biClrUsed = VAR_7;

    FUNC_3((LPBYTE)VAR_6 + VAR_6->biSize, (const BYTE*)VAR_5 + VAR_5->biSize, VAR_7 * sizeof(RGBQUAD));
  }

  return VAR_3;
}
