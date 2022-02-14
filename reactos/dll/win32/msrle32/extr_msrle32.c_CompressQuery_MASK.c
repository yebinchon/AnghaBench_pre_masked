
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ fccHandler; } ;
struct TYPE_8__ {int biBitCount; int biWidth; scalar_t__ biHeight; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef TYPE_2__ CodecInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_3(const CodecInfo *VAR_5, LPCBITMAPINFOHEADER VAR_6,
        LPCBITMAPINFOHEADER VAR_7)
{

  FUNC_0(VAR_5 != ((void*)0));


  if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0))
    return VAR_2;


  if (VAR_6 != ((void*)0)) {
    if (!FUNC_1(VAR_6))
      return VAR_1;


    if (VAR_6->biBitCount <= 4 && (VAR_6->biWidth % 2))
      return VAR_1;

    if (VAR_5->fccHandler == VAR_0 && VAR_6->biBitCount > 4)
      return VAR_4;
    else if (VAR_6->biBitCount > 8)
      return VAR_4;
  }


  if (VAR_7 != ((void*)0)) {
    if (!FUNC_2(VAR_7))
      return VAR_1;

    if (VAR_6 != ((void*)0)) {
      if (VAR_6->biWidth != VAR_7->biWidth)
 return VAR_4;
      if (VAR_6->biHeight != VAR_7->biHeight)
 return VAR_4;
      if (VAR_6->biBitCount > VAR_7->biBitCount)
 return VAR_4;
    }
  }

  return VAR_3;
}
