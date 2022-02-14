
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef char gchar ;
typedef int GString ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const*,int) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,int,char const**) ;

char * FUNC_6 ( const gchar *VAR_1, ssize_t VAR_2 )
{
    if ( VAR_1 == ((void*)0) ) {
        return ((void*)0);
    }
    const char *VAR_3;
    GString *VAR_4;

    if ( FUNC_5 ( VAR_1, VAR_2, &VAR_3 ) ) {
        return FUNC_0 ( VAR_1, VAR_2 + 1 );
    }
    VAR_4 = FUNC_4 ( VAR_2 + 16 );

    do {

        FUNC_2 ( VAR_4, VAR_1, VAR_3 - VAR_1 );

        FUNC_1 ( VAR_4, "\uFFFD" );
        VAR_2 -= ( VAR_3 - VAR_1 ) + 1;
        VAR_1 = VAR_3 + 1;
    } while ( !FUNC_5 ( VAR_1, VAR_2, &VAR_3 ) );

    if ( VAR_2 ) {
        FUNC_2 ( VAR_4, VAR_1, VAR_2 );
    }

    return FUNC_3 ( VAR_4, VAR_0 );
}
