
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

gboolean FUNC_7 ( void )
{
    FUNC_5 ();







    if ( FUNC_0 ( "-normal-window" ) >= 0 ) {
        return VAR_1;
    }
    if ( FUNC_0 ( "-no-lazy-grab" ) >= 0 ) {
        if ( !FUNC_3 ( FUNC_6 (), 500 ) ) {
            FUNC_2 ( "Failed to grab keyboard, even after %d uS.", 500 * 1000 );
            return VAR_0;
        }
        if ( !FUNC_4 ( FUNC_6 (), 100 ) ) {
            FUNC_2 ( "Failed to grab mouse pointer, even after %d uS.", 100 * 1000 );
        }
    }
    else {
        if ( !FUNC_3 ( FUNC_6 (), 0 ) ) {
            FUNC_1 ( 1, VAR_2, ((void*)0) );
        }
        if ( !FUNC_4 ( FUNC_6 (), 0 ) ) {
            FUNC_1 ( 1, VAR_3, ((void*)0) );
        }
    }
    return VAR_1;
}
