
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_14__ {int Lock; } ;
struct TYPE_13__ {TYPE_3__* Context; int DLComplete; } ;
struct TYPE_9__ {int Address; } ;
struct TYPE_12__ {int State; int LinkAddress; TYPE_2__* Interface; int PacketQueue; TYPE_1__ Address; } ;
struct TYPE_11__ {int Packet; } ;
struct TYPE_10__ {int Context; int (* Transmit ) (int ,int ,int ,int ,int ) ;} ;
typedef int* PULONG ;
typedef TYPE_3__* PNEIGHBOR_PACKET ;
typedef TYPE_4__* PNEIGHBOR_CACHE_ENTRY ;
typedef int * PLIST_ENTRY ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

VOID FUNC_6( PNEIGHBOR_CACHE_ENTRY VAR_8 ) {
    PLIST_ENTRY VAR_9;
    PNEIGHBOR_PACKET VAR_10;
    UINT VAR_11;

    FUNC_0(!(VAR_8->State & VAR_5));

    VAR_11 = *(PULONG)(&VAR_8->Address.Address);
    VAR_11 ^= VAR_11 >> 16;
    VAR_11 ^= VAR_11 >> 8;
    VAR_11 ^= VAR_11 >> 4;
    VAR_11 &= VAR_3;


    while ((VAR_9 = FUNC_2(&VAR_8->PacketQueue,
                                              &VAR_6[VAR_11].Lock)) != ((void*)0))
    {
 VAR_10 = FUNC_1( VAR_9, VAR_4, VAR_7 );

 FUNC_4
     (VAR_1,
      ("PacketEntry: %x, NdisPacket %x\n",
       VAR_9, VAR_10->Packet));

 FUNC_3(VAR_10->Packet)->DLComplete = VAR_2;
 FUNC_3(VAR_10->Packet)->Context = VAR_10;

 VAR_8->Interface->Transmit
     ( VAR_8->Interface->Context,
       VAR_10->Packet,
       0,
       VAR_8->LinkAddress,
       VAR_0 );
    }
}
