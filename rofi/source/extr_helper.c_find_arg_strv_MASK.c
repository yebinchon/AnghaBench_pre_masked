
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char*,char const* const) ;

const char ** FUNC_2 ( const char *const VAR_2 )
{
    const char **VAR_3 = ((void*)0);
    int VAR_4 = 0;
    for ( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ ) {
        if ( VAR_5 < ( VAR_0 - 1 ) && FUNC_1 ( VAR_1[VAR_5], VAR_2 ) == 0 ) {
            VAR_4++;
        }
    }
    if ( VAR_4 > 0 ) {
        VAR_3 = FUNC_0 ( ( VAR_4 + 1 ) * sizeof ( char* ) );
        int VAR_6 = 0;
        for ( int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ ) {
            if ( VAR_7 < ( VAR_0 - 1 ) && FUNC_1 ( VAR_1[VAR_7], VAR_2 ) == 0 ) {
                VAR_3[VAR_6++] = VAR_1[VAR_7 + 1];
            }
        }
    }
    return VAR_3;
}
