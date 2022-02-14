
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int biSize; int biPlanes; scalar_t__ biCompression; int biBitCount; int biWidth; } ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static BOOL FUNC_1(LPCBITMAPINFOHEADER VAR_4)
{

  FUNC_0(VAR_4 != ((void*)0));

  if (VAR_4->biSize < sizeof(BITMAPINFOHEADER) ||
      VAR_4->biPlanes != 1)
    return VAR_2;

  if (VAR_4->biCompression == VAR_0) {
    if (VAR_4->biBitCount != 4 ||
 (VAR_4->biWidth % 2) != 0)
      return VAR_2;
  } else if (VAR_4->biCompression == VAR_1) {
    if (VAR_4->biBitCount != 8)
      return VAR_2;
  } else
    return VAR_2;

  return VAR_3;
}
