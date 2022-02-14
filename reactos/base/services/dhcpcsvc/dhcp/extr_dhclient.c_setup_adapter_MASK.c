
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct iaddr {scalar_t__ iabuf; } ;
struct TYPE_13__ {scalar_t__ iabuf; } ;
struct client_lease {TYPE_3__* options; TYPE_6__ address; } ;
typedef scalar_t__ ULONG ;
struct TYPE_14__ {int dwForwardMetric1; scalar_t__ dwForwardNextHop; int dwForwardIfIndex; scalar_t__ dwForwardMask; scalar_t__ dwForwardDest; } ;
struct TYPE_10__ {int dwIndex; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_12__ {TYPE_7__ RouterMib; TYPE_2__ IfMib; int NteInstance; int NteContext; TYPE_1__ DhclientInfo; } ;
struct TYPE_11__ {int len; int* data; } ;
typedef TYPE_4__* PDHCP_ADAPTER ;
typedef int NTSTATUS ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef int DWORD ;
typedef char CHAR ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int *,int *) ;
 int FUNC_1 (TYPE_7__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int ,int **) ;
 int FUNC_7 (int *,char*,int ,int ,int ,int) ;
 int FUNC_8 (scalar_t__,int*,int) ;
 char* FUNC_9 (TYPE_6__) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;

void FUNC_14( PDHCP_ADAPTER VAR_7, struct client_lease *VAR_8 ) {
    CHAR VAR_9[200] = "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\Interfaces\\";
    struct iaddr VAR_10;
    HKEY VAR_11;
    int VAR_12;
    DWORD VAR_13;

    FUNC_11(VAR_9, VAR_7->DhclientInfo.name);
    if (FUNC_6(VAR_3, VAR_9, 0, VAR_4, &VAR_11) != VAR_2)
        VAR_11 = ((void*)0);


    if( VAR_7->NteContext )
    {
        FUNC_2( VAR_7->NteContext );
        VAR_7->NteContext = 0;
    }


    if( VAR_8->options[VAR_1].len ) {
        NTSTATUS VAR_14;

        FUNC_8( VAR_10.iabuf,
                VAR_8->options[VAR_1].data,
                VAR_8->options[VAR_1].len );
        VAR_14 = FUNC_0
            ( *((ULONG*)VAR_8->address.iabuf),
              *((ULONG*)VAR_10.iabuf),
              VAR_7->IfMib.dwIndex,
              &VAR_7->NteContext,
              &VAR_7->NteInstance );
        if (VAR_11) {
            FUNC_7(VAR_11, "DhcpIPAddress", 0, VAR_6, (LPBYTE)FUNC_9(VAR_8->address), FUNC_12(FUNC_9(VAR_8->address))+1);
            VAR_9[0] = '\0';
            for(VAR_12 = 0; VAR_12 < VAR_8->options[VAR_1].len; VAR_12++)
            {
                FUNC_10(&VAR_9[FUNC_12(VAR_9)], "%u", VAR_8->options[VAR_1].data[VAR_12]);
                if (VAR_12 + 1 < VAR_8->options[VAR_1].len)
                    FUNC_11(VAR_9, ".");
            }
            FUNC_7(VAR_11, "DhcpSubnetMask", 0, VAR_6, (LPBYTE)VAR_9, FUNC_12(VAR_9)+1);
            VAR_13 = 1;
            FUNC_7(VAR_11, "EnableDHCP", 0, VAR_5, (LPBYTE)&VAR_13, sizeof(DWORD));
        }

        if( !FUNC_4(VAR_14) )
            FUNC_13("AddIPAddress: %lx\n", VAR_14);
    }

    if( VAR_8->options[VAR_0].len ) {
        NTSTATUS VAR_15;

        VAR_7->RouterMib.dwForwardDest = 0;
        VAR_7->RouterMib.dwForwardMask = 0;
        VAR_7->RouterMib.dwForwardMetric1 = 1;
        VAR_7->RouterMib.dwForwardIfIndex = VAR_7->IfMib.dwIndex;

        if( VAR_7->RouterMib.dwForwardNextHop ) {

            FUNC_3( &VAR_7->RouterMib );
        }

        VAR_7->RouterMib.dwForwardNextHop =
            *((ULONG*)VAR_8->options[VAR_0].data);

        VAR_15 = FUNC_1( &VAR_7->RouterMib );

        if( !FUNC_4(VAR_15) )
            FUNC_13("CreateIpForwardEntry: %lx\n", VAR_15);

        if (VAR_11) {
            VAR_9[0] = '\0';
            for(VAR_12 = 0; VAR_12 < VAR_8->options[VAR_0].len; VAR_12++)
            {
                FUNC_10(&VAR_9[FUNC_12(VAR_9)], "%u", VAR_8->options[VAR_0].data[VAR_12]);
                if (VAR_12 + 1 < VAR_8->options[VAR_0].len)
                    FUNC_11(VAR_9, ".");
            }
            FUNC_7(VAR_11, "DhcpDefaultGateway", 0, VAR_6, (LPBYTE)VAR_9, FUNC_12(VAR_9)+1);
        }
    }

    if (VAR_11)
        FUNC_5(VAR_11);
}
