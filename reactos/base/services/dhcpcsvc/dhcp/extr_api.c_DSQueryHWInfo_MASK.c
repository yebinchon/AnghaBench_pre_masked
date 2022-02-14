
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int AdapterIndex; } ;
struct TYPE_10__ {int dwSpeed; int dwMtu; int dwType; } ;
struct TYPE_13__ {TYPE_1__ IfMib; } ;
struct TYPE_11__ {int Speed; int Mtu; int MediaType; int AdapterIndex; } ;
struct TYPE_12__ {int Reply; TYPE_2__ QueryHWInfo; } ;
typedef int (* PipeSendFunc ) (TYPE_3__*) ;
typedef TYPE_4__* PDHCP_ADAPTER ;
typedef int DWORD ;
typedef TYPE_5__ COMM_DHCP_REQ ;
typedef TYPE_3__ COMM_DHCP_REPLY ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

DWORD FUNC_3( PipeSendFunc VAR_0, COMM_DHCP_REQ *VAR_1 ) {
    COMM_DHCP_REPLY VAR_2;
    PDHCP_ADAPTER VAR_3;

    FUNC_1();

    VAR_3 = FUNC_0( VAR_1->AdapterIndex );

    VAR_2.Reply = VAR_3 ? 1 : 0;

    if (VAR_3) {
        VAR_2.QueryHWInfo.AdapterIndex = VAR_1->AdapterIndex;
        VAR_2.QueryHWInfo.MediaType = VAR_3->IfMib.dwType;
        VAR_2.QueryHWInfo.Mtu = VAR_3->IfMib.dwMtu;
        VAR_2.QueryHWInfo.Speed = VAR_3->IfMib.dwSpeed;
    }

    FUNC_2();

    return VAR_0( &VAR_2 );
}
