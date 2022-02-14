
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_4__ {size_t NumCoders; int * UnpackSizes; int * PackStreams; int * BindPairs; int * Coders; } ;
typedef int ISzAlloc ;
typedef TYPE_1__ CSzFolder ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(CSzFolder *VAR_0, ISzAlloc *VAR_1)
{
  UInt32 VAR_2;
  if (VAR_0->Coders)
    for (VAR_2 = 0; VAR_2 < VAR_0->NumCoders; VAR_2++)
      FUNC_1(&VAR_0->Coders[VAR_2], VAR_1);
  FUNC_0(VAR_1, VAR_0->Coders);
  FUNC_0(VAR_1, VAR_0->BindPairs);
  FUNC_0(VAR_1, VAR_0->PackStreams);
  FUNC_0(VAR_1, VAR_0->UnpackSizes);
  FUNC_2(VAR_0);
}
