
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int dwEditCount; scalar_t__ dwSampleSize; int dwCaps; int rcFrame; scalar_t__ dwFormatChangeCount; scalar_t__ dwSuggestedBufferSize; scalar_t__ dwLength; } ;
struct TYPE_12__ {int dwLength; int dwFormatChangeCount; } ;
struct TYPE_11__ {TYPE_2__** ppStreams; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_10__ {size_t nStream; size_t dwCurrentFrame; int lLastFrame; int nIdxFrames; int nIdxFmtChanges; TYPE_5__ sInfo; int * idxFmtChanges; int * idxFrames; TYPE_3__* paf; scalar_t__ ref; TYPE_1__ IAVIStream_iface; } ;
typedef TYPE_2__ IAVIStreamImpl ;
typedef TYPE_3__ IAVIFileImpl ;
typedef size_t DWORD ;
typedef TYPE_4__ AVISTREAMINFOW ;
typedef int AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,int) ;
 size_t VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_5__*,TYPE_4__ const*,int) ;

__attribute__((used)) static void FUNC_5(IAVIFileImpl *VAR_5, DWORD VAR_6, const AVISTREAMINFOW *VAR_7)
{
  IAVIStreamImpl *VAR_8;


  FUNC_3(VAR_5 != ((void*)0));
  FUNC_3(VAR_6 < VAR_3);
  FUNC_3(VAR_5->ppStreams[VAR_6] != ((void*)0));

  VAR_8 = VAR_5->ppStreams[VAR_6];

  VAR_8->IAVIStream_iface.lpVtbl = &VAR_4;
  VAR_8->ref = 0;
  VAR_8->paf = VAR_5;
  VAR_8->nStream = VAR_6;
  VAR_8->dwCurrentFrame = (DWORD)-1;
  VAR_8->lLastFrame = -1;

  if (VAR_7 != ((void*)0)) {
    FUNC_4(&VAR_8->sInfo, VAR_7, sizeof(VAR_8->sInfo));

    if (VAR_7->dwLength > 0) {

      VAR_8->idxFrames =
 FUNC_1(FUNC_0(), VAR_2, VAR_7->dwLength * sizeof(AVIINDEXENTRY));
      if (VAR_8->idxFrames != ((void*)0))
 VAR_8->nIdxFrames = VAR_7->dwLength;
    }
    if (VAR_7->dwFormatChangeCount > 0) {

      VAR_8->idxFmtChanges =
 FUNC_1(FUNC_0(), VAR_2, VAR_7->dwFormatChangeCount * sizeof(AVIINDEXENTRY));
      if (VAR_8->idxFmtChanges != ((void*)0))
 VAR_8->nIdxFmtChanges = VAR_7->dwFormatChangeCount;
    }


    VAR_8->sInfo.dwLength = 0;
    VAR_8->sInfo.dwSuggestedBufferSize = 0;
    VAR_8->sInfo.dwFormatChangeCount = 0;
    VAR_8->sInfo.dwEditCount = 1;
    if (VAR_8->sInfo.dwSampleSize > 0)
      FUNC_2(&VAR_8->sInfo.rcFrame);
  }

  VAR_8->sInfo.dwCaps = VAR_0|VAR_1;
}
