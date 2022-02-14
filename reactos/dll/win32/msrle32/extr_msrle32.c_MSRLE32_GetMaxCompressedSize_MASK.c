
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int biWidth; int biBitCount; int biHeight; } ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef int LONG ;


 int FUNC_0 (int ) ;

__attribute__((used)) static LONG FUNC_1(LPCBITMAPINFOHEADER VAR_0)
{
  LONG VAR_1, VAR_2, VAR_3;


  FUNC_0(VAR_0 != ((void*)0));

  VAR_1 = VAR_0->biWidth / 255;
  VAR_2 = VAR_0->biWidth % 255;
  if (VAR_0->biBitCount <= 4) {
    VAR_1 /= 2;
    VAR_2 /= 2;
  }

  VAR_3 = (2 + VAR_1 * (2 + ((VAR_1 + 2) & ~2)) + VAR_2 * (2 + ((VAR_2 + 2) & ~2)));
  return VAR_3 * VAR_0->biHeight + 2;
}
