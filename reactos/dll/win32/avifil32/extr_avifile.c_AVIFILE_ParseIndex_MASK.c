
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int dwFlags; int dwChunkOffset; int dwChunkLength; int ckid; } ;
struct TYPE_6__ {int dwStreams; } ;
struct TYPE_7__ {int * ppStreams; int dwMoviChunkPos; TYPE_1__ fInfo; } ;
typedef scalar_t__ LONG ;
typedef TYPE_2__ IAVIFileImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;
typedef TYPE_3__ AVIINDEXENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_3(const IAVIFileImpl *VAR_6, AVIINDEXENTRY *VAR_7,
      LONG VAR_8, DWORD VAR_9, BOOL *VAR_10)
{
  if (VAR_7 == ((void*)0))
    return VAR_1;

  for (; VAR_8 > 0; VAR_8--, VAR_7++) {
    WORD VAR_11 = FUNC_2(VAR_7->ckid);

    if (VAR_7->ckid == VAR_5 || VAR_11 == 0x7F)
      continue;

    if (VAR_11 > VAR_6->fInfo.dwStreams)
      return VAR_0;







    if (*VAR_10 && VAR_7->dwChunkOffset < VAR_6->dwMoviChunkPos)
      *VAR_10 = VAR_4;

    if (!*VAR_10)
      VAR_7->dwChunkOffset += VAR_9;

    if (FUNC_1(FUNC_0(VAR_6->ppStreams[VAR_11], VAR_7->ckid, VAR_7->dwChunkLength, VAR_7->dwChunkOffset, VAR_7->dwFlags)))
      return VAR_2;
  }

  return VAR_3;
}
