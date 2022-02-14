
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwStart; } ;
struct TYPE_8__ {scalar_t__ nStreams; TYPE_2__* pStreams; TYPE_1__ sInfo; } ;
struct TYPE_7__ {scalar_t__ dwLength; scalar_t__ dwStart; int * pStream; } ;
typedef int * PAVISTREAM ;
typedef TYPE_3__ IAVIEditStreamImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__* const,scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_2(IAVIEditStreamImpl* const VAR_2,
      DWORD VAR_3,PAVISTREAM *VAR_4,
      DWORD* VAR_5,
      DWORD* VAR_6,BOOL VAR_7)
{
  DWORD VAR_8;

  FUNC_1("(%p,%u,%p,%p,%p,%d)\n",VAR_2,VAR_3,VAR_4,VAR_5,
        VAR_6,VAR_7);

  if (VAR_3 < VAR_2->sInfo.dwStart)
    return VAR_0;

  VAR_3 -= VAR_2->sInfo.dwStart;
  for (VAR_8 = 0; VAR_8 < VAR_2->nStreams; VAR_8++) {
    if (VAR_3 < VAR_2->pStreams[VAR_8].dwLength) {
      *VAR_4 = VAR_2->pStreams[VAR_8].pStream;
      *VAR_5 = VAR_2->pStreams[VAR_8].dwStart + VAR_3;
      if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_8;

      return VAR_1;
    }
    VAR_3 -= VAR_2->pStreams[VAR_8].dwLength;
  }
  if (VAR_3 == 0 && VAR_7) {
    *VAR_4 = VAR_2->pStreams[--VAR_8].pStream;
    *VAR_5 = FUNC_0(VAR_2, VAR_8);
    if (VAR_6 != ((void*)0))
      *VAR_6 = VAR_8;

    FUNC_1(" -- pos=0 && b=1 -> (%p,%u,%u)\n",*VAR_4, *VAR_5, VAR_8);
    return VAR_1;
  } else {
    *VAR_4 = ((void*)0);
    *VAR_5 = 0;
    if (VAR_6 != ((void*)0))
      *VAR_6 = 0;

    FUNC_1(" -> ERROR (NULL,0,0)\n");
    return VAR_0;
  }
}
