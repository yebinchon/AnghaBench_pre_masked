
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct ip_addr {int addr; } ;
struct TYPE_11__ {int TAAddressCount; TYPE_2__* Address; } ;
struct TYPE_10__ {scalar_t__ RemoteAddress; } ;
struct TYPE_9__ {int RequestFlags; scalar_t__ ReturnConnectionInformation; } ;
struct TYPE_8__ {TYPE_1__* Address; int AddressType; int AddressLength; } ;
struct TYPE_7__ {int in_addr; int sin_port; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_3__* PTDI_REQUEST_KERNEL ;
typedef TYPE_4__* PTDI_CONNECTION_INFORMATION ;
typedef TYPE_5__* PTA_IP_ADDRESS ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tcp_pcb*,struct ip_addr*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS FUNC_3(PVOID VAR_3,
                               PTDI_REQUEST_KERNEL VAR_4)
{
    struct tcp_pcb *VAR_5 = (struct tcp_pcb*)VAR_3;
    NTSTATUS VAR_6;
    PTDI_CONNECTION_INFORMATION VAR_7;
    PTA_IP_ADDRESS VAR_8;
    struct ip_addr VAR_9;

    if (VAR_4->RequestFlags & VAR_2)
        FUNC_0("TDI_QUERY_ACCEPT NOT SUPPORTED!!!\n");

    VAR_7 = (PTDI_CONNECTION_INFORMATION)VAR_4->ReturnConnectionInformation;
    VAR_8 = (PTA_IP_ADDRESS)VAR_7->RemoteAddress;

    VAR_8->TAAddressCount = 1;
    VAR_8->Address[0].AddressLength = VAR_0;
    VAR_8->Address[0].AddressType = VAR_1;

    VAR_6 = FUNC_2(FUNC_1(VAR_5,
                                                 &VAR_9,
                                                 &VAR_8->Address[0].Address[0].sin_port));

    VAR_8->Address[0].Address[0].in_addr = VAR_9.addr;

    return VAR_6;
}
