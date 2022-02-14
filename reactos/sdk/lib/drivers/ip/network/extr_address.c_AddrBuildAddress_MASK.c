
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ AddressType; scalar_t__ AddressLength; scalar_t__ Address; } ;
struct TYPE_6__ {int sin_port; int in_addr; } ;
struct TYPE_5__ {TYPE_3__* Address; } ;
typedef int * PUSHORT ;
typedef TYPE_1__* PTRANSPORT_ADDRESS ;
typedef TYPE_2__* PTDI_ADDRESS_IP ;
typedef TYPE_3__* PTA_ADDRESS ;
typedef int PIP_ADDRESS ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

NTSTATUS FUNC_2(
    PTRANSPORT_ADDRESS VAR_5,
    PIP_ADDRESS VAR_6,
    PUSHORT VAR_7)
{
  PTDI_ADDRESS_IP VAR_8;
  PTA_ADDRESS VAR_9 = &VAR_5->Address[0];

  if (VAR_9->AddressType != VAR_4) {
      FUNC_1
   (VAR_0,("AddressType %x, Not valid\n", VAR_9->AddressType));
    return VAR_1;
  }
  if (VAR_9->AddressLength < VAR_3) {
      FUNC_1
   (VAR_0,("AddressLength %x, Not valid (expected %x)\n",
        VAR_9->AddressLength, VAR_3));
      return VAR_1;
  }


  VAR_8 = (PTDI_ADDRESS_IP)VAR_9->Address;

  FUNC_0(VAR_6, VAR_8->in_addr);
  *VAR_7 = VAR_8->sin_port;

  return VAR_2;
}
