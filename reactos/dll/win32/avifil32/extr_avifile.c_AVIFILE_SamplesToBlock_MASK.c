
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t dwSampleSize; size_t dwStart; } ;
struct TYPE_7__ {size_t lLastFrame; TYPE_2__* idxFrames; TYPE_1__ sInfo; } ;
struct TYPE_6__ {size_t dwChunkLength; } ;
typedef size_t* LPLONG ;
typedef size_t LONG ;
typedef TYPE_3__ IAVIStreamImpl ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const IAVIStreamImpl *VAR_0, LPLONG VAR_1, LPLONG VAR_2)
{
  LONG VAR_3;


  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(VAR_1 != ((void*)0));
  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(VAR_0->sInfo.dwSampleSize != 0);
  FUNC_0(*VAR_1 >= VAR_0->sInfo.dwStart);


  (*VAR_2) = (*VAR_1) - VAR_0->sInfo.dwStart;
  (*VAR_2) *= VAR_0->sInfo.dwSampleSize;


  for (VAR_3 = 0; VAR_3 <= VAR_0->lLastFrame; VAR_3++) {
    if (VAR_0->idxFrames[VAR_3].dwChunkLength <= *VAR_2)
      (*VAR_2) -= VAR_0->idxFrames[VAR_3].dwChunkLength;
    else
      break;
  }

  *VAR_1 = VAR_3;
}
