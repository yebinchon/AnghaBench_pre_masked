
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int Lock; } ;
struct TYPE_8__ {int Address; } ;
struct TYPE_10__ {int State; int PacketQueue; TYPE_1__ Address; } ;
struct TYPE_9__ {int Next; int Packet; int Context; int Complete; } ;
typedef int PVOID ;
typedef int* PULONG ;
typedef int PNEIGHBOR_PACKET_COMPLETE ;
typedef TYPE_2__* PNEIGHBOR_PACKET ;
typedef TYPE_3__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PNDIS_PACKET ;
typedef int NEIGHBOR_PACKET ;
typedef int KIRQL ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int VAR_7 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

BOOLEAN FUNC_6(
  PNEIGHBOR_CACHE_ENTRY VAR_8,
  PNDIS_PACKET VAR_9,
  PNEIGHBOR_PACKET_COMPLETE VAR_10,
  PVOID VAR_11)
{
  KIRQL VAR_12;
  PNEIGHBOR_PACKET VAR_13;
  UINT VAR_14;

  FUNC_3
      (VAR_0,
       ("Called. NCE (0x%X)  NdisPacket (0x%X).\n", VAR_8, VAR_9));

  VAR_13 = FUNC_0( VAR_6, sizeof(NEIGHBOR_PACKET),
                                  VAR_3 );
  if( !VAR_13 ) return VAR_1;



  VAR_14 = *(PULONG)(&VAR_8->Address.Address);
  VAR_14 ^= VAR_14 >> 16;
  VAR_14 ^= VAR_14 >> 8;
  VAR_14 ^= VAR_14 >> 4;
  VAR_14 &= VAR_2;

  FUNC_4(&VAR_5[VAR_14].Lock, &VAR_12);

  VAR_13->Complete = VAR_10;
  VAR_13->Context = VAR_11;
  VAR_13->Packet = VAR_9;
  FUNC_1( &VAR_8->PacketQueue, &VAR_13->Next );

  FUNC_5(&VAR_5[VAR_14].Lock, VAR_12);

  if( !(VAR_8->State & VAR_4) )
      FUNC_2( VAR_8 );

  return VAR_7;
}
