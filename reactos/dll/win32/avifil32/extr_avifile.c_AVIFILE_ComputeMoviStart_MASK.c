
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t dwStreams; } ;
struct TYPE_9__ {int dwMoviChunkPos; size_t dwNextFramePos; TYPE_3__** ppStreams; TYPE_1__ fInfo; } ;
struct TYPE_7__ {scalar_t__* szName; } ;
struct TYPE_8__ {int cbFormat; int cbHandlerData; TYPE_2__ sInfo; int * lpHandlerData; } ;
typedef int MainAVIHeader ;
typedef TYPE_3__ IAVIStreamImpl ;
typedef TYPE_4__ IAVIFileImpl ;
typedef size_t DWORD ;
typedef int AVIStreamHeader ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static DWORD FUNC_1(IAVIFileImpl *VAR_1)
{
  DWORD VAR_2;
  DWORD VAR_3;


  VAR_2 = 11 * sizeof(DWORD) + sizeof(MainAVIHeader);

  for (VAR_3 = 0; VAR_3 < VAR_1->fInfo.dwStreams; VAR_3++) {
    IAVIStreamImpl *VAR_4 = VAR_1->ppStreams[VAR_3];


    VAR_2 += 7 * sizeof(DWORD) + sizeof(AVIStreamHeader);
    VAR_2 += ((VAR_4->cbFormat + 1) & ~1U);
    if (VAR_4->lpHandlerData != ((void*)0) && VAR_4->cbHandlerData > 0)
      VAR_2 += 2 * sizeof(DWORD) + ((VAR_4->cbHandlerData + 1) & ~1U);
    if (VAR_4->sInfo.szName[0])
      VAR_2 += 2 * sizeof(DWORD) + ((FUNC_0(VAR_4->sInfo.szName) + 1) & ~1U);
  }

  if (VAR_1->dwMoviChunkPos == 0) {
    VAR_1->dwNextFramePos = VAR_2;


    if (((VAR_2 + VAR_0) & ~(VAR_0 - 1)) - VAR_2 > 2 * sizeof(DWORD))
      VAR_1->dwNextFramePos = (VAR_2 + VAR_0) & ~(VAR_0 - 1);

    VAR_1->dwMoviChunkPos = VAR_1->dwNextFramePos - sizeof(DWORD);
  }

  return VAR_2;
}
