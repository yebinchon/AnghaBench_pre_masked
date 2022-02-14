
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_11__ {scalar_t__ IPv4Header; int Packet; scalar_t__ ReturnPacket; TYPE_1__ FragmentListHead; TYPE_1__ HoleListHead; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PIP_FRAGMENT ;
typedef TYPE_2__* PIPDATAGRAM_REASSEMBLY ;
typedef TYPE_2__* PIPDATAGRAM_HOLE ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;

VOID FUNC_7(
  PIPDATAGRAM_REASSEMBLY VAR_8)





{
  PLIST_ENTRY VAR_9;
  PLIST_ENTRY VAR_10;
  PIPDATAGRAM_HOLE VAR_11;
  PIP_FRAGMENT VAR_12;

  FUNC_6(VAR_0, ("Freeing IP datagram reassembly descriptor (0x%X).\n", VAR_8));


  VAR_9 = VAR_8->HoleListHead.Flink;
  while (VAR_9 != &VAR_8->HoleListHead) {
    VAR_10 = VAR_9->Flink;
   VAR_11 = FUNC_0(VAR_9, VAR_1, VAR_6);

    FUNC_5(VAR_9);

    FUNC_6(VAR_0, ("Freeing hole descriptor at (0x%X).\n", VAR_11));


    FUNC_2(&VAR_4, VAR_11);

    VAR_9 = VAR_10;
  }


  VAR_9 = VAR_8->FragmentListHead.Flink;
  while (VAR_9 != &VAR_8->FragmentListHead) {
    VAR_10 = VAR_9->Flink;
   VAR_12 = FUNC_0(VAR_9, VAR_5, VAR_6);

    FUNC_5(VAR_9);

    FUNC_6(VAR_0, ("Freeing fragment packet at (0x%X).\n", VAR_12->Packet));


    if (VAR_12->ReturnPacket)
    {
        FUNC_4(&VAR_12->Packet, 1);
    }
    else
    {
        FUNC_3(VAR_12->Packet);
    }

    FUNC_6(VAR_0, ("Freeing fragment at (0x%X).\n", VAR_12));


    FUNC_2(&VAR_3, VAR_12);
    VAR_9 = VAR_10;
  }

  if (VAR_8->IPv4Header)
  {
      FUNC_6(VAR_0, ("Freeing IPDR header at (0x%X).\n", VAR_8->IPv4Header));
      FUNC_1(VAR_8->IPv4Header, VAR_7);
  }

  FUNC_6(VAR_0, ("Freeing IPDR data at (0x%X).\n", VAR_8));

  FUNC_2(&VAR_2, VAR_8);
}
