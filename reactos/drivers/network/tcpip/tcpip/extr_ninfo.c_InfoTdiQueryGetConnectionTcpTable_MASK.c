
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_20__ {int * SocketContext; } ;
struct TYPE_19__ {scalar_t__* OwningModuleInfo; int dwState; void* dwRemotePort; int dwRemoteAddr; void* dwLocalPort; int dwLocalAddr; int liCreateTimestamp; int dwOwningPid; } ;
struct TYPE_13__ {int IPv4Address; } ;
struct TYPE_14__ {TYPE_2__ Address; } ;
struct TYPE_18__ {scalar_t__ SubProcessTag; TYPE_9__* Connection; void* Port; TYPE_3__ Address; TYPE_1__* Listener; int CreationTime; int ProcessId; } ;
struct TYPE_17__ {int TAAddressCount; TYPE_5__* Address; } ;
struct TYPE_16__ {scalar_t__ AddressLength; TYPE_4__* Address; } ;
struct TYPE_15__ {int sin_port; int in_addr; } ;
struct TYPE_12__ {TYPE_7__* AddressFile; } ;
typedef scalar_t__ TDI_TCPUDP_CLASS_INFO ;
typedef int TDI_STATUS ;
typedef TYPE_6__ TA_IP_ADDRESS ;
typedef int SIZE_T ;
typedef int PUINT ;
typedef int PTRANSPORT_ADDRESS ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef TYPE_7__* PADDRESS_FILE ;
typedef int MIB_TCPROW_OWNER_PID ;
typedef TYPE_8__ MIB_TCPROW_OWNER_MODULE ;
typedef int MIB_TCPROW ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (TYPE_9__*,int ,int ) ;
 int FUNC_6 (TYPE_9__*,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_8 (int ) ;

TDI_STATUS FUNC_9(PADDRESS_FILE VAR_9,
        PNDIS_BUFFER VAR_10,
        PUINT VAR_11,
                    TDI_TCPUDP_CLASS_INFO VAR_12)
{
    SIZE_T VAR_13;
    MIB_TCPROW_OWNER_MODULE VAR_14;
    TDI_STATUS VAR_15 = VAR_4;

    FUNC_7(VAR_0, ("Called.\n"));

    if (VAR_12 == VAR_8)
    {
        VAR_13 = sizeof(MIB_TCPROW_OWNER_PID);
    }
    else if (VAR_12 == VAR_7)
    {
        VAR_13 = sizeof(MIB_TCPROW_OWNER_MODULE);
    }
    else
    {
        VAR_13 = sizeof(MIB_TCPROW);
    }

    VAR_14.dwOwningPid = FUNC_1(VAR_9->ProcessId);
    VAR_14.liCreateTimestamp = VAR_9->CreationTime;

    if (VAR_9->Listener != ((void*)0))
    {
        PADDRESS_FILE VAR_16;

        VAR_16 = VAR_9->Listener->AddressFile;

        VAR_14.dwState = VAR_2;
        VAR_14.dwLocalAddr = VAR_9->Address.Address.IPv4Address;
        VAR_14.dwLocalPort = VAR_9->Port;
        VAR_14.dwRemoteAddr = VAR_16->Address.Address.IPv4Address;
        VAR_14.dwRemotePort = VAR_16->Port;

        VAR_15 = VAR_5;
    }
    else if (VAR_9->Connection != ((void*)0) &&
             VAR_9->Connection->SocketContext != ((void*)0))
    {
        TA_IP_ADDRESS VAR_17;

        VAR_15 = FUNC_5(VAR_9->Connection, (PTRANSPORT_ADDRESS)&VAR_17, VAR_1);
        if (FUNC_3(VAR_15))
        {
            FUNC_0(VAR_17.TAAddressCount >= 1);
            FUNC_0(VAR_17.Address[0].AddressLength == VAR_3);
            VAR_14.dwLocalAddr = VAR_17.Address[0].Address[0].in_addr;
            VAR_14.dwLocalPort = FUNC_8(VAR_17.Address[0].Address[0].sin_port);

            VAR_15 = FUNC_5(VAR_9->Connection, (PTRANSPORT_ADDRESS)&VAR_17, VAR_6);
            if (FUNC_3(VAR_15))
            {
                FUNC_0(VAR_17.TAAddressCount >= 1);
                FUNC_0(VAR_17.Address[0].AddressLength == VAR_3);
                VAR_14.dwRemoteAddr = VAR_17.Address[0].Address[0].in_addr;
                VAR_14.dwRemotePort = FUNC_8(VAR_17.Address[0].Address[0].sin_port);

                VAR_15 = FUNC_6(VAR_9->Connection, &VAR_14.dwState);
                FUNC_0(FUNC_3(VAR_15));
            }
        }
    }

    if (FUNC_3(VAR_15))
    {
        if (VAR_12 == VAR_7)
        {
            FUNC_4(&VAR_14.OwningModuleInfo[0], sizeof(VAR_14.OwningModuleInfo));
            VAR_14.OwningModuleInfo[0] = (ULONG_PTR)VAR_9->SubProcessTag;
        }

        VAR_15 = FUNC_2( (PCHAR)&VAR_14, VAR_13,
                              VAR_10, VAR_11 );
    }

    FUNC_7(VAR_0, ("Returning %08x\n", VAR_15));

    return VAR_15;
}
