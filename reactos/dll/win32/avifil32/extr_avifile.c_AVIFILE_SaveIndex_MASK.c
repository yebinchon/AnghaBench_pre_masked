
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int idx ;
struct TYPE_21__ {scalar_t__ dwChunkOffset; int dwChunkLength; void* dwFlags; void* ckid; } ;
struct TYPE_15__ {int dwFlags; size_t dwStreams; scalar_t__ dwLength; } ;
struct TYPE_20__ {size_t nIdxRecords; int hmmio; scalar_t__ dwMoviChunkPos; TYPE_7__** ppStreams; TYPE_3__ fInfo; TYPE_2__* idxRecords; } ;
struct TYPE_16__ {scalar_t__ dwSampleSize; size_t dwInitialFrames; int dwFlags; scalar_t__ dwFormatChangeCount; } ;
struct TYPE_19__ {size_t lLastFrame; TYPE_1__* idxFrames; TYPE_5__* idxFmtChanges; int nStream; TYPE_4__ sInfo; int IAVIStream_iface; } ;
struct TYPE_18__ {scalar_t__ cksize; int ckid; } ;
struct TYPE_17__ {size_t ckid; scalar_t__ dwChunkOffset; int dwChunkLength; } ;
struct TYPE_14__ {scalar_t__ dwChunkOffset; int dwChunkLength; } ;
struct TYPE_13__ {scalar_t__ dwChunkOffset; int dwChunkLength; void* dwFlags; void* ckid; } ;
typedef TYPE_6__ MMCKINFO ;
typedef size_t LONG ;
typedef TYPE_7__ IAVIStreamImpl ;
typedef TYPE_8__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int HPSTR ;
typedef size_t DWORD ;
typedef TYPE_9__ AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int *,int) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_3 (int ,TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(const IAVIFileImpl *VAR_10)
{
  IAVIStreamImpl *VAR_11;
  AVIINDEXENTRY VAR_12;
  MMCKINFO VAR_13;
  DWORD VAR_14;
  LONG VAR_15;

  VAR_13.ckid = VAR_7;
  VAR_13.cksize = 0;
  if (FUNC_4(VAR_10->hmmio, &VAR_13, 0) != VAR_6)
    return VAR_0;

  if (VAR_10->fInfo.dwFlags & VAR_2) {

    LONG VAR_16 = 0;
    LONG VAR_17;
    LONG VAR_18;

    if (VAR_10->ppStreams[0]->sInfo.dwSampleSize == 0)
      VAR_17 = 1;
    else
      VAR_17 = FUNC_0(&VAR_10->ppStreams[0]->IAVIStream_iface, 1000000);

    FUNC_2(VAR_17 > 0);

    for (VAR_14 = 0; VAR_14 < VAR_10->fInfo.dwStreams; VAR_14++) {
      if (VAR_16 < VAR_10->ppStreams[VAR_14]->sInfo.dwInitialFrames)
 VAR_16 = VAR_10->ppStreams[VAR_14]->sInfo.dwInitialFrames;
    }

    for (VAR_18 = -VAR_16; VAR_18 < (LONG)VAR_10->fInfo.dwLength - VAR_16;
  VAR_18 += VAR_17) {
      DWORD VAR_19 = VAR_16 + VAR_18;

      FUNC_2(VAR_19 < VAR_10->nIdxRecords);

      VAR_12.ckid = VAR_9;
      VAR_12.dwFlags = VAR_3;
      VAR_12.dwChunkLength = VAR_10->idxRecords[VAR_19].dwChunkLength;
      VAR_12.dwChunkOffset = VAR_10->idxRecords[VAR_19].dwChunkOffset
 - VAR_10->dwMoviChunkPos;
      if (FUNC_5(VAR_10->hmmio, (HPSTR)&VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
 return VAR_0;

      for (VAR_14 = 0; VAR_14 < VAR_10->fInfo.dwStreams; VAR_14++) {
 VAR_11 = VAR_10->ppStreams[VAR_14];


 if (-(LONG)VAR_11->sInfo.dwInitialFrames > VAR_18)
   continue;

 if (VAR_11->sInfo.dwInitialFrames < VAR_16)
   VAR_19 -= (VAR_16 - VAR_11->sInfo.dwInitialFrames);


 if (VAR_11->lLastFrame <= VAR_19)
   continue;

 if ((VAR_11->sInfo.dwFlags & VAR_5) &&
     VAR_11->sInfo.dwFormatChangeCount != 0 &&
     VAR_11->idxFmtChanges != ((void*)0)) {
   DWORD VAR_20;

   for (VAR_20 = 0; VAR_20 < VAR_11->sInfo.dwFormatChangeCount; VAR_20++) {
     if (VAR_11->idxFmtChanges[VAR_20].ckid == VAR_19) {
       VAR_12.dwFlags = VAR_4;
       VAR_12.ckid = FUNC_1(VAR_8, VAR_11->nStream);
       VAR_12.dwChunkLength = VAR_11->idxFmtChanges[VAR_20].dwChunkLength;
       VAR_12.dwChunkOffset = VAR_11->idxFmtChanges[VAR_20].dwChunkOffset
  - VAR_10->dwMoviChunkPos;

       if (FUNC_5(VAR_10->hmmio, (HPSTR)&VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
  return VAR_0;
       break;
     }
   }
 }

 VAR_12.ckid = VAR_11->idxFrames[VAR_19].ckid;
 VAR_12.dwFlags = VAR_11->idxFrames[VAR_19].dwFlags;
 VAR_12.dwChunkLength = VAR_11->idxFrames[VAR_19].dwChunkLength;
 VAR_12.dwChunkOffset = VAR_11->idxFrames[VAR_19].dwChunkOffset
   - VAR_10->dwMoviChunkPos;
 if (FUNC_5(VAR_10->hmmio, (HPSTR)&VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
   return VAR_0;
      }
    }
  } else {

    for (VAR_14 = 0; VAR_14 < VAR_10->fInfo.dwStreams; VAR_14++) {
      VAR_11 = VAR_10->ppStreams[VAR_14];

      for (VAR_15 = 0; VAR_15 <= VAR_11->lLastFrame; VAR_15++) {
 if ((VAR_11->sInfo.dwFlags & VAR_5) &&
     (VAR_11->sInfo.dwFormatChangeCount != 0)) {
   DWORD VAR_21;

   for (VAR_21 = 0; VAR_21 < VAR_11->sInfo.dwFormatChangeCount; VAR_21++) {
     if (VAR_11->idxFmtChanges[VAR_21].ckid == VAR_15) {
       VAR_12.dwFlags = VAR_4;
       VAR_12.ckid = FUNC_1(VAR_8, VAR_11->nStream);
       VAR_12.dwChunkLength = VAR_11->idxFmtChanges[VAR_21].dwChunkLength;
       VAR_12.dwChunkOffset =
  VAR_11->idxFmtChanges[VAR_21].dwChunkOffset - VAR_10->dwMoviChunkPos;
       if (FUNC_5(VAR_10->hmmio, (HPSTR)&VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
  return VAR_0;
       break;
     }
   }
 }

 VAR_12.ckid = VAR_11->idxFrames[VAR_15].ckid;
 VAR_12.dwFlags = VAR_11->idxFrames[VAR_15].dwFlags;
 VAR_12.dwChunkLength = VAR_11->idxFrames[VAR_15].dwChunkLength;
 VAR_12.dwChunkOffset = VAR_11->idxFrames[VAR_15].dwChunkOffset
   - VAR_10->dwMoviChunkPos;

 if (FUNC_5(VAR_10->hmmio, (HPSTR)&VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
   return VAR_0;
      }
    }
  }

  if (FUNC_3(VAR_10->hmmio, &VAR_13, 0) != VAR_6)
    return VAR_0;

  return VAR_1;
}
