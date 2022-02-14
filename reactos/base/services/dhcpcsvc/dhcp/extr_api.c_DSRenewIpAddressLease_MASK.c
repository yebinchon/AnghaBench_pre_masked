
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct protocol {int dummy; } ;
struct TYPE_18__ {TYPE_2__* client; int rfdesc; int name; } ;
struct TYPE_17__ {int AdapterIndex; } ;
struct TYPE_13__ {scalar_t__ state; } ;
struct TYPE_16__ {TYPE_7__ DhclientInfo; TYPE_1__ DhclientState; } ;
struct TYPE_15__ {int Reply; } ;
struct TYPE_14__ {int state; } ;
typedef int (* PipeSendFunc ) (TYPE_3__*) ;
typedef TYPE_4__* PDHCP_ADAPTER ;
typedef int DWORD ;
typedef TYPE_5__ COMM_DHCP_REQ ;
typedef TYPE_3__ COMM_DHCP_REPLY ;


 TYPE_4__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,TYPE_7__*) ;
 struct protocol* FUNC_5 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_6 (struct protocol*) ;
 int FUNC_7 (TYPE_7__*) ;

DWORD FUNC_8( PipeSendFunc VAR_4, COMM_DHCP_REQ *VAR_5 ) {
    COMM_DHCP_REPLY VAR_6;
    PDHCP_ADAPTER VAR_7;
    struct protocol* VAR_8;

    FUNC_1();

    VAR_7 = FUNC_0( VAR_5->AdapterIndex );

    if( !VAR_7 || VAR_7->DhclientState.state == VAR_2 ) {
        VAR_6.Reply = 0;
        FUNC_2();
        return VAR_4( &VAR_6 );
    }

    VAR_6.Reply = 1;

    VAR_8 = FUNC_5( &VAR_7->DhclientInfo );
    if (VAR_8)
        FUNC_6(VAR_8);

    FUNC_4( VAR_7->DhclientInfo.name,
                  VAR_7->DhclientInfo.rfdesc, VAR_3,
                  &VAR_7->DhclientInfo );

    VAR_7->DhclientInfo.client->state = VAR_1;
    FUNC_7(&VAR_7->DhclientInfo);

    if (VAR_0 != ((void*)0))
        FUNC_3(VAR_0);

    FUNC_2();

    return VAR_4( &VAR_6 );
}
