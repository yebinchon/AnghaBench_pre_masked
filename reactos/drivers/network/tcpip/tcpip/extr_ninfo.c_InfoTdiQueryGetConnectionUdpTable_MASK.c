
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_9__ {scalar_t__* OwningModuleInfo; scalar_t__ dwFlags; int liCreateTimestamp; int dwOwningPid; int dwLocalPort; int dwLocalAddr; } ;
struct TYPE_6__ {int IPv4Address; } ;
struct TYPE_7__ {TYPE_1__ Address; } ;
struct TYPE_8__ {scalar_t__ SubProcessTag; int CreationTime; int ProcessId; int Port; TYPE_2__ Address; } ;
typedef scalar_t__ TDI_TCPUDP_CLASS_INFO ;
typedef int TDI_STATUS ;
typedef int SIZE_T ;
typedef int PUINT ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int MIB_UDPROW_OWNER_PID ;
typedef TYPE_4__ MIB_UDPROW_OWNER_MODULE ;
typedef int MIB_UDPROW ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

TDI_STATUS FUNC_4(PADDRESS_FILE VAR_4,
        PNDIS_BUFFER VAR_5,
        PUINT VAR_6,
        TDI_TCPUDP_CLASS_INFO VAR_7)
{
    SIZE_T VAR_8;
    MIB_UDPROW_OWNER_MODULE VAR_9;
    TDI_STATUS VAR_10 = VAR_1;

    FUNC_3(VAR_0, ("Called.\n"));

    if (VAR_7 == VAR_3)
    {
        VAR_8 = sizeof(MIB_UDPROW_OWNER_PID);
    }
    else if (VAR_7 == VAR_2)
    {
        VAR_8 = sizeof(MIB_UDPROW_OWNER_MODULE);
    }
    else
    {
        VAR_8 = sizeof(MIB_UDPROW);
    }

    VAR_9.dwLocalAddr = VAR_4->Address.Address.IPv4Address;
    VAR_9.dwLocalPort = VAR_4->Port;
    VAR_9.dwOwningPid = FUNC_0(VAR_4->ProcessId);
    VAR_9.liCreateTimestamp = VAR_4->CreationTime;
    VAR_9.dwFlags = 0;
    if (VAR_7 == VAR_2)
    {
        FUNC_2(&VAR_9.OwningModuleInfo[0], sizeof(VAR_9.OwningModuleInfo));
        VAR_9.OwningModuleInfo[0] = (ULONG_PTR)VAR_4->SubProcessTag;
    }

    VAR_10 = FUNC_1( (PCHAR)&VAR_9,
     VAR_8, VAR_5, VAR_6 );

    FUNC_3(VAR_0, ("Returning %08x\n", VAR_10));

    return VAR_10;
}
