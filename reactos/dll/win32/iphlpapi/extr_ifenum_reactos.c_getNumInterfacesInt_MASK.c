
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TDIEntityID ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int **,int*) ;

__attribute__((used)) static DWORD FUNC_9(BOOL VAR_1)
{
    DWORD VAR_2, VAR_3 = 0;
    TDIEntityID *VAR_4;
    HANDLE VAR_5;
    NTSTATUS VAR_6;
    int VAR_7;

    VAR_6 = FUNC_6( &VAR_5, VAR_0 );

    if( !FUNC_0(VAR_6) ) {
        FUNC_2("getNumInterfaces: failed %08x\n", VAR_6 );
        return 0;
    }

    VAR_6 = FUNC_8( VAR_5, &VAR_4, &VAR_2 );

    if( !FUNC_0(VAR_6) ) {
        FUNC_2("getNumInterfaces: failed %08x\n", VAR_6 );
        FUNC_3( VAR_5 );
        return 0;
    }

    for( VAR_7 = 0; VAR_7 < VAR_2; VAR_7++ ) {
        if( FUNC_4( &VAR_4[VAR_7] ) &&
            (!VAR_1 ||
             (VAR_1 && !FUNC_5( VAR_5, &VAR_4[VAR_7] ))) )
            VAR_3++;
    }

    FUNC_1("getNumInterfaces: success: %d %d %08x\n",
           VAR_1, VAR_3, VAR_6 );

    FUNC_3( VAR_5 );

    FUNC_7( VAR_4 );

    return VAR_3;
}
