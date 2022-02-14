
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int WORD ;
typedef size_t UINT ;
struct TYPE_7__ {unsigned int* pCurFrame; } ;
struct TYPE_6__ {int biWidth; scalar_t__ biClrUsed; int biSize; scalar_t__ biHeight; int biBitCount; } ;
typedef int RGBQUAD ;
typedef unsigned int* LPWORD ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef scalar_t__ LONG ;
typedef unsigned int DWORD ;
typedef TYPE_2__ CodecInfo ;
typedef size_t BYTE ;


 unsigned int FUNC_0 (TYPE_1__) ;
 unsigned int FUNC_1 (int const) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;

void FUNC_4(CodecInfo *VAR_0, LPCBITMAPINFOHEADER VAR_1, const BYTE *VAR_2)
{
  WORD VAR_3[256];
  DWORD VAR_4, VAR_5;
  LPWORD VAR_6;
  UINT VAR_7;
  LONG VAR_8;


  FUNC_3(VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && VAR_2 != ((void*)0));
  FUNC_3(VAR_0->pCurFrame != ((void*)0));

  VAR_4 = FUNC_0(*VAR_1);
  VAR_5 = FUNC_2((WORD)VAR_1->biWidth * 8u * sizeof(WORD)) / 2u;
  VAR_6 = VAR_0->pCurFrame;

  FUNC_3(VAR_1->biClrUsed != 0);

  {
    const RGBQUAD *VAR_9 =
      (const RGBQUAD *)((const BYTE*)VAR_1 + VAR_1->biSize);

    for (VAR_7 = 0; VAR_7 < VAR_1->biClrUsed; VAR_7++)
      VAR_3[VAR_7] = FUNC_1(VAR_9[VAR_7]);
  }

  for (VAR_8 = 0; VAR_8 < VAR_1->biHeight; VAR_8++) {
    LONG VAR_10;

    switch (VAR_1->biBitCount) {
    case 1:
      for (VAR_10 = 0; VAR_10 < VAR_1->biWidth / 8; VAR_10++) {
 for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
   VAR_6[8 * VAR_10 + VAR_7] = VAR_3[(VAR_2[VAR_10] >> (7 - VAR_7)) & 1];
      }
      break;
    case 4:
      for (VAR_10 = 0; VAR_10 < VAR_1->biWidth / 2; VAR_10++) {
 VAR_6[2 * VAR_10 + 0] = VAR_3[(VAR_2[VAR_10] >> 4)];
 VAR_6[2 * VAR_10 + 1] = VAR_3[(VAR_2[VAR_10] & 0x0F)];
      }
      break;
    case 8:
      for (VAR_10 = 0; VAR_10 < VAR_1->biWidth; VAR_10++)
 VAR_6[VAR_10] = VAR_3[VAR_2[VAR_10]];
      break;
    }

    VAR_2 += VAR_4;
    VAR_6 += VAR_5;
  }
}
