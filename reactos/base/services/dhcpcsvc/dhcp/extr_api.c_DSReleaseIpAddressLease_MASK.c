
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct protocol {int dummy; } ;
struct TYPE_16__ {scalar_t__ dwForwardNextHop; } ;
struct TYPE_15__ {TYPE_1__* client; } ;
struct TYPE_14__ {int AdapterIndex; } ;
struct TYPE_13__ {TYPE_6__ DhclientInfo; TYPE_7__ RouterMib; scalar_t__ NteContext; } ;
struct TYPE_12__ {int Reply; } ;
struct TYPE_11__ {int state; int * active; } ;
typedef int (* PipeSendFunc ) (TYPE_2__*) ;
typedef TYPE_3__* PDHCP_ADAPTER ;
typedef int DWORD ;
typedef TYPE_4__ COMM_DHCP_REQ ;
typedef TYPE_2__ COMM_DHCP_REPLY ;


 TYPE_3__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_7__*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 struct protocol* FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (struct protocol*) ;

DWORD FUNC_8( PipeSendFunc VAR_2, COMM_DHCP_REQ *VAR_3 ) {
    COMM_DHCP_REPLY VAR_4;
    PDHCP_ADAPTER VAR_5;
    struct protocol* VAR_6;

    FUNC_1();

    VAR_5 = FUNC_0( VAR_3->AdapterIndex );

    VAR_4.Reply = VAR_5 ? 1 : 0;

    if( VAR_5 ) {
        if (VAR_5->NteContext)
        {
            FUNC_3( VAR_5->NteContext );
            VAR_5->NteContext = 0;
        }
        if (VAR_5->RouterMib.dwForwardNextHop)
        {
            FUNC_4( &VAR_5->RouterMib );
            VAR_5->RouterMib.dwForwardNextHop = 0;
        }

        VAR_6 = FUNC_6( &VAR_5->DhclientInfo );
        if (VAR_6)
           FUNC_7(VAR_6);

        VAR_5->DhclientInfo.client->active = ((void*)0);
        VAR_5->DhclientInfo.client->state = VAR_1;

        if (VAR_0 != ((void*)0))
            FUNC_5(VAR_0);
    }

    FUNC_2();

    return VAR_2( &VAR_4 );
}
