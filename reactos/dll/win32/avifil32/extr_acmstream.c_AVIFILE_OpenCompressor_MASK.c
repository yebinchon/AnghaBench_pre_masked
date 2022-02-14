
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nAvgBytesPerSec; int nBlockAlign; int wFormatTag; } ;
struct TYPE_6__ {int dwSuggestedBufferSize; int dwLength; int dwStart; int rcFrame; scalar_t__ dwQuality; int dwRate; int dwScale; int dwSampleSize; } ;
struct TYPE_7__ {int cbInFormat; int cbOutFormat; TYPE_1__ sInfo; TYPE_3__* lpOutFormat; int * lpInFormat; int * has; int * pStream; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_2__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ,int *,int*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_8 (int **,int *,int *,TYPE_3__*,int *,int ,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static HRESULT FUNC_10(IAVIStreamImpl *VAR_9)
{
  HRESULT VAR_10;


  FUNC_9(VAR_9 != ((void*)0));
  FUNC_9(VAR_9->pStream != ((void*)0));

  if (VAR_9->has != ((void*)0))
    return VAR_5;

  if (VAR_9->lpInFormat == ((void*)0)) {

    VAR_10 = FUNC_0(VAR_9->pStream, VAR_9->sInfo.dwStart, &VAR_9->cbInFormat);
    if (FUNC_2(VAR_10))
      return VAR_10;
    VAR_9->lpInFormat = FUNC_4(FUNC_3(), 0, VAR_9->cbInFormat);
    if (VAR_9->lpInFormat == ((void*)0))
      return VAR_3;

    VAR_10 = FUNC_5(VAR_9->pStream, VAR_9->sInfo.dwStart,
                               VAR_9->lpInFormat, &VAR_9->cbInFormat);
    if (FUNC_2(VAR_10))
      return VAR_10;

    if (VAR_9->lpOutFormat == ((void*)0)) {

      VAR_9->cbOutFormat = sizeof(PCMWAVEFORMAT);
      VAR_9->lpOutFormat = FUNC_4(FUNC_3(), 0, VAR_9->cbOutFormat);
      if (VAR_9->lpOutFormat == ((void*)0))
        return VAR_3;

      VAR_9->lpOutFormat->wFormatTag = VAR_8;
      if (FUNC_7(((void*)0), VAR_9->lpInFormat, VAR_9->lpOutFormat,
                           VAR_9->cbOutFormat, VAR_0) != VAR_7)
        return VAR_4;
    }
  } else if (VAR_9->lpOutFormat == ((void*)0))
    return VAR_2;

  if (FUNC_8(&VAR_9->has, ((void*)0), VAR_9->lpInFormat, VAR_9->lpOutFormat,
                    ((void*)0), 0, 0, VAR_1) != VAR_7)
    return VAR_4;


  VAR_9->sInfo.dwSampleSize = VAR_9->lpOutFormat->nBlockAlign;
  VAR_9->sInfo.dwScale = VAR_9->lpOutFormat->nBlockAlign;
  VAR_9->sInfo.dwRate = VAR_9->lpOutFormat->nAvgBytesPerSec;
  VAR_9->sInfo.dwQuality = (DWORD)VAR_6;
  FUNC_6(&VAR_9->sInfo.rcFrame);


  FUNC_1(&VAR_9->sInfo.dwStart);
  FUNC_1(&VAR_9->sInfo.dwLength);
  FUNC_1(&VAR_9->sInfo.dwSuggestedBufferSize);

  return VAR_5;
}
