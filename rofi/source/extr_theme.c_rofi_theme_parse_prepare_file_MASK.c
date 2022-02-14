
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GFile ;


 char* FUNC_0 (char*,char*,int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;

char * FUNC_8 ( const char *VAR_0, const char *VAR_1 )
{
    char *VAR_2 = FUNC_7 ( VAR_0 );

    if ( VAR_1 != ((void*)0) && !FUNC_6 ( VAR_2 ) ) {
        char *VAR_3 = FUNC_5 ( VAR_1 );
        char *VAR_4 = FUNC_0 ( VAR_3, VAR_2, ((void*)0) );
        FUNC_3 ( VAR_2 );
        VAR_2 = VAR_4;
        FUNC_3 ( VAR_3 );
    }
    GFile *VAR_5 = FUNC_2 ( VAR_2 );
    FUNC_3 ( VAR_2 );
    VAR_2 = FUNC_1 ( VAR_5 );
    FUNC_4 ( VAR_5 );

    return VAR_2;
}
