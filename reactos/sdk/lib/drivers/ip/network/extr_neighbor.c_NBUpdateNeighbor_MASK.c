
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int Lock; } ;
struct TYPE_6__ {int Address; } ;
struct TYPE_7__ {int State; scalar_t__ EventTimer; scalar_t__ EventCount; int LinkAddressLength; int LinkAddress; TYPE_1__ Address; } ;
typedef int PVOID ;
typedef int* PULONG ;
typedef TYPE_2__* PNEIGHBOR_CACHE_ENTRY ;
typedef int KIRQL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

VOID FUNC_5(
  PNEIGHBOR_CACHE_ENTRY VAR_5,
  PVOID VAR_6,
  UCHAR VAR_7)
{
    KIRQL VAR_8;
    UINT VAR_9;

    FUNC_2(VAR_1, ("Called. NCE (0x%X)  LinkAddress (0x%X)  State (0x%X).\n", VAR_5, VAR_6, VAR_7));

    VAR_9 = *(PULONG)(&VAR_5->Address.Address);
    VAR_9 ^= VAR_9 >> 16;
    VAR_9 ^= VAR_9 >> 8;
    VAR_9 ^= VAR_9 >> 4;
    VAR_9 &= VAR_2;

    FUNC_3(&VAR_4[VAR_9].Lock, &VAR_8);

    FUNC_1(VAR_5->LinkAddress, VAR_6, VAR_5->LinkAddressLength);
    VAR_5->State = VAR_7;
    VAR_5->EventCount = 0;

    FUNC_4(&VAR_4[VAR_9].Lock, VAR_8);

    if( !(VAR_5->State & VAR_3) )
    {
        if (VAR_5->EventTimer) VAR_5->EventTimer = VAR_0;
        FUNC_0( VAR_5 );
    }
}
