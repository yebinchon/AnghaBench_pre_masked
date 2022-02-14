
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {size_t dwChunkOffset; } ;
struct TYPE_10__ {size_t dwStreams; int dwFlags; } ;
struct TYPE_13__ {TYPE_3__** ppStreams; TYPE_1__ fInfo; int hmmio; } ;
struct TYPE_11__ {scalar_t__ dwSampleSize; int dwSuggestedBufferSize; int dwLength; } ;
struct TYPE_12__ {int lLastFrame; int nIdxFrames; TYPE_2__ sInfo; TYPE_5__* idxFrames; } ;
typedef int LONG ;
typedef TYPE_3__ IAVIStreamImpl ;
typedef TYPE_4__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int HPSTR ;
typedef size_t DWORD ;
typedef int BOOL ;
typedef TYPE_5__ AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__ const*,TYPE_5__*,int,size_t,int *) ;
 int FUNC_1 (char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_4 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,size_t) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static HRESULT FUNC_7(const IAVIFileImpl *VAR_7, DWORD VAR_8, DWORD VAR_9)
{
  AVIINDEXENTRY *VAR_10;
  DWORD VAR_11, VAR_12;
  HRESULT VAR_13 = VAR_2;
  BOOL VAR_14 = VAR_6;

  VAR_10 = FUNC_3(FUNC_2(), 0, VAR_5 * sizeof(AVIINDEXENTRY));
  if (VAR_10 == ((void*)0))
    return VAR_1;


  for (VAR_12 = 0; VAR_12 < VAR_7->fInfo.dwStreams; VAR_12++) {
    IAVIStreamImpl *VAR_15 = VAR_7->ppStreams[VAR_12];

    VAR_15->lLastFrame = -1;

    if (VAR_15->idxFrames != ((void*)0)) {
      FUNC_4(FUNC_2(), 0, VAR_15->idxFrames);
      VAR_15->idxFrames = ((void*)0);
      VAR_15->nIdxFrames = 0;
    }

    if (VAR_15->sInfo.dwSampleSize != 0) {
      if (VAR_12 > 0 && VAR_7->fInfo.dwFlags & VAR_3) {
 VAR_15->nIdxFrames = VAR_7->ppStreams[0]->nIdxFrames;
      } else if (VAR_15->sInfo.dwSuggestedBufferSize) {
 VAR_15->nIdxFrames =
   VAR_15->sInfo.dwLength / VAR_15->sInfo.dwSuggestedBufferSize;
      }
    } else
      VAR_15->nIdxFrames = VAR_15->sInfo.dwLength;

    VAR_15->idxFrames =
      FUNC_3(FUNC_2(), VAR_4, VAR_15->nIdxFrames * sizeof(AVIINDEXENTRY));
    if (VAR_15->idxFrames == ((void*)0) && VAR_15->nIdxFrames > 0) {
      VAR_15->nIdxFrames = 0;
      FUNC_4(FUNC_2(), 0, VAR_10);
      return VAR_1;
    }
  }

  VAR_11 = (DWORD)-1;
  while (VAR_8 != 0) {
    LONG VAR_16 = FUNC_5(VAR_5 * sizeof(AVIINDEXENTRY), VAR_8);

    if (FUNC_6(VAR_7->hmmio, (HPSTR)VAR_10, VAR_16) != VAR_16) {
      VAR_13 = VAR_0;
      break;
    }
    VAR_8 -= VAR_16;

    if (VAR_11 == (DWORD)-1)
      VAR_11 = VAR_9 - VAR_10->dwChunkOffset + sizeof(DWORD);

    FUNC_0(VAR_7, VAR_10, VAR_16 / sizeof(AVIINDEXENTRY),
         VAR_11, &VAR_14);
  }

  FUNC_4(FUNC_2(), 0, VAR_10);


  for (VAR_12 = 0; VAR_12 < VAR_7->fInfo.dwStreams; VAR_12++) {
    IAVIStreamImpl *VAR_17 = VAR_7->ppStreams[VAR_12];

    if (VAR_17->sInfo.dwSampleSize == 0 &&
 VAR_17->sInfo.dwLength != VAR_17->lLastFrame+1)
      FUNC_1("stream %u length mismatch: dwLength=%u found=%d\n",
    VAR_12, VAR_17->sInfo.dwLength, VAR_17->lLastFrame);
  }

  return VAR_13;
}
