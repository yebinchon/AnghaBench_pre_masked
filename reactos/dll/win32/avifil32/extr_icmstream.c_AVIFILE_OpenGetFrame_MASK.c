
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ biHeight; scalar_t__ biWidth; } ;
struct TYPE_22__ {int biSizeImage; int biHeight; } ;
struct TYPE_19__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_20__ {scalar_t__ fccHandler; int dwSuggestedBufferSize; TYPE_1__ rcFrame; int dwStart; } ;
struct TYPE_21__ {int lKeyFrameEvery; int dwICMFlags; TYPE_4__* lpbiPrev; TYPE_5__* lpbiOutput; int * hic; void* lpPrev; TYPE_4__* lpbiCur; void* lpCur; scalar_t__ cbOutput; TYPE_2__ sInfo; int * pg; int * pStream; } ;
typedef int * LPBITMAPINFOHEADER ;
typedef scalar_t__ LONG ;
typedef TYPE_3__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BITMAPINFOHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,int ,scalar_t__) ;
 TYPE_4__* FUNC_6 (int ,int ,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *,int *,TYPE_5__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,TYPE_5__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (int *,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_13 (int *,TYPE_5__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_16(IAVIStreamImpl *VAR_8)
{
  LPBITMAPINFOHEADER VAR_9;
  DWORD VAR_10;


  FUNC_14(VAR_8 != ((void*)0));
  FUNC_14(VAR_8->pStream != ((void*)0));
  FUNC_14(VAR_8->pg == ((void*)0));

  VAR_8->pg = FUNC_1(VAR_8->pStream, ((void*)0));
  if (VAR_8->pg == ((void*)0))
    return VAR_2;


  if (VAR_8->sInfo.fccHandler == VAR_7)
    return VAR_4;

  FUNC_14(VAR_8->hic != ((void*)0));
  FUNC_14(VAR_8->lpbiOutput == ((void*)0));


  VAR_9 = FUNC_0(VAR_8->pg, VAR_8->sInfo.dwStart);
  if (VAR_9 == ((void*)0))
    return VAR_3;


  VAR_10 = FUNC_9(VAR_8->hic, VAR_9);
  if ((LONG)VAR_10 < (LONG)sizeof(BITMAPINFOHEADER))
    return VAR_1;
  VAR_8->lpbiOutput = FUNC_5(FUNC_4(), 0, VAR_10);
  if (VAR_8->lpbiOutput == ((void*)0))
    return VAR_3;
  VAR_8->cbOutput = VAR_10;

  if (FUNC_8(VAR_8->hic, VAR_9, VAR_8->lpbiOutput) < VAR_5)
    return VAR_0;


  VAR_8->sInfo.rcFrame.right =
    VAR_8->sInfo.rcFrame.left + VAR_8->lpbiOutput->biWidth;
  VAR_8->sInfo.rcFrame.bottom =
    VAR_8->sInfo.rcFrame.top + VAR_8->lpbiOutput->biHeight;
  VAR_8->sInfo.dwSuggestedBufferSize =
    FUNC_10(VAR_8->hic, VAR_9, VAR_8->lpbiOutput);


  if (FUNC_7(VAR_8->hic, VAR_9, VAR_8->lpbiOutput) != VAR_5)
    return VAR_1;


  VAR_10 += VAR_8->sInfo.dwSuggestedBufferSize;
  VAR_8->lpbiCur = FUNC_5(FUNC_4(), 0, VAR_10);
  if (VAR_8->lpbiCur == ((void*)0))
    return VAR_3;
  FUNC_15(VAR_8->lpbiCur, VAR_8->lpbiOutput, VAR_8->cbOutput);
  VAR_8->lpCur = FUNC_2(VAR_8->lpbiCur);


  if (VAR_8->lKeyFrameEvery != 1 &&
      (VAR_8->dwICMFlags & VAR_6) == 0) {
    VAR_10 = FUNC_13(VAR_8->hic, VAR_8->lpbiOutput);
    VAR_8->lpbiPrev = FUNC_5(FUNC_4(), 0, VAR_10);
    if (VAR_8->lpbiPrev == ((void*)0))
      return VAR_3;
    if (FUNC_12(VAR_8->hic, VAR_8->lpbiOutput, VAR_8->lpbiPrev) < VAR_5)
      return VAR_1;

    if (VAR_8->lpbiPrev->biSizeImage == 0) {
      VAR_8->lpbiPrev->biSizeImage =
 FUNC_3(*VAR_8->lpbiPrev) * VAR_8->lpbiPrev->biHeight;
    }


    VAR_10 += VAR_8->lpbiPrev->biSizeImage;
    VAR_8->lpbiPrev = FUNC_6(FUNC_4(), 0, VAR_8->lpbiPrev, VAR_10 );
    if (VAR_8->lpbiPrev == ((void*)0))
      return VAR_3;
    VAR_8->lpPrev = FUNC_2(VAR_8->lpbiPrev);


    if (FUNC_11(VAR_8->hic,VAR_8->lpbiOutput,VAR_8->lpbiPrev) != VAR_5)
      return VAR_1;
  }

  return VAR_4;
}
