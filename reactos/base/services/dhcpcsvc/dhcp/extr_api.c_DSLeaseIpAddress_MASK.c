
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct protocol {int dummy; } ;
struct TYPE_16__ {TYPE_1__* client; int rfdesc; int name; } ;
struct TYPE_15__ {int AdapterIndex; } ;
struct TYPE_14__ {TYPE_6__ DhclientInfo; } ;
struct TYPE_13__ {int Reply; } ;
struct TYPE_12__ {int state; } ;
typedef int (* PipeSendFunc ) (TYPE_2__*) ;
typedef TYPE_3__* PDHCP_ADAPTER ;
typedef int DWORD ;
typedef TYPE_4__ COMM_DHCP_REQ ;
typedef TYPE_2__ COMM_DHCP_REPLY ;


 TYPE_3__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,TYPE_6__*) ;
 struct protocol* FUNC_5 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_6 (struct protocol*) ;
 int FUNC_7 (TYPE_6__*) ;

DWORD FUNC_8( PipeSendFunc VAR_3, COMM_DHCP_REQ *VAR_4 ) {
    COMM_DHCP_REPLY VAR_5;
    PDHCP_ADAPTER VAR_6;
    struct protocol* VAR_7;

    FUNC_1();

    VAR_6 = FUNC_0( VAR_4->AdapterIndex );

    VAR_5.Reply = VAR_6 ? 1 : 0;

    if( VAR_6 ) {
        VAR_7 = FUNC_5( &VAR_6->DhclientInfo );
        if (VAR_7)
            FUNC_6(VAR_7);

        FUNC_4( VAR_6->DhclientInfo.name,
                      VAR_6->DhclientInfo.rfdesc, VAR_2,
                      &VAR_6->DhclientInfo );

        VAR_6->DhclientInfo.client->state = VAR_1;
        FUNC_7(&VAR_6->DhclientInfo);

        if (VAR_0 != ((void*)0))
            FUNC_3(VAR_0);
    }

    FUNC_2();

    return VAR_3( &VAR_5 );
}
