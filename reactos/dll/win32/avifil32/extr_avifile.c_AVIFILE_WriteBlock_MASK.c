
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dwMoviChunkPos; int dwNextFramePos; int hmmio; int fDirty; } ;
struct TYPE_9__ {TYPE_6__* paf; } ;
struct TYPE_8__ {scalar_t__ dwDataOffset; scalar_t__ fccType; scalar_t__ cksize; int ckid; } ;
typedef TYPE_1__ MMCKINFO ;
typedef int * LPCVOID ;
typedef scalar_t__ LONG ;
typedef TYPE_2__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef int FOURCC ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_6(IAVIStreamImpl *VAR_5, DWORD VAR_6,
      FOURCC VAR_7, DWORD VAR_8, LPCVOID VAR_9,
      LONG VAR_10)
{
  MMCKINFO VAR_11;

  VAR_11.ckid = VAR_7;
  VAR_11.cksize = VAR_10;
  VAR_11.fccType = 0;


  if (VAR_5->paf->dwMoviChunkPos == 0)
    FUNC_1(VAR_5->paf);

  if (FUNC_4(VAR_5->paf->hmmio, VAR_5->paf->dwNextFramePos, VAR_2) == -1)
    return VAR_0;

  if (FUNC_3(VAR_5->paf->hmmio, &VAR_11, 0) != VAR_3)
    return VAR_0;
  if (VAR_9 != ((void*)0) && VAR_10 > 0) {
    if (FUNC_5(VAR_5->paf->hmmio, VAR_9, VAR_10) != VAR_10)
      return VAR_0;
  }
  if (FUNC_2(VAR_5->paf->hmmio, &VAR_11, 0) != VAR_3)
    return VAR_0;

  VAR_5->paf->fDirty = VAR_4;
  VAR_5->paf->dwNextFramePos = FUNC_4(VAR_5->paf->hmmio, 0, VAR_1);

  return FUNC_0(VAR_5, VAR_7, VAR_10,
     VAR_11.dwDataOffset - 2 * sizeof(DWORD), VAR_8);
}
