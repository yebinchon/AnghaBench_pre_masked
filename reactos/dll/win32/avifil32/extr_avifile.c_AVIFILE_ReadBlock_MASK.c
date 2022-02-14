
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwStart; scalar_t__ dwLength; int dwSuggestedBufferSize; } ;
struct TYPE_9__ {scalar_t__ lLastFrame; scalar_t__* lpBuffer; scalar_t__ cbBuffer; TYPE_3__* paf; TYPE_2__* idxFrames; TYPE_1__ sInfo; } ;
struct TYPE_8__ {int * hmmio; } ;
struct TYPE_7__ {scalar_t__ dwChunkLength; scalar_t__ ckid; scalar_t__ dwChunkOffset; } ;
typedef int * LPVOID ;
typedef TYPE_4__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef int * HPSTR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__,...) ;
 int FUNC_1 () ;
 scalar_t__* FUNC_2 (int ,int ,scalar_t__) ;
 void* FUNC_3 (int ,int ,scalar_t__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,int ) ;

__attribute__((used)) static HRESULT FUNC_8(IAVIStreamImpl *VAR_4, DWORD VAR_5,
     LPVOID VAR_6, DWORD VAR_7)
{

  FUNC_4(VAR_4 != ((void*)0));
  FUNC_4(VAR_4->paf != ((void*)0));
  FUNC_4(VAR_4->paf->hmmio != ((void*)0));
  FUNC_4(VAR_4->sInfo.dwStart <= VAR_5 && VAR_5 < VAR_4->sInfo.dwLength);
  FUNC_4(VAR_5 <= VAR_4->lLastFrame);


  if (VAR_7 == 0 || VAR_7 > VAR_4->idxFrames[VAR_5].dwChunkLength)
    VAR_7 = VAR_4->idxFrames[VAR_5].dwChunkLength;


  if (VAR_6 == ((void*)0)) {

    VAR_7 += 2 * sizeof(DWORD);


    if (VAR_4->lpBuffer == ((void*)0) || VAR_4->cbBuffer < VAR_7) {
      DWORD VAR_8 = FUNC_5(VAR_7, VAR_4->sInfo.dwSuggestedBufferSize);

      if (VAR_4->lpBuffer == ((void*)0)) {
 VAR_4->lpBuffer = FUNC_2(FUNC_1(), 0, VAR_8);
        if (!VAR_4->lpBuffer) return VAR_1;
      } else {
        void *VAR_9 = FUNC_3(FUNC_1(), 0, VAR_4->lpBuffer, VAR_8);
        if (!VAR_9) return VAR_1;
        VAR_4->lpBuffer = VAR_9;
      }
      VAR_4->cbBuffer = VAR_8;
    }


    if (FUNC_7(VAR_4->paf->hmmio, VAR_4->idxFrames[VAR_5].dwChunkOffset, VAR_3) == -1)
      return VAR_0;
    if (FUNC_6(VAR_4->paf->hmmio, (HPSTR)VAR_4->lpBuffer, VAR_7) != VAR_7)
      return VAR_0;


    if (VAR_4->lpBuffer[0] != VAR_4->idxFrames[VAR_5].ckid ||
 VAR_4->lpBuffer[1] != VAR_4->idxFrames[VAR_5].dwChunkLength) {
      FUNC_0(": block %d not found at 0x%08X\n", VAR_5, VAR_4->idxFrames[VAR_5].dwChunkOffset);
      FUNC_0(": Index says: '%4.4s'(0x%08X) size 0x%08X\n",
   (char*)&VAR_4->idxFrames[VAR_5].ckid, VAR_4->idxFrames[VAR_5].ckid,
   VAR_4->idxFrames[VAR_5].dwChunkLength);
      FUNC_0(": Data  says: '%4.4s'(0x%08X) size 0x%08X\n",
   (char*)&VAR_4->lpBuffer[0], VAR_4->lpBuffer[0], VAR_4->lpBuffer[1]);
      return VAR_0;
    }
  } else {
    if (FUNC_7(VAR_4->paf->hmmio, VAR_4->idxFrames[VAR_5].dwChunkOffset + 2 * sizeof(DWORD), VAR_3) == -1)
      return VAR_0;
    if (FUNC_6(VAR_4->paf->hmmio, VAR_6, VAR_7) != VAR_7)
      return VAR_0;
  }

  return VAR_2;
}
