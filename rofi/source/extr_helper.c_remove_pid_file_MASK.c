
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3 ( int VAR_1 )
{
    if ( VAR_1 >= 0 ) {
        if ( FUNC_0 ( VAR_1 ) ) {
            FUNC_2 ( "Failed to close pidfile: '%s'", FUNC_1 ( VAR_0 ) );
        }
    }
}
