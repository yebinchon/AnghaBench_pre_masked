
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_xrm_database_t ;
typedef enum ConfigSource { ____Placeholder_ConfigSource } ConfigSource ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,int ) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_4 (int *,char*,int *,char**) ;

__attribute__((used)) static void FUNC_5 ( xcb_xrm_database_t *VAR_2, enum ConfigSource VAR_3 )
{
    const char * VAR_4 = "rofi";

    for ( unsigned int VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5 ) {
        char *VAR_6;

        VAR_6 = FUNC_3 ( "%s.%s", VAR_4, VAR_0[VAR_5].name );
        char *VAR_7 = ((void*)0);
        if ( FUNC_4 ( VAR_2, VAR_6, ((void*)0), &VAR_7 ) == 0 ) {
            FUNC_0 ( &( VAR_0[VAR_5] ), VAR_7, VAR_3 );
        }
        if ( VAR_7 ) {
            FUNC_1 ( VAR_7 );
        }

        FUNC_2 ( VAR_6 );
    }
}
