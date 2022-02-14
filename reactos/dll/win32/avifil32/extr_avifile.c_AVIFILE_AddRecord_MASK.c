
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dwChunkLength; scalar_t__ dwChunkOffset; int dwFlags; int ckid; } ;
struct TYPE_6__ {int cksize; scalar_t__ dwDataOffset; } ;
struct TYPE_7__ {int cbIdxRecords; int nIdxRecords; TYPE_1__ ckLastRecord; TYPE_3__* idxRecords; int ** ppStreams; } ;
typedef TYPE_2__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 void* FUNC_3 (int ,int ,TYPE_3__*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_5(IAVIFileImpl *VAR_5)
{

  FUNC_4(VAR_5 != ((void*)0) && VAR_5->ppStreams[0] != ((void*)0));

  if (VAR_5->idxRecords == ((void*)0) || VAR_5->cbIdxRecords / sizeof(AVIINDEXENTRY) <= VAR_5->nIdxRecords) {
    DWORD VAR_6 = VAR_5->cbIdxRecords + 1024 * sizeof(AVIINDEXENTRY);
    void *VAR_7;
    if (!VAR_5->idxRecords)
      VAR_7 = FUNC_1(FUNC_0(), VAR_3, VAR_6);
    else
      VAR_7 = FUNC_3(FUNC_0(), VAR_3, VAR_5->idxRecords, VAR_6);
    if (VAR_7) {
      VAR_5->cbIdxRecords = VAR_6;
      VAR_5->idxRecords = VAR_7;
    } else {
      FUNC_2(FUNC_0(), 0, VAR_5->idxRecords);
      VAR_5->idxRecords = ((void*)0);
      return VAR_0;
    }
  }

  FUNC_4(VAR_5->nIdxRecords < VAR_5->cbIdxRecords/sizeof(AVIINDEXENTRY));

  VAR_5->idxRecords[VAR_5->nIdxRecords].ckid = VAR_4;
  VAR_5->idxRecords[VAR_5->nIdxRecords].dwFlags = VAR_2;
  VAR_5->idxRecords[VAR_5->nIdxRecords].dwChunkOffset =
    VAR_5->ckLastRecord.dwDataOffset - 2 * sizeof(DWORD);
  VAR_5->idxRecords[VAR_5->nIdxRecords].dwChunkLength =
    VAR_5->ckLastRecord.cksize;
  VAR_5->nIdxRecords++;

  return VAR_1;
}
