
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biSize; int biPlanes; scalar_t__ biCompression; int biBitCount; scalar_t__ biClrUsed; scalar_t__ biHeight; int biWidth; } ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef unsigned long DWORD ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static BOOL FUNC_2(LPCBITMAPINFOHEADER VAR_4)
{

  FUNC_1(VAR_4 != ((void*)0));


  if (VAR_4->biSize < sizeof(BITMAPINFOHEADER) ||
      VAR_4->biPlanes != 1)
    return VAR_2;
  if (VAR_4->biCompression != VAR_1 &&
      VAR_4->biCompression != VAR_0)
    return VAR_2;


  if (VAR_4->biBitCount != 1 &&
      VAR_4->biBitCount != 4 &&
      VAR_4->biBitCount != 8 &&
      VAR_4->biBitCount != 15 &&
      VAR_4->biBitCount != 16 &&
      VAR_4->biBitCount != 24 &&
      VAR_4->biBitCount != 32)
    return VAR_2;


  if (!VAR_4->biWidth || !VAR_4->biHeight)
    return VAR_2;
  if (FUNC_0(*VAR_4) * (DWORD)VAR_4->biHeight >= (1UL << 31) - 1)
    return VAR_2;


  if (VAR_4->biBitCount >= 15 && VAR_4->biClrUsed > 0)
    return VAR_2;

  return VAR_3;
}
