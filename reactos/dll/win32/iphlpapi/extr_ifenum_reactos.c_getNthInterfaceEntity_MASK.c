
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tei_instance; int tei_entity; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__**,int*) ;

DWORD FUNC_6( HANDLE VAR_2, DWORD VAR_3, TDIEntityID *VAR_4 ) {
    DWORD VAR_5 = 0;
    DWORD VAR_6 = 0;
    TDIEntityID *VAR_7 = 0;
    NTSTATUS VAR_8 = FUNC_5( VAR_2, &VAR_7, &VAR_5 );
    int VAR_9;

    if( !FUNC_0(VAR_8) )
        return VAR_8;

    for( VAR_9 = 0; VAR_9 < VAR_5; VAR_9++ ) {
        if( FUNC_2( &VAR_7[VAR_9] ) ) {
            if( VAR_6 == VAR_3 ) break;
            else VAR_6++;
        }
    }

    FUNC_1("Index %d is entity #%d - %04x:%08x\n", VAR_3, VAR_9,
           VAR_7[VAR_9].tei_entity, VAR_7[VAR_9].tei_instance );

    if( VAR_6 == VAR_3 && VAR_9 < VAR_5 ) {
        FUNC_3( VAR_4, &VAR_7[VAR_9], sizeof(*VAR_4) );
        FUNC_4( VAR_7 );
        return VAR_0;
    } else {
        FUNC_4( VAR_7 );
        return VAR_1;
    }
}
