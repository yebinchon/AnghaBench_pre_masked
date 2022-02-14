
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char const,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int,int ,int *,char**,int *,int *) ;
 int VAR_0 ;

void FUNC_7 ( const char *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4 )
{
    for ( int VAR_5 = 0; VAR_1 && VAR_1[VAR_5]; VAR_5++ ) {
        if ( VAR_1[VAR_5] == 'i' ) {
            FUNC_1 ( VAR_0, "%d", VAR_3 );
        }
        else if ( VAR_1[VAR_5] == 'd' ) {
            FUNC_1 ( VAR_0, "%d", ( VAR_3 + 1 ) );
        }
        else if ( VAR_1[VAR_5] == 's' ) {
            FUNC_3 ( VAR_2, VAR_0 );
        }
        else if ( VAR_1[VAR_5] == 'p' ) {
            char *VAR_6 = ((void*)0);
            FUNC_6(VAR_2, -1, 0, ((void*)0), &VAR_6, ((void*)0), ((void*)0));
            if ( VAR_6 ){
                FUNC_3 ( VAR_6, VAR_0 );
                FUNC_4 ( VAR_6 );
            } else {
                FUNC_3 ( "invalid string" , VAR_0 );
            }
        }
        else if ( VAR_1[VAR_5] == 'q' ) {
            char *VAR_7 = FUNC_5 ( VAR_2 );
            FUNC_3 ( VAR_7, VAR_0 );
            FUNC_4 ( VAR_7 );
        }
        else if ( VAR_1[VAR_5] == 'f' ) {
            if ( VAR_4 ) {
                FUNC_3 ( VAR_4, VAR_0 );
            }
        }
        else if ( VAR_1[VAR_5] == 'F' ) {
            if ( VAR_4 ) {
                char *VAR_8 = FUNC_5 ( VAR_4 );
                FUNC_3 ( VAR_8, VAR_0 );
                FUNC_4 ( VAR_8 );
            }
        }
        else {
            FUNC_2 ( VAR_1[VAR_5], VAR_0 );
        }
    }
    FUNC_2 ( '\n', VAR_0 );
    FUNC_0 ( VAR_0 );
}
