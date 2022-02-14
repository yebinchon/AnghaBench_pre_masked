
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT ;
typedef int* PCHAR ;


 int FUNC_0 (char*,...) ;

void FUNC_1( PCHAR VAR_0, UINT VAR_1 ) {
    unsigned int VAR_2;

    for( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ ) {
        if( VAR_2 && !(VAR_2 & 0xf) ) FUNC_0( "\n" );
        if( !(VAR_2 & 0xf) ) FUNC_0( "%p: ", (VAR_0 + VAR_2) );
        FUNC_0( " %02x", VAR_0[VAR_2] & 0xff );
    }
    FUNC_0("\n");
}
