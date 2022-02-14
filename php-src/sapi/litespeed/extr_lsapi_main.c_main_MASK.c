
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {long tv_sec; int tv_usec; } ;
struct TYPE_7__ {int * path_translated; } ;
struct TYPE_6__ {int phpinfo_as_text; char* executable_location; int php_ini_ignore; char* php_ini_path_override; int ini_defaults; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_5__ FUNC_13 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,char**) ;
 int FUNC_16 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (int,int ) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,char*,char*,...) ;
 int FUNC_20 (char*) ;
 int VAR_10 ;
 int FUNC_21 (struct timeval*,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_22 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_23 (long*) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_24 (int,char**,int*,char**,char**) ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 (TYPE_1__*,int *,int) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (int,char**) ;
 int FUNC_31 (int ,int ) ;
 int VAR_20 ;
 char* FUNC_32 (int ) ;
 int FUNC_33 (char*,int,char*,int ) ;
 void* FUNC_34 (int ) ;
 int FUNC_35 () ;
 int FUNC_36 () ;

int FUNC_37( int VAR_21, char * VAR_22[] )
{
    int VAR_23;
    int VAR_24;

    char * VAR_25 = ((void*)0);
    char * VAR_26 = ((void*)0);
    int VAR_27;
    int VAR_28 = 0;
    struct timeval VAR_29;
    struct timeval VAR_30;
    int VAR_31 = 0;
    char VAR_32[40];
    if (VAR_21 > 1 ) {
        if ( FUNC_24( VAR_21, VAR_22, &VAR_28,
                &VAR_25, &VAR_26 ) == -1 ) {
            return 1;
        }
    }
    if ( VAR_28 ) {
        VAR_15.phpinfo_as_text = 1;
    } else {
        FUNC_30(VAR_21, VAR_22 );
    }

    FUNC_29(&VAR_15);
    VAR_15.executable_location = VAR_22[0];




    FUNC_22(&VAR_15);

    if ( VAR_11 )
        VAR_15.php_ini_ignore = 1;

    if ( VAR_25 ) {
        VAR_15.php_ini_path_override = VAR_25;
    }


    VAR_15.ini_defaults = VAR_19;

    if (FUNC_26(&VAR_15, &VAR_12, 1) == VAR_0) {



        return VAR_0;
    }

    if ( VAR_28 ) {
        return FUNC_15(VAR_21, VAR_22);
    }

    if ( VAR_26 ) {
        VAR_24 = FUNC_0( VAR_26, 10 );
        if ( VAR_24 == -1 ) {
            FUNC_19( VAR_20,
                     "Failed to bind socket [%s]: %s\n", VAR_26, FUNC_32( VAR_7 ) );
            FUNC_18( 2 );
        }
        if ( VAR_24 != 0 ) {
            FUNC_17( VAR_24, 0 );
            FUNC_16( VAR_24 );
        }
    }

    FUNC_7();


    int VAR_33 = FUNC_11();


    FUNC_8( ((void*)0) );
    VAR_14 = 1;

    VAR_31 = FUNC_6();

    if ( VAR_26 ) {
        FUNC_9();
        FUNC_20( VAR_26 );
        VAR_26 = ((void*)0);
    }

    int VAR_34;

    FUNC_14(VAR_13);

    while( ( VAR_34 = FUNC_10( &VAR_10 )) >= 0 ) {

        if (VAR_33 && !VAR_34) {
            FUNC_12();
        }

        if ( VAR_31 ) {
            FUNC_21( &VAR_29, ((void*)0) );
        }
        VAR_23 = FUNC_28();
        if ( VAR_31 ) {
            FUNC_21( &VAR_30, ((void*)0) );
            VAR_27 = ((long) VAR_30.tv_sec - VAR_29.tv_sec ) * 1000
                + (VAR_30.tv_usec - VAR_29.tv_usec) / 1000;
            if ( VAR_27 > VAR_31 )
            {
                FUNC_33( VAR_32, 30, "%d/%b/%Y:%H:%M:%S", FUNC_23( &VAR_30.tv_sec ) );
                FUNC_19( VAR_20, "[%s] Slow PHP script: %d ms\n  URL: %s %s\n  Query String: %s\n  Script: %s\n",
                         VAR_32, VAR_27, FUNC_3(),
                         FUNC_5(), FUNC_2(),
                         FUNC_4() );

            }
        }
        FUNC_1();
        if ( VAR_23 ) {
            break;
        }
    }

    FUNC_25();




    return VAR_23;
}
