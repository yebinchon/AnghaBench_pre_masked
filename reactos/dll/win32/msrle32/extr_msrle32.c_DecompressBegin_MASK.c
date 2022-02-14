
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_19__ {int* palette_map; scalar_t__ bDecompress; scalar_t__ bCompress; } ;
struct TYPE_18__ {scalar_t__ biCompression; int biBitCount; int biClrUsed; int biSize; } ;
struct TYPE_17__ {int rgbRed; int rgbGreen; int rgbBlue; } ;
typedef TYPE_1__ RGBQUAD ;
typedef scalar_t__ LRESULT ;
typedef TYPE_2__* LPCBITMAPINFOHEADER ;
typedef TYPE_3__ CodecInfo ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int,TYPE_1__ const*,TYPE_1__ const) ;
 int FUNC_5 (char*,TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,TYPE_1__ const*,int) ;

__attribute__((used)) static LRESULT FUNC_8(CodecInfo *VAR_8, LPCBITMAPINFOHEADER VAR_9,
          LPCBITMAPINFOHEADER VAR_10)
{
  const RGBQUAD *VAR_11;
  const RGBQUAD *VAR_12;
  UINT VAR_13;

  FUNC_5("(%p,%p,%p)\n",VAR_8,VAR_9,VAR_10);


  FUNC_6(VAR_8 != ((void*)0));


  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
    return VAR_2;
  if (FUNC_1(VAR_8, VAR_9, VAR_10) != VAR_5)
    return VAR_1;


  if (VAR_8->bCompress) {
    FUNC_2("cannot compress and decompress at same time!\n");
    return VAR_3;
  }

  if (VAR_8->bDecompress)
    FUNC_0(VAR_8);

  if (VAR_9->biCompression != VAR_0)
  {
    int VAR_14;

    if (VAR_9->biBitCount <= 8 && VAR_9->biClrUsed == 0)
      VAR_14 = 1 << VAR_9->biBitCount;
    else
      VAR_14 = VAR_9->biClrUsed;

    VAR_11 = (const RGBQUAD*)((const BYTE*)VAR_9 + VAR_9->biSize);
    VAR_12 = (const RGBQUAD*)((const BYTE*)VAR_10 + VAR_10->biSize);

    switch (VAR_10->biBitCount) {
    case 4:
    case 8:
      VAR_8->palette_map = FUNC_3(VAR_6, VAR_14);
      if (VAR_8->palette_map == ((void*)0))
        return VAR_4;

      for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
        VAR_8->palette_map[VAR_13] = FUNC_4(VAR_14, VAR_12, VAR_11[VAR_13]);
      break;
    case 15:
    case 16:
      VAR_8->palette_map = FUNC_3(VAR_6, VAR_14 * 2);
      if (VAR_8->palette_map == ((void*)0))
        return VAR_4;

      for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
        WORD VAR_15;

        if (VAR_10->biBitCount == 15)
    VAR_15 = ((VAR_11[VAR_13].rgbRed >> 3) << 10)
      | ((VAR_11[VAR_13].rgbGreen >> 3) << 5) | (VAR_11[VAR_13].rgbBlue >> 3);
        else
    VAR_15 = ((VAR_11[VAR_13].rgbRed >> 3) << 11)
      | ((VAR_11[VAR_13].rgbGreen >> 3) << 5) | (VAR_11[VAR_13].rgbBlue >> 3);

        VAR_8->palette_map[VAR_13 * 2 + 1] = VAR_15 >> 8;
        VAR_8->palette_map[VAR_13 * 2 + 0] = VAR_15 & 0xFF;
      };
      break;
    case 24:
    case 32:
      VAR_8->palette_map = FUNC_3(VAR_6, VAR_14 * sizeof(RGBQUAD));
      if (VAR_8->palette_map == ((void*)0))
        return VAR_4;
      FUNC_7(VAR_8->palette_map, VAR_11, VAR_14 * sizeof(RGBQUAD));
      break;
    };
  }
  VAR_8->bDecompress = VAR_7;

  return VAR_5;
}
