
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* client; int name; } ;
struct TYPE_9__ {int state; int * config; } ;
struct TYPE_8__ {scalar_t__ bDescr; } ;
struct TYPE_12__ {TYPE_4__ DhclientInfo; TYPE_2__ DhclientState; TYPE_1__ IfMib; int DhclientConfig; } ;
struct TYPE_10__ {int state; } ;
typedef TYPE_5__* PDHCP_ADAPTER ;
typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__,char*,int *,int *,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;

BOOL FUNC_5( PDHCP_ADAPTER VAR_4 ) {
    HKEY VAR_5;
    DWORD VAR_6 = VAR_0, VAR_7, VAR_8 = sizeof(DWORD);

    VAR_4->DhclientState.config = &VAR_4->DhclientConfig;
    FUNC_4(VAR_4->DhclientInfo.name, (char*)VAR_4->IfMib.bDescr,
            sizeof(VAR_4->DhclientInfo.name));

    VAR_5 = FUNC_2( VAR_4 );
    if( VAR_5 )
    {
        VAR_6 = FUNC_3(VAR_5, "EnableDHCP", ((void*)0), ((void*)0), (LPBYTE)&VAR_7, &VAR_8);

        if (VAR_6 != VAR_0 || VAR_8 != sizeof(DWORD))
            VAR_7 = 1;

        FUNC_0(VAR_5);
    }
    else
    {

        VAR_7 = 1;
    }

    if( !VAR_7 ) {

        FUNC_1("DHCPCSVC: Adapter Name: [%s] (static)\n", VAR_4->DhclientInfo.name);

        VAR_4->DhclientState.state = VAR_2;
    } else {

        FUNC_1("DHCPCSVC: Adapter Name: [%s] (dynamic)\n", VAR_4->DhclientInfo.name);

 VAR_4->DhclientInfo.client->state = VAR_1;
    }

    return VAR_3;
}
