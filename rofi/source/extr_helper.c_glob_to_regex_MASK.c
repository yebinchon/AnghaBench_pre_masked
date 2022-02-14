
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;


 char* FUNC_0 (char const*,int) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static gchar *FUNC_2 ( const char *VAR_0 )
{
    gchar *VAR_1 = FUNC_0 ( VAR_0, -1 );
    size_t VAR_2 = FUNC_1 ( VAR_1 );
    for ( size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ ) {
        if ( VAR_1[VAR_3] == '\\' ) {
            if ( VAR_1[VAR_3 + 1] == '*' ) {
                VAR_1[VAR_3] = '.';
            }
            else if ( VAR_1[VAR_3 + 1] == '?' ) {
                VAR_1[VAR_3 + 1] = 'S';
            }
            VAR_3++;
        }
    }
    return VAR_1;
}
