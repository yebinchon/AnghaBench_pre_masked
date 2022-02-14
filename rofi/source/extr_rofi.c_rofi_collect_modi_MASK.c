
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int plugin_path; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5 ( void )
{




    FUNC_3 ( &VAR_4 );
    FUNC_3 ( &VAR_5 );



    FUNC_3 ( &VAR_0 );
    FUNC_3 ( &VAR_3 );

    if ( FUNC_0 ( "-no-plugins" ) < 0 ) {
        FUNC_1 ( "-plugin-path", &( VAR_1.plugin_path ) );
        FUNC_2 ( "Parse plugin path: %s", VAR_1.plugin_path );
        FUNC_4 ( VAR_1.plugin_path );
    }
}
