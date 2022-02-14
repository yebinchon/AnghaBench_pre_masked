
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*) ;

void FUNC_9( int VAR_6 )
{
    struct sigaction VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12 = 0;
    int VAR_13;
    pid_t VAR_14;


    FUNC_5();


    FUNC_7(&VAR_7.sa_mask);
    VAR_7.sa_flags = 0;
    VAR_7.sa_handler = VAR_4;
    if( FUNC_6( VAR_2, &VAR_7, &VAR_8 ) ||
        FUNC_6( VAR_0, &VAR_7, &VAR_10 ) ||
        FUNC_6( VAR_3, &VAR_7, &VAR_11 ) ||
        FUNC_6( VAR_1, &VAR_7, &VAR_9 )) {
        FUNC_4( "Can't set signals" );
        FUNC_0( 1 );
    }
    VAR_5 = 0;
    while( 1 ) {
        while((!VAR_5 )&&( VAR_12 < VAR_6 )) {
            VAR_14 = FUNC_1();
            switch( VAR_14 ) {
            case 0:


                FUNC_6( VAR_2, &VAR_8, 0 );
                FUNC_6( VAR_1, &VAR_9, 0 );
                FUNC_6( VAR_0, &VAR_10, 0 );
                FUNC_6( VAR_3, &VAR_11, 0 );
                return ;
            case -1:
                FUNC_4( "php (pre-forking)" );
                FUNC_0( 1 );
                break;
            default:
                VAR_12++;
                break;
            }
        }
        if ( VAR_5 ) {
            break;
        }
        VAR_14 = FUNC_8( &VAR_13 );
        VAR_12--;
    }
    FUNC_3( -FUNC_2(), VAR_3 );
    FUNC_0( 0 );
}
