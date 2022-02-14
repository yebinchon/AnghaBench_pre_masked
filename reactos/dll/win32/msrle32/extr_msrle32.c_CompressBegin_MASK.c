
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WORD ;
typedef size_t UINT ;
struct TYPE_14__ {int nPrevFrame; int * palette_map; scalar_t__ bCompress; int * pCurFrame; int * pPrevFrame; scalar_t__ bDecompress; } ;
struct TYPE_13__ {int biWidth; int biHeight; int biSize; int biBitCount; size_t biClrUsed; } ;
typedef int RGBQUAD ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef TYPE_2__ CodecInfo ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,size_t) ;
 void* FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int ,size_t) ;
 int FUNC_6 (size_t,int const*,int const) ;
 int FUNC_7 (char*,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static LRESULT FUNC_10(CodecInfo *VAR_8, LPCBITMAPINFOHEADER VAR_9,
        LPCBITMAPINFOHEADER VAR_10)
{
  const RGBQUAD *VAR_11;
  const RGBQUAD *VAR_12;
  UINT VAR_13;
  size_t VAR_14;

  FUNC_7("(%p,%p,%p)\n",VAR_8,VAR_9,VAR_10);


  FUNC_9(VAR_8 != ((void*)0));


  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
    return VAR_2;

  if (FUNC_1(VAR_8, VAR_9, VAR_10) != VAR_5)
    return VAR_1;


  if (VAR_8->bDecompress) {
    FUNC_2("cannot compress and decompress at same time!\n");
    return VAR_3;
  }

  if (VAR_8->bCompress)
    FUNC_0(VAR_8);

  VAR_14 = FUNC_8(VAR_10->biWidth * 16) / 2 * VAR_10->biHeight;
  VAR_8->pPrevFrame = FUNC_4(FUNC_3(VAR_0, VAR_14 * sizeof(WORD)));
  if (VAR_8->pPrevFrame == ((void*)0))
    return VAR_4;
  VAR_8->pCurFrame = FUNC_4(FUNC_3(VAR_0, VAR_14 * sizeof(WORD)));
  if (VAR_8->pCurFrame == ((void*)0)) {
    FUNC_0(VAR_8);
    return VAR_4;
  }
  VAR_8->nPrevFrame = -1;
  VAR_8->bCompress = VAR_7;

  VAR_11 = (const RGBQUAD*)((const BYTE*)VAR_9 + VAR_9->biSize);
  VAR_12 = (const RGBQUAD*)((const BYTE*)VAR_10 + VAR_10->biSize);

  switch (VAR_10->biBitCount) {
  case 4:
  case 8:
    VAR_8->palette_map = FUNC_5(VAR_6, VAR_9->biClrUsed);
    if (VAR_8->palette_map == ((void*)0)) {
      FUNC_0(VAR_8);
      return VAR_4;
    }

    for (VAR_13 = 0; VAR_13 < VAR_9->biClrUsed; VAR_13++) {
      VAR_8->palette_map[VAR_13] = FUNC_6(VAR_10->biClrUsed, VAR_12, VAR_11[VAR_13]);
    }
    break;
  };

  return VAR_5;
}
