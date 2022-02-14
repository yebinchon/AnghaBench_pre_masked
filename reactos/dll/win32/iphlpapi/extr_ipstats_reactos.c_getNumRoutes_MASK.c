
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isnmp ;
struct TYPE_4__ {int ipsi_numroutes; } ;
typedef int TDIEntityID ;
typedef int NTSTATUS ;
typedef TYPE_1__ IPSNMPInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int **,int*) ;
 int FUNC_9 (int ,int *,TYPE_1__*) ;

DWORD FUNC_10(void)
{
    DWORD VAR_1, VAR_2 = 0;
    TDIEntityID *VAR_3;
    HANDLE VAR_4;
    int VAR_5;
    NTSTATUS VAR_6;

    FUNC_2("called.\n");

    VAR_6 = FUNC_6( &VAR_4, VAR_0 );
    if( !FUNC_1(VAR_6) ) {
        FUNC_0("openTcpFile returned 0x%08lx\n", VAR_6);
        return 0;
    }

    VAR_6 = FUNC_8( VAR_4, &VAR_3, &VAR_1 );
    if( !FUNC_1(VAR_6) ) {
        FUNC_0("tdiGetEntityIDSet returned 0x%08lx\n", VAR_6);
        FUNC_3( VAR_4 );
        return 0;
    }

    for( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ ) {
        if( FUNC_4( VAR_4, &VAR_3[VAR_5] ) ) {
            IPSNMPInfo VAR_7;
            FUNC_5( &VAR_7, 0, sizeof( VAR_7 ) );
            VAR_6 = FUNC_9( VAR_4, &VAR_3[VAR_5], &VAR_7 );
            if( !FUNC_1(VAR_6) ) {
                FUNC_0("tdiGetMibForIpEntity returned 0x%08lx, for i = %d", VAR_6, VAR_5);
                VAR_2 = 0;
                break;
            }
            VAR_2 += VAR_7.ipsi_numroutes;
        }
    }

    FUNC_2("numRoutes = %lu\n", VAR_2);

    FUNC_7( VAR_3 );
    FUNC_3( VAR_4 );

    return VAR_2;
}
