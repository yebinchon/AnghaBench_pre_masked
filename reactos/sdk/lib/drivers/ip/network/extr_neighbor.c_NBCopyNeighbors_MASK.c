
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ULONG ;
typedef size_t UINT ;
struct TYPE_9__ {int IPv4Address; } ;
struct TYPE_14__ {TYPE_1__ Address; } ;
struct TYPE_13__ {int Lock; TYPE_2__* Cache; } ;
struct TYPE_12__ {int Type; int LogAddr; int PhysAddr; int AddrSize; int Index; } ;
struct TYPE_11__ {int Index; int Unicast; } ;
struct TYPE_10__ {int State; TYPE_8__ Address; int LinkAddressLength; int LinkAddress; TYPE_3__* Interface; struct TYPE_10__* Next; } ;
typedef TYPE_2__* PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_3__* PIP_INTERFACE ;
typedef TYPE_4__* PIPARP_ENTRY ;
typedef int KIRQL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*,int *) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

ULONG FUNC_4
(PIP_INTERFACE VAR_7,
 PIPARP_ENTRY VAR_8)
{
  PNEIGHBOR_CACHE_ENTRY VAR_9;
  KIRQL VAR_10;
  UINT VAR_11 = 0, VAR_12;

  for (VAR_12 = 0; VAR_12 <= VAR_3; VAR_12++) {
      FUNC_2(&VAR_6[VAR_12].Lock, &VAR_10);
      for( VAR_9 = VAR_6[VAR_12].Cache;
    VAR_9;
    VAR_9 = VAR_9->Next ) {
   if( VAR_9->Interface == VAR_7 &&
              !FUNC_0( &VAR_9->Address, &VAR_9->Interface->Unicast ) ) {
       if( VAR_8 ) {
    VAR_8[VAR_11].Index = VAR_7->Index;
    VAR_8[VAR_11].AddrSize = VAR_9->LinkAddressLength;
    FUNC_1
        (VAR_8[VAR_11].PhysAddr,
         VAR_9->LinkAddress,
         VAR_9->LinkAddressLength);
    VAR_8[VAR_11].LogAddr = VAR_9->Address.Address.IPv4Address;
    if( VAR_9->State & VAR_5 )
        VAR_8[VAR_11].Type = VAR_2;
    else if( VAR_9->State & VAR_4 )
        VAR_8[VAR_11].Type = VAR_1;
    else
        VAR_8[VAR_11].Type = VAR_0;
       }
       VAR_11++;
   }
      }
      FUNC_3(&VAR_6[VAR_12].Lock, VAR_10);
  }

  return VAR_11;
}
