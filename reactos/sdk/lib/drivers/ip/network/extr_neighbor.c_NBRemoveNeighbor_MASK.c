
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_9__ {int Lock; TYPE_2__* Cache; } ;
struct TYPE_7__ {int Address; } ;
struct TYPE_8__ {struct TYPE_8__* Next; TYPE_1__ Address; } ;
typedef int* PULONG ;
typedef TYPE_2__* PNEIGHBOR_CACHE_ENTRY ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

VOID FUNC_5(
  PNEIGHBOR_CACHE_ENTRY VAR_5)







{
  PNEIGHBOR_CACHE_ENTRY *VAR_6;
  PNEIGHBOR_CACHE_ENTRY VAR_7;
  ULONG VAR_8;
  KIRQL VAR_9;

  FUNC_2(VAR_0, ("Called. NCE (0x%X).\n", VAR_5));

  VAR_8 = *(PULONG)(&VAR_5->Address.Address);
  VAR_8 ^= VAR_8 >> 16;
  VAR_8 ^= VAR_8 >> 8;
  VAR_8 ^= VAR_8 >> 4;
  VAR_8 &= VAR_1;

  FUNC_3(&VAR_4[VAR_8].Lock, &VAR_9);


  for (VAR_6 = &VAR_4[VAR_8].Cache;
    (VAR_7 = *VAR_6) != ((void*)0);
    VAR_6 = &VAR_7->Next)
    {
      if (VAR_7 == VAR_5)
        {

          *VAR_6 = VAR_7->Next;

   FUNC_1( VAR_7, VAR_3 );
          FUNC_0(VAR_7, VAR_2);

   break;
        }
    }

  FUNC_4(&VAR_4[VAR_8].Lock, VAR_9);
}
