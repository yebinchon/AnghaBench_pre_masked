
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int TcpOffset; int TcpSize; int TOIID; } ;
struct TYPE_12__ {scalar_t__ tei_entity; int dwNumEntries; int tei_instance; } ;
typedef TYPE_1__ TDIEntityID ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PMIB_TCPTABLE ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef size_t CLASS_TABLE ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 TYPE_9__* VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__**,int*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,scalar_t__,int ,int ,int,TYPE_1__**,int*) ;

PVOID FUNC_14(CLASS_TABLE VAR_6)
{
    DWORD VAR_7, VAR_8;
    TDIEntityID *VAR_9;
    HANDLE VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
    NTSTATUS VAR_15;
    PMIB_TCPTABLE VAR_16 = ((void*)0);
    PVOID VAR_17 = ((void*)0);

    FUNC_6("called.\n");

    VAR_12 = FUNC_8();

    VAR_15 = FUNC_10( &VAR_10, VAR_1 );
    if( !FUNC_5(VAR_15) ) {
        FUNC_2("openTcpFile returned 0x%08lx\n", VAR_15);
        return 0;
    }

    VAR_16 = FUNC_4
 ( FUNC_3(), 0,
   VAR_5[VAR_6].TcpOffset + (VAR_5[VAR_6].TcpSize * VAR_12) );
    if (!VAR_16) {
        FUNC_7(VAR_10);
        return ((void*)0);
    }

    VAR_15 = FUNC_12( VAR_10, &VAR_9, &VAR_7 );

    for( VAR_11 = 0; VAR_11 < VAR_7; VAR_11++ ) {
        if( VAR_9[VAR_11].tei_entity == VAR_0 &&
     FUNC_9( VAR_10, &VAR_9[VAR_11] ) ) {

     VAR_15 = FUNC_13( VAR_10,
     VAR_2,
     VAR_3,
     VAR_5[VAR_6].TOIID,
     VAR_0,
     VAR_9[VAR_11].tei_instance,
     0,
     VAR_5[VAR_6].TcpSize,
     &VAR_17,
     &VAR_8 );

            if( VAR_15 == VAR_4 ) {
                for( VAR_13 = 0; VAR_13 < VAR_8; VAR_13++, VAR_14++ )
                    FUNC_1(FUNC_0(VAR_16, VAR_5[VAR_6].TcpOffset + VAR_5[VAR_6].TcpSize * VAR_14),
                               FUNC_0(VAR_17, VAR_5[VAR_6].TcpSize * VAR_13),
                               VAR_5[VAR_6].TcpSize);
                FUNC_11( VAR_17 );
            }
        }
    }

    FUNC_7( VAR_10 );

    FUNC_11( VAR_9 );
    VAR_16->dwNumEntries = VAR_14;

    return VAR_16;
}
