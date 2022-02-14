
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_15__ {int dwLength; int dwSampleSize; int dwScale; int dwSuggestedBufferSize; int dwRate; int fccType; } ;
struct TYPE_13__ {scalar_t__ fccType; scalar_t__ cksize; int dwDataOffset; int ckid; } ;
struct TYPE_12__ {int dwStreams; } ;
struct TYPE_14__ {scalar_t__ cbFormat; int hmmio; int extra; TYPE_2__ ckData; TYPE_6__ sInfo; TYPE_7__* lpFormat; TYPE_1__ fInfo; int fDirty; } ;
typedef TYPE_2__ MMCKINFO ;
typedef TYPE_3__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int HPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_2 () ;
 TYPE_7__* FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static HRESULT FUNC_10(IAVIFileImpl *VAR_12)
{
  MMCKINFO VAR_13;
  MMCKINFO VAR_14;

  VAR_12->sInfo.dwLength = 0;
  VAR_12->fDirty = VAR_3;


  VAR_13.fccType = 0;
  if (FUNC_7(VAR_12->hmmio, &VAR_13, ((void*)0), VAR_5) != VAR_7) {
    return FUNC_0(VAR_12);
  }

  if (VAR_13.fccType != VAR_10)
    return VAR_0;


  VAR_14.ckid = VAR_9;
  if (FUNC_1(&VAR_12->extra, VAR_12->hmmio, &VAR_14,
        &VAR_13, VAR_4) != VAR_7)
    return VAR_1;


  VAR_12->lpFormat = FUNC_3(FUNC_2(), 0, VAR_14.cksize);
  if (VAR_12->lpFormat == ((void*)0))
    return VAR_1;
  VAR_12->cbFormat = VAR_14.cksize;

  if (FUNC_8(VAR_12->hmmio, (HPSTR)VAR_12->lpFormat, VAR_14.cksize) != VAR_14.cksize)
    return VAR_1;
  if (FUNC_6(VAR_12->hmmio, &VAR_14, 0) != VAR_7)
    return VAR_1;






  VAR_12->ckData.ckid = VAR_8;
  if (FUNC_1(&VAR_12->extra, VAR_12->hmmio, &VAR_12->ckData,
        &VAR_13, VAR_4) != VAR_7)
    return VAR_1;

  FUNC_5(&VAR_12->sInfo, 0, sizeof(VAR_12->sInfo));
  VAR_12->sInfo.fccType = VAR_11;
  VAR_12->sInfo.dwRate = VAR_12->lpFormat->nAvgBytesPerSec;
  VAR_12->sInfo.dwSampleSize =
    VAR_12->sInfo.dwScale = VAR_12->lpFormat->nBlockAlign;
  VAR_12->sInfo.dwLength = VAR_12->ckData.cksize / VAR_12->lpFormat->nBlockAlign;
  VAR_12->sInfo.dwSuggestedBufferSize = VAR_12->ckData.cksize;

  VAR_12->fInfo.dwStreams = 1;

  if (FUNC_6(VAR_12->hmmio, &VAR_12->ckData, 0) != VAR_7) {

    FUNC_4(": file seems to be truncated!\n");
    VAR_12->ckData.cksize = FUNC_9(VAR_12->hmmio, 0, VAR_6) -
      VAR_12->ckData.dwDataOffset;
    VAR_12->sInfo.dwLength = VAR_12->ckData.cksize / VAR_12->lpFormat->nBlockAlign;
    VAR_12->sInfo.dwSuggestedBufferSize = VAR_12->ckData.cksize;
  }


  FUNC_1(&VAR_12->extra, VAR_12->hmmio, &VAR_14, &VAR_13, 0);

  return VAR_2;
}
