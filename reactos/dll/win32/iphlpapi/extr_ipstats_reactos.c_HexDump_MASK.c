
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int* PCHAR ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

VOID FUNC_1( PCHAR VAR_1, DWORD VAR_2 ) {
    int VAR_3;

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ ) {
        if( !(VAR_3 & 0xf) ) {
            if( VAR_3 ) FUNC_0(VAR_0,"\n");
            FUNC_0(VAR_0,"%08x:", VAR_3);
        }
        FUNC_0( VAR_0, " %02x", VAR_1[VAR_3] & 0xff );
    }
    FUNC_0(VAR_0,"\n");
}
