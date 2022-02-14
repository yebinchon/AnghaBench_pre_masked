
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int AdapterIndex; } ;
struct TYPE_14__ {scalar_t__ state; TYPE_2__* active; } ;
struct TYPE_17__ {TYPE_3__ DhclientState; } ;
struct TYPE_15__ {int DhcpEnabled; scalar_t__ LeaseExpires; scalar_t__ LeaseObtained; void* DhcpServer; } ;
struct TYPE_16__ {int Reply; TYPE_4__ GetAdapterInfo; } ;
struct TYPE_12__ {int len; int iabuf; } ;
struct TYPE_13__ {scalar_t__ expiry; scalar_t__ obtained; TYPE_1__ serveraddress; } ;
typedef int (* PipeSendFunc ) (TYPE_5__*) ;
typedef TYPE_6__* PDHCP_ADAPTER ;
typedef int DWORD ;
typedef TYPE_7__ COMM_DHCP_REQ ;
typedef TYPE_5__ COMM_DHCP_REPLY ;


 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void**,int ,int) ;

DWORD FUNC_6( PipeSendFunc VAR_3, COMM_DHCP_REQ *VAR_4 ) {
    COMM_DHCP_REPLY VAR_5;
    PDHCP_ADAPTER VAR_6;

    FUNC_1();

    VAR_6 = FUNC_0( VAR_4->AdapterIndex );

    VAR_5.Reply = VAR_6 ? 1 : 0;

    if( VAR_6 ) {
        VAR_5.GetAdapterInfo.DhcpEnabled = (VAR_2 != VAR_6->DhclientState.state);
        if (VAR_1 == VAR_6->DhclientState.state) {
            if (sizeof(VAR_5.GetAdapterInfo.DhcpServer) ==
                VAR_6->DhclientState.active->serveraddress.len) {
                FUNC_5(&VAR_5.GetAdapterInfo.DhcpServer,
                       VAR_6->DhclientState.active->serveraddress.iabuf,
                       VAR_6->DhclientState.active->serveraddress.len);
            } else {
                FUNC_3("Unexpected server address len %d\n",
                        VAR_6->DhclientState.active->serveraddress.len);
                VAR_5.GetAdapterInfo.DhcpServer = FUNC_4(VAR_0);
            }
            VAR_5.GetAdapterInfo.LeaseObtained = VAR_6->DhclientState.active->obtained;
            VAR_5.GetAdapterInfo.LeaseExpires = VAR_6->DhclientState.active->expiry;
        } else {
            VAR_5.GetAdapterInfo.DhcpServer = FUNC_4(VAR_0);
            VAR_5.GetAdapterInfo.LeaseObtained = 0;
            VAR_5.GetAdapterInfo.LeaseExpires = 0;
        }
    }

    FUNC_2();

    return VAR_3( &VAR_5 );
}
