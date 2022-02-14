
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ULONG ;
typedef size_t UINT ;
struct TYPE_8__ {size_t dwStreams; } ;
struct TYPE_9__ {TYPE_2__** ppStreams; TYPE_3__ fInfo; } ;
struct TYPE_6__ {scalar_t__ fccType; } ;
struct TYPE_7__ {TYPE_1__ sInfo; } ;
typedef size_t LONG ;
typedef TYPE_4__ IAVIFileImpl ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int) ;

__attribute__((used)) static ULONG FUNC_1(const IAVIFileImpl *VAR_0, DWORD VAR_1, LONG VAR_2)
{
  UINT VAR_3;
  UINT VAR_4;


  FUNC_0(VAR_2 >= 0);

  if (VAR_1 != 0) {

    VAR_4 = (ULONG)-1;
    for (VAR_3 = 0; VAR_3 < VAR_0->fInfo.dwStreams; VAR_3++) {
      FUNC_0(VAR_0->ppStreams[VAR_3] != ((void*)0));

      if (VAR_0->ppStreams[VAR_3]->sInfo.fccType == VAR_1) {
 if (VAR_2 == 0) {
   VAR_4 = VAR_3;
   break;
 } else
   VAR_2--;
      }
    }
  } else
    VAR_4 = VAR_2;

  return VAR_4;
}
