
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int dwNumEntries; TYPE_1__* table; } ;
struct TYPE_10__ {int tei_instance; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int PVOID ;
typedef TYPE_2__* PMIB_IPNETTABLE ;
typedef TYPE_1__* PMIB_IPNETROW ;
typedef scalar_t__ NTSTATUS ;
typedef int MIB_IPNETROW ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__**,int*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int ,int ,int ,int,int *,int*) ;

PMIB_IPNETTABLE FUNC_13(void)
{
    DWORD VAR_6, VAR_7;
    TDIEntityID *VAR_8;
    HANDLE VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    NTSTATUS VAR_14;
    PMIB_IPNETTABLE VAR_15 = ((void*)0);
    PMIB_IPNETROW VAR_16 = ((void*)0);

    FUNC_4("called.\n");

    VAR_11 = FUNC_6();

    VAR_14 = FUNC_9( &VAR_9, VAR_1 );
    if( !FUNC_3(VAR_14) ) {
        FUNC_0("openTcpFile returned 0x%08lx\n", VAR_14);
        return 0;
    }

    VAR_15 = FUNC_2
 ( FUNC_1(), 0,
   sizeof(DWORD) + (sizeof(MIB_IPNETROW) * VAR_11) );
    if (!VAR_15) {
        FUNC_5(VAR_9);
        return ((void*)0);
    }

    VAR_14 = FUNC_11( VAR_9, &VAR_8, &VAR_6 );

    for( VAR_10 = 0; VAR_10 < VAR_6; VAR_10++ ) {
        if( FUNC_8( &VAR_8[VAR_10] ) &&
     FUNC_7( VAR_9, &VAR_8[VAR_10] ) ) {

     VAR_14 = FUNC_12( VAR_9,
     VAR_2,
     VAR_3,
     VAR_4,
     VAR_0,
     VAR_8[VAR_10].tei_instance,
     0,
     sizeof(MIB_IPNETROW),
     (PVOID *)&VAR_16,
     &VAR_7 );

            if( VAR_14 == VAR_5 ) {
                for( VAR_12 = 0; VAR_12 < VAR_7; VAR_12++, VAR_13++ )
                    VAR_15->table[VAR_13] = VAR_16[VAR_12];
                FUNC_10( VAR_16 );
            }
        }
    }

    FUNC_5( VAR_9 );

    FUNC_10( VAR_8 );
    VAR_15->dwNumEntries = VAR_13;

    return VAR_15;
}
