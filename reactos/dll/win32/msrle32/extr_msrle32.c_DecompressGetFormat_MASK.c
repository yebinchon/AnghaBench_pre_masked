
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int biSizeImage; int biHeight; int biCompression; } ;
struct TYPE_11__ {int biSize; int biBitCount; int biClrUsed; } ;
typedef int RGBQUAD ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef TYPE_2__* LPBITMAPINFOHEADER ;
typedef int DWORD ;
typedef int CodecInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static LRESULT FUNC_5(CodecInfo *VAR_4, LPCBITMAPINFOHEADER VAR_5,
       LPBITMAPINFOHEADER VAR_6)
{
  DWORD VAR_7;

  FUNC_2("(%p,%p,%p)\n",VAR_4,VAR_5,VAR_6);


  FUNC_3(VAR_4 != ((void*)0));

  if (VAR_5 == ((void*)0))
    return (VAR_6 != ((void*)0) ? VAR_2 : 0);

  if (FUNC_1(VAR_4, VAR_5, ((void*)0)) != VAR_3)
    return (VAR_6 != ((void*)0) ? VAR_1 : 0);

  VAR_7 = VAR_5->biSize;

  if (VAR_5->biBitCount <= 8) {
    int VAR_8;

    if (VAR_5->biClrUsed == 0)
      VAR_8 = 1 << VAR_5->biBitCount;
    else
      VAR_8 = VAR_5->biClrUsed;

    VAR_7 += VAR_8 * sizeof(RGBQUAD);
  }

  if (VAR_6 != ((void*)0)) {
    FUNC_4(VAR_6, VAR_5, VAR_7);
    VAR_6->biCompression = VAR_0;
    VAR_6->biSizeImage = FUNC_0(*VAR_6) * VAR_6->biHeight;

    return VAR_3;
  } else
    return VAR_7;
}
