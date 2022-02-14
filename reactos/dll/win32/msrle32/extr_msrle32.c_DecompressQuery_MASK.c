
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ biWidth; scalar_t__ biHeight; scalar_t__ biBitCount; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef int CodecInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_4(CodecInfo *VAR_4, LPCBITMAPINFOHEADER VAR_5,
          LPCBITMAPINFOHEADER VAR_6)
{
  LRESULT VAR_7 = VAR_2;

  FUNC_0("(%p,%p,%p)\n",VAR_4,VAR_5,VAR_6);


  FUNC_1(VAR_4 != ((void*)0));


  if (VAR_5 == ((void*)0) && VAR_6 == ((void*)0))
    return VAR_1;


  if (VAR_5 != ((void*)0)) {
    if (!FUNC_3(VAR_5) && !FUNC_2(VAR_5))
      return VAR_0;
  }


  if (VAR_6 != ((void*)0)) {
    if (!FUNC_2(VAR_6))
      VAR_7 = VAR_0;

    if (VAR_5 != ((void*)0)) {
      if (VAR_5->biWidth != VAR_6->biWidth)
        VAR_7 = VAR_3;
      if (VAR_5->biHeight != VAR_6->biHeight)
        VAR_7 = VAR_3;
      if (VAR_5->biBitCount > VAR_6->biBitCount)
        VAR_7 = VAR_3;
    }
  }

  return VAR_7;
}
