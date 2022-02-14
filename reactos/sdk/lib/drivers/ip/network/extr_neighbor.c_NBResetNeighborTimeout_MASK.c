
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_9__ {int Lock; TYPE_1__* Cache; } ;
struct TYPE_8__ {int Address; } ;
struct TYPE_7__ {scalar_t__ EventCount; int Address; struct TYPE_7__* Next; } ;
typedef int* PULONG ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int KIRQL ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

VOID
FUNC_5(PIP_ADDRESS VAR_3)
{
    KIRQL VAR_4;
    UINT VAR_5;
    PNEIGHBOR_CACHE_ENTRY VAR_6;

    FUNC_2(VAR_0, ("Resetting NCE timout for 0x%s\n", FUNC_0(VAR_3)));

    VAR_5 = *(PULONG)(&VAR_3->Address);
    VAR_5 ^= VAR_5 >> 16;
    VAR_5 ^= VAR_5 >> 8;
    VAR_5 ^= VAR_5 >> 4;
    VAR_5 &= VAR_1;

    FUNC_3(&VAR_2[VAR_5].Lock, &VAR_4);

    for (VAR_6 = VAR_2[VAR_5].Cache;
         VAR_6 != ((void*)0);
         VAR_6 = VAR_6->Next)
    {
         if (FUNC_1(VAR_3, &VAR_6->Address))
         {
             VAR_6->EventCount = 0;
             break;
         }
    }

    FUNC_4(&VAR_2[VAR_5].Lock, VAR_4);
}
