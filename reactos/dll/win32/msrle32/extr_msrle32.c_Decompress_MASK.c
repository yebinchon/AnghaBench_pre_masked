
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ biWidth; int biHeight; int biSizeImage; } ;
struct TYPE_20__ {int bDecompress; } ;
struct TYPE_19__ {int * lpOutput; int * lpInput; TYPE_6__* lpbiOutput; TYPE_10__* lpbiInput; } ;
struct TYPE_18__ {scalar_t__ biWidth; int biHeight; scalar_t__ biCompression; int biSizeImage; int biBitCount; } ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__ ICDECOMPRESS ;
typedef int DWORD ;
typedef TYPE_2__ CodecInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_10__*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_10__*,TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_6__*,int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_6__*,int *,int *) ;
 int FUNC_5 (char*,TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static LRESULT FUNC_8(CodecInfo *VAR_4, ICDECOMPRESS *VAR_5, DWORD VAR_6)
{
  FUNC_5("(%p,%p,%u)\n",VAR_4,VAR_5,VAR_6);


  FUNC_6(VAR_4 != ((void*)0));


  if (VAR_5 == ((void*)0))
    return VAR_2;
  if (VAR_5->lpbiInput == ((void*)0) || VAR_5->lpInput == ((void*)0) ||
      VAR_5->lpbiOutput == ((void*)0) || VAR_5->lpOutput == ((void*)0))
    return VAR_2;


  if (! VAR_4->bDecompress) {
    LRESULT VAR_7 = FUNC_1(VAR_4, VAR_5->lpbiInput, VAR_5->lpbiOutput);
    if (VAR_7 != VAR_3)
      return VAR_7;
  } else if (FUNC_2(VAR_4, VAR_5->lpbiInput, VAR_5->lpbiOutput) != VAR_3)
    return VAR_1;

  FUNC_6(VAR_5->lpbiInput->biWidth == VAR_5->lpbiOutput->biWidth);
  FUNC_6(VAR_5->lpbiInput->biHeight == VAR_5->lpbiOutput->biHeight);


  if (VAR_5->lpbiInput->biCompression == VAR_0)
  {
    VAR_5->lpbiOutput->biSizeImage = VAR_5->lpbiInput->biSizeImage;
    FUNC_7(VAR_5->lpOutput, VAR_5->lpInput, VAR_5->lpbiOutput->biSizeImage);
    return VAR_3;
  }

  VAR_5->lpbiOutput->biSizeImage = FUNC_0(*VAR_5->lpbiOutput) * VAR_5->lpbiOutput->biHeight;
  if (VAR_5->lpbiInput->biBitCount == 4)
    return FUNC_3(VAR_4, VAR_5->lpbiOutput, VAR_5->lpInput, VAR_5->lpOutput);
  else
    return FUNC_4(VAR_4, VAR_5->lpbiOutput, VAR_5->lpInput, VAR_5->lpOutput);
}
