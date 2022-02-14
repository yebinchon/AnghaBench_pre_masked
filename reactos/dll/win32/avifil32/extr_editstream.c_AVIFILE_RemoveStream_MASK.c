
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dwStart; scalar_t__ dwLength; int * pStream; } ;
struct TYPE_6__ {size_t nStreams; TYPE_2__* pStreams; } ;
typedef TYPE_1__ IAVIEditStreamImpl ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__* const,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,size_t) ;

__attribute__((used)) static HRESULT FUNC_4(IAVIEditStreamImpl* const VAR_1, DWORD VAR_2)
{
  FUNC_2(VAR_1 != ((void*)0));
  FUNC_2(VAR_2 < VAR_1->nStreams);


  FUNC_1(VAR_1->pStreams[VAR_2].pStream);
  VAR_1->nStreams--;
  if (VAR_2 < VAR_1->nStreams)
    FUNC_3(&VAR_1->pStreams[VAR_2], &VAR_1->pStreams[VAR_2 + 1],
            (VAR_1->nStreams - VAR_2) * sizeof(VAR_1->pStreams[0]));
  VAR_1->pStreams[VAR_1->nStreams].pStream = ((void*)0);
  VAR_1->pStreams[VAR_1->nStreams].dwStart = 0;
  VAR_1->pStreams[VAR_1->nStreams].dwLength = 0;


  if (0 < VAR_2 && 0 < VAR_1->nStreams &&
      VAR_1->pStreams[VAR_2 - 1].pStream == VAR_1->pStreams[VAR_2].pStream) {
    if (FUNC_0(VAR_1, VAR_2 - 1) == VAR_1->pStreams[VAR_2].dwStart) {
      VAR_1->pStreams[VAR_2 - 1].dwLength += VAR_1->pStreams[VAR_2].dwLength;
      return FUNC_4(VAR_1, VAR_2);
    }
  }

  return VAR_0;
}
