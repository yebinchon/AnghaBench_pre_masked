
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct protocol {int dummy; } ;
struct TYPE_18__ {scalar_t__ dwForwardNextHop; } ;
struct TYPE_13__ {int Netmask; int IPAddress; } ;
struct TYPE_14__ {TYPE_2__ StaticRefreshParams; } ;
struct TYPE_17__ {int AdapterIndex; TYPE_3__ Body; } ;
struct TYPE_12__ {int state; } ;
struct TYPE_16__ {int NteInstance; scalar_t__ NteContext; int DhclientInfo; TYPE_1__ DhclientState; TYPE_8__ RouterMib; } ;
struct TYPE_15__ {int Reply; } ;
typedef int (* PipeSendFunc ) (TYPE_4__*) ;
typedef TYPE_5__* PDHCP_ADAPTER ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef TYPE_6__ COMM_DHCP_REQ ;
typedef TYPE_4__ COMM_DHCP_REPLY ;


 TYPE_5__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 struct protocol* FUNC_8 (int *) ;
 int FUNC_9 (struct protocol*) ;

DWORD FUNC_10( PipeSendFunc VAR_2, COMM_DHCP_REQ *VAR_3 ) {
    NTSTATUS VAR_4;
    COMM_DHCP_REPLY VAR_5;
    PDHCP_ADAPTER VAR_6;
    struct protocol* VAR_7;

    FUNC_2();

    VAR_6 = FUNC_0( VAR_3->AdapterIndex );

    VAR_5.Reply = VAR_6 ? 1 : 0;

    if( VAR_6 ) {
        if (VAR_6->NteContext)
        {
            FUNC_4( VAR_6->NteContext );
            VAR_6->NteContext = 0;
        }
        if (VAR_6->RouterMib.dwForwardNextHop)
        {
            FUNC_5( &VAR_6->RouterMib );
            VAR_6->RouterMib.dwForwardNextHop = 0;
        }

        VAR_6->DhclientState.state = VAR_1;
        VAR_7 = FUNC_8( &VAR_6->DhclientInfo );
        if (VAR_7)
            FUNC_9(VAR_7);
        VAR_4 = FUNC_1( VAR_3->Body.StaticRefreshParams.IPAddress,
                               VAR_3->Body.StaticRefreshParams.Netmask,
                               VAR_3->AdapterIndex,
                               &VAR_6->NteContext,
                               &VAR_6->NteInstance );
        VAR_5.Reply = FUNC_6(VAR_4);

        if (VAR_0 != ((void*)0))
            FUNC_7(VAR_0);
    }

    FUNC_3();

    return VAR_2( &VAR_5 );
}
