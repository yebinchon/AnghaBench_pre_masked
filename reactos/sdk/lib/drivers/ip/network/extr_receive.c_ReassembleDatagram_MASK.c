
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_13__ {int HeaderSize; TYPE_1__ FragmentListHead; int * IPv4Header; int DstAddr; int SrcAddr; scalar_t__ DataSize; } ;
struct TYPE_12__ {int Size; int PacketOffset; int Packet; scalar_t__ Offset; } ;
struct TYPE_11__ {int HeaderSize; scalar_t__ Data; int * Header; int MappedHeader; int (* Free ) (TYPE_2__*) ;scalar_t__ TotalSize; int DstAddr; int SrcAddr; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PIP_PACKET ;
typedef TYPE_3__* PIP_FRAGMENT ;
typedef TYPE_4__* PIPDATAGRAM_REASSEMBLY ;
typedef scalar_t__ PCHAR ;
typedef int IP_ADDRESS ;
typedef int BOOLEAN ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;

BOOLEAN
FUNC_7(
  PIP_PACKET VAR_8,
  PIPDATAGRAM_REASSEMBLY VAR_9)
{
  PLIST_ENTRY VAR_10;
  PIP_FRAGMENT VAR_11;
  PCHAR VAR_12;

  FUNC_3();

  FUNC_5(VAR_0, ("Reassembling datagram from IPDR at (0x%X).\n", VAR_9));
  FUNC_5(VAR_0, ("IPDR->HeaderSize = %d\n", VAR_9->HeaderSize));
  FUNC_5(VAR_0, ("IPDR->DataSize = %d\n", VAR_9->DataSize));

  VAR_8->TotalSize = VAR_9->HeaderSize + VAR_9->DataSize;
  VAR_8->HeaderSize = VAR_9->HeaderSize;

  FUNC_4(&VAR_8->SrcAddr, &VAR_9->SrcAddr, sizeof(IP_ADDRESS));
  FUNC_4(&VAR_8->DstAddr, &VAR_9->DstAddr, sizeof(IP_ADDRESS));


  VAR_8->Header = FUNC_2(VAR_6, VAR_8->TotalSize, VAR_5);
  if (!VAR_8->Header) {
    FUNC_5(VAR_4, ("Insufficient resources.\n"));
    (*VAR_8->Free)(VAR_8);
    return VAR_1;
  }
  VAR_8->MappedHeader = VAR_1;


  FUNC_4(VAR_8->Header, VAR_9->IPv4Header, VAR_9->HeaderSize);

  VAR_12 = (PVOID)((ULONG_PTR)VAR_8->Header + VAR_9->HeaderSize);
  VAR_8->Data = VAR_12;


  VAR_10 = VAR_9->FragmentListHead.Flink;
  while (VAR_10 != &VAR_9->FragmentListHead) {
    VAR_11 = FUNC_0(VAR_10, VAR_2, VAR_3);


    FUNC_1(VAR_12 + VAR_11->Offset,
                       VAR_11->Packet,
                       VAR_11->PacketOffset,
                       VAR_11->Size);

    VAR_10 = VAR_10->Flink;
  }

  return VAR_7;
}
