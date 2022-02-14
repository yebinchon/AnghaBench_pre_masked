
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int Lock; TYPE_1__* Cache; } ;
struct TYPE_8__ {int Address; } ;
struct TYPE_7__ {struct TYPE_7__* Next; int Address; int * Interface; } ;
typedef int* PULONG ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef int * PIP_INTERFACE ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int KIRQL ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

PNEIGHBOR_CACHE_ENTRY FUNC_5(
  PIP_ADDRESS VAR_4,
  PIP_INTERFACE VAR_5)
{
  PNEIGHBOR_CACHE_ENTRY VAR_6;
  UINT VAR_7;
  KIRQL VAR_8;
  PIP_INTERFACE VAR_9;

  FUNC_2(VAR_0, ("Called. Address (0x%X).\n", VAR_4));

  VAR_7 = *(PULONG)&VAR_4->Address;
  VAR_7 ^= VAR_7 >> 16;
  VAR_7 ^= VAR_7 >> 8;
  VAR_7 ^= VAR_7 >> 4;
  VAR_7 &= VAR_2;

  FUNC_3(&VAR_3[VAR_7].Lock, &VAR_8);



  if (VAR_5 == ((void*)0))
  {
      VAR_9 = FUNC_1();
      VAR_5 = VAR_9;
  }
  else
  {
      VAR_9 = ((void*)0);
  }

  do
  {
      VAR_6 = VAR_3[VAR_7].Cache;
      while (VAR_6 != ((void*)0))
      {
         if (VAR_6->Interface == VAR_5 &&
             FUNC_0(VAR_4, &VAR_6->Address))
         {
             break;
         }

         VAR_6 = VAR_6->Next;
      }

      if (VAR_6 != ((void*)0))
          break;
  }
  while ((VAR_9 != ((void*)0)) &&
         ((VAR_5 = FUNC_1()) != VAR_9));

  if ((VAR_6 == ((void*)0)) && (VAR_9 != ((void*)0)))
  {

      VAR_6 = VAR_3[VAR_7].Cache;
      while (VAR_6 != ((void*)0))
      {
         if (FUNC_0(VAR_4, &VAR_6->Address))
         {
             break;
         }

         VAR_6 = VAR_6->Next;
      }
  }

  FUNC_4(&VAR_3[VAR_7].Lock, VAR_8);

  FUNC_2(VAR_1, ("Leaving.\n"));

  return VAR_6;
}
