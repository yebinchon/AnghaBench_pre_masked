
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {int ckid; int dwFlags; int dwChunkOffset; int dwChunkLength; } ;
struct TYPE_9__ {int dwFormatChangeCount; int dwSuggestedBufferSize; size_t dwLength; int dwFlags; int fccType; } ;
struct TYPE_10__ {int nIdxFmtChanges; int lLastFrame; int nIdxFrames; TYPE_3__ sInfo; TYPE_5__* idxFrames; TYPE_2__* paf; TYPE_5__* idxFmtChanges; } ;
struct TYPE_7__ {int dwFlags; } ;
struct TYPE_8__ {TYPE_1__ fInfo; } ;
typedef TYPE_4__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 void* FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int ,int ,TYPE_5__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;




 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_7(IAVIStreamImpl *VAR_8, DWORD VAR_9, DWORD VAR_10, DWORD VAR_11, DWORD VAR_12)
{
  UINT VAR_13;


  FUNC_6(VAR_8 != ((void*)0));

  switch (FUNC_4(VAR_9)) {
  case 131:
    if (VAR_8->paf->fInfo.dwFlags & VAR_3)
      VAR_12 |= VAR_4;
    break;
  case 130:
    if (VAR_8->paf->fInfo.dwFlags & VAR_3)
      VAR_12 &= ~VAR_4;
    break;
  case 129:
    if (VAR_8->sInfo.fccType != VAR_7) {
      FUNC_0(": found palette change in non-video stream!\n");
      return VAR_0;
    }

    if (VAR_8->idxFmtChanges == ((void*)0) || VAR_8->nIdxFmtChanges <= VAR_8->sInfo.dwFormatChangeCount) {
      DWORD VAR_14 = VAR_8->nIdxFmtChanges + 16;
      void *VAR_15;

      if (VAR_8->idxFmtChanges == ((void*)0)) {
 VAR_8->idxFmtChanges =
          FUNC_2(FUNC_1(), VAR_6, VAR_14 * sizeof(AVIINDEXENTRY));
        if (!VAR_8->idxFmtChanges) return VAR_1;
      } else {
        VAR_15 = FUNC_3(FUNC_1(), VAR_6, VAR_8->idxFmtChanges,
                VAR_14 * sizeof(AVIINDEXENTRY));
        if (!VAR_15) return VAR_1;
        VAR_8->idxFmtChanges = VAR_15;
      }
      VAR_8->nIdxFmtChanges = VAR_14;
    }

    VAR_8->sInfo.dwFlags |= VAR_5;
    VAR_13 = ++VAR_8->sInfo.dwFormatChangeCount;
    VAR_8->idxFmtChanges[VAR_13].ckid = VAR_8->lLastFrame;
    VAR_8->idxFmtChanges[VAR_13].dwFlags = 0;
    VAR_8->idxFmtChanges[VAR_13].dwChunkOffset = VAR_11;
    VAR_8->idxFmtChanges[VAR_13].dwChunkLength = VAR_10;

    return VAR_2;
  case 128:
    if (VAR_8->paf->fInfo.dwFlags & VAR_3)
      VAR_12 |= VAR_4;
    break;
  default:
    FUNC_5(": unknown TWOCC 0x%04X found\n", FUNC_4(VAR_9));
    break;
  };


  if (VAR_8->lLastFrame == -1)
    VAR_12 |= VAR_4;

  if (VAR_8->sInfo.dwSuggestedBufferSize < VAR_10)
    VAR_8->sInfo.dwSuggestedBufferSize = VAR_10;


  if (VAR_8->idxFrames == ((void*)0) || VAR_8->lLastFrame + 1 >= VAR_8->nIdxFrames) {
    VAR_8->nIdxFrames += 512;
    if (VAR_8->idxFrames == ((void*)0))
      VAR_8->idxFrames = FUNC_2(FUNC_1(), VAR_6, VAR_8->nIdxFrames * sizeof(AVIINDEXENTRY));
      else
 VAR_8->idxFrames = FUNC_3(FUNC_1(), VAR_6, VAR_8->idxFrames,
      VAR_8->nIdxFrames * sizeof(AVIINDEXENTRY));
    if (VAR_8->idxFrames == ((void*)0))
      return VAR_1;
  }

  VAR_8->lLastFrame++;
  VAR_8->idxFrames[VAR_8->lLastFrame].ckid = VAR_9;
  VAR_8->idxFrames[VAR_8->lLastFrame].dwFlags = VAR_12;
  VAR_8->idxFrames[VAR_8->lLastFrame].dwChunkOffset = VAR_11;
  VAR_8->idxFrames[VAR_8->lLastFrame].dwChunkLength = VAR_10;


  if (VAR_8->sInfo.dwLength <= VAR_8->lLastFrame)
    VAR_8->sInfo.dwLength = VAR_8->lLastFrame + 1;

  return VAR_2;
}
