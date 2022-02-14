
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
typedef void* UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int Lock; TYPE_1__* Cache; } ;
struct TYPE_8__ {int Address; } ;
struct TYPE_7__ {struct TYPE_7__* Next; int PacketQueue; scalar_t__ EventCount; void* EventTimer; int State; scalar_t__ LinkAddress; void* LinkAddressLength; TYPE_2__ Address; int Interface; } ;
typedef scalar_t__ PVOID ;
typedef int* PULONG ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PIP_INTERFACE ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int NEIGHBOR_CACHE_ENTRY ;
typedef int KIRQL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,scalar_t__,void*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (scalar_t__,int,void*) ;

PNEIGHBOR_CACHE_ENTRY FUNC_7(
  PIP_INTERFACE VAR_7,
  PIP_ADDRESS VAR_8,
  PVOID VAR_9,
  UINT VAR_10,
  UCHAR VAR_11,
  UINT VAR_12)
{
  PNEIGHBOR_CACHE_ENTRY VAR_13;
  ULONG VAR_14;
  KIRQL VAR_15;

  FUNC_3
      (VAR_0,
       ("Called. Interface (0x%X)  Address (0x%X)  "
 "LinkAddress (0x%X)  LinkAddressLength (%d)  State (0x%X)\n",
 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));

  VAR_13 = FUNC_0
      (VAR_6, sizeof(NEIGHBOR_CACHE_ENTRY) + VAR_10,
       VAR_4);
  if (VAR_13 == ((void*)0))
    {
      FUNC_3(VAR_2, ("Insufficient resources.\n"));
      return ((void*)0);
    }

  VAR_13->Interface = VAR_7;
  VAR_13->Address = *VAR_8;
  VAR_13->LinkAddressLength = VAR_10;
  VAR_13->LinkAddress = (PVOID)&VAR_13[1];
  if( VAR_9 )
      FUNC_2(VAR_13->LinkAddress, VAR_9, VAR_10);
  else
      FUNC_6(VAR_13->LinkAddress, 0xff, VAR_10);
  VAR_13->State = VAR_11;
  VAR_13->EventTimer = VAR_12;
  VAR_13->EventCount = 0;
  FUNC_1( &VAR_13->PacketQueue );

  FUNC_3(VAR_1,("NCE: %x\n", VAR_13));

  VAR_14 = *(PULONG)&VAR_8->Address;
  VAR_14 ^= VAR_14 >> 16;
  VAR_14 ^= VAR_14 >> 8;
  VAR_14 ^= VAR_14 >> 4;
  VAR_14 &= VAR_3;

  FUNC_4(&VAR_5[VAR_14].Lock, &VAR_15);

  VAR_13->Next = VAR_5[VAR_14].Cache;
  VAR_5[VAR_14].Cache = VAR_13;

  FUNC_5(&VAR_5[VAR_14].Lock, VAR_15);

  return VAR_13;
}
