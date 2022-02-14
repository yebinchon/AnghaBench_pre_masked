
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char gchar ;
struct TYPE_7__ {char* str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static gchar *FUNC_9 ( const char * VAR_1 )
{
    GString *VAR_2 = FUNC_6 ( "" );
    gchar *VAR_3 = FUNC_1 ( VAR_1, -1 );
    gchar *VAR_4;
    int VAR_5 = 1;
    for ( VAR_4 = VAR_3; VAR_4 && *VAR_4 != '\0'; VAR_4 = FUNC_8 ( VAR_4 ) ) {
        if ( VAR_5 ) {
            FUNC_2 ( VAR_2, "(" );
        }
        else {
            FUNC_2 ( VAR_2, ".*(" );
        }
        if ( *VAR_4 == '\\' ) {
            FUNC_3 ( VAR_2, '\\' );
            VAR_4 = FUNC_8 ( VAR_4 );

            if ( ( *VAR_4 ) == '\0' ) {
                break;
            }
        }
        FUNC_4 ( VAR_2, FUNC_7 ( VAR_4 ) );
        FUNC_2 ( VAR_2, ")" );
        VAR_5 = 0;
    }
    FUNC_0 ( VAR_3 );
    char *VAR_6 = VAR_2->str;
    FUNC_5 ( VAR_2, VAR_0 );
    return VAR_6;
}
