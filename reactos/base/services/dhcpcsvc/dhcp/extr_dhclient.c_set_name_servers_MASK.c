
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iaddr {int len; int iabuf; } ;
struct client_lease {TYPE_2__* options; } ;
typedef int ULONG ;
struct TYPE_5__ {char* name; } ;
struct TYPE_7__ {TYPE_1__ DhclientInfo; } ;
struct TYPE_6__ {int len; scalar_t__ data; } ;
typedef TYPE_3__* PDHCP_ADAPTER ;
typedef int LPBYTE ;
typedef int IP_ADDRESS_STRING ;
typedef int HKEY ;
typedef char CHAR ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 char* FUNC_8 (struct iaddr) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

void FUNC_11( PDHCP_ADAPTER VAR_6, struct client_lease *VAR_7 ) {
    CHAR VAR_8[200] = "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\Interfaces\\";
    HKEY VAR_9;

    FUNC_9(VAR_8, VAR_6->DhclientInfo.name);
    if (FUNC_3(VAR_2, VAR_8, 0, VAR_3, &VAR_9 ) != VAR_1)
        return;


    if( VAR_7->options[VAR_0].len ) {

        struct iaddr VAR_10;
        char *VAR_11;
        int VAR_12, VAR_13 =
            VAR_7->options[VAR_0].len / sizeof(ULONG);

        VAR_11 = FUNC_6( VAR_13 * sizeof(IP_ADDRESS_STRING) );

        if( VAR_11) {
            VAR_11[0] = 0;
            for( VAR_12 = 0; VAR_12 < VAR_13; VAR_12++ ) {
                VAR_10.len = sizeof(ULONG);
                FUNC_7( VAR_10.iabuf,
                        VAR_7->options[VAR_0].data +
                        (VAR_12 * sizeof(ULONG)), sizeof(ULONG) );
                FUNC_9( VAR_11, FUNC_8(VAR_10) );
                if( VAR_12 != VAR_13-1 ) FUNC_9( VAR_11, "," );
            }

            FUNC_0(VAR_4,("Setting DhcpNameserver: %s\n", VAR_11));

            FUNC_4( VAR_9, "DhcpNameServer", 0, VAR_5,
                           (LPBYTE)VAR_11, FUNC_10(VAR_11) + 1 );
            FUNC_5( VAR_11 );
        }

    } else {
            FUNC_2( VAR_9, L"DhcpNameServer" );
    }

    FUNC_1( VAR_9 );

}
