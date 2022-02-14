
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ Id; scalar_t__ Protocol; int DstAddr; int SrcAddr; } ;
struct TYPE_12__ {int DstAddr; int SrcAddr; int Header; } ;
struct TYPE_11__ {scalar_t__ Id; scalar_t__ Protocol; } ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PIPv4_HEADER ;
typedef TYPE_3__* PIP_PACKET ;
typedef TYPE_4__* PIPDATAGRAM_REASSEMBLY ;
typedef int KIRQL ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_4__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

PIPDATAGRAM_REASSEMBLY FUNC_5(
  PIP_PACKET VAR_5)
{
  KIRQL VAR_6;
  PLIST_ENTRY VAR_7;
  PIPDATAGRAM_REASSEMBLY VAR_8;
  PIPv4_HEADER VAR_9 = (PIPv4_HEADER)VAR_5->Header;

  FUNC_2(VAR_0, ("Searching for IPDR for IP packet at (0x%X).\n", VAR_5));

  FUNC_3(&VAR_4, &VAR_6);



  VAR_7 = VAR_3.Flink;
  while (VAR_7 != &VAR_3) {
   VAR_8 = FUNC_1(VAR_7, VAR_1, VAR_2);
    if (FUNC_0(&VAR_5->SrcAddr, &VAR_8->SrcAddr) &&
      (VAR_9->Id == VAR_8->Id) &&
      (VAR_9->Protocol == VAR_8->Protocol) &&
      (FUNC_0(&VAR_5->DstAddr, &VAR_8->DstAddr))) {
      FUNC_4(&VAR_4, VAR_6);

      return VAR_8;
    }
    VAR_7 = VAR_7->Flink;
  }

  FUNC_4(&VAR_4, VAR_6);

  return ((void*)0);
}
