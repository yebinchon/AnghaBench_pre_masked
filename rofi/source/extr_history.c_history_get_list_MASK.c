
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_history; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char** FUNC_0 (int *,unsigned int*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;

char ** FUNC_5 ( const char *VAR_3, unsigned int *VAR_4 )
{
    *VAR_4 = 0;

    if ( VAR_1.disable_history ) {
        return ((void*)0);
    }
    char **VAR_5 = ((void*)0);

    FILE *VAR_6 = FUNC_2 ( VAR_3, "r" );
    if ( VAR_6 == ((void*)0) ) {


        if ( VAR_2 != VAR_0 ) {
            FUNC_4 ( "Failed to open file: %s", FUNC_3 ( VAR_2 ) );
        }
        return ((void*)0);
    }

    VAR_5 = FUNC_0 ( VAR_6, VAR_4 );


    if ( FUNC_1 ( VAR_6 ) != 0 ) {
        FUNC_4 ( "Failed to close history file: %s", FUNC_3 ( VAR_2 ) );
    }
    return VAR_5;
}
