
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gboolean ;
typedef int ThemeWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int * FUNC_2 (int *,char const*) ;
 char* FUNC_3 (char*,char*,char**) ;

__attribute__((used)) static ThemeWidget *FUNC_4 ( ThemeWidget *VAR_2, const char *VAR_3, const gboolean VAR_4 )
{
    if ( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) ) {
        return VAR_2;
    }
    char *VAR_5 = FUNC_1 ( VAR_3 );
    char *VAR_6 = ((void*)0);
    int VAR_7 = VAR_1;
    for ( const char *VAR_8 = FUNC_3 ( VAR_5, ".", &VAR_6 ); VAR_8 != ((void*)0); VAR_8 = FUNC_3 ( ((void*)0), ".", &VAR_6 ) ) {
        VAR_7 = VAR_0;
        ThemeWidget *VAR_9 = FUNC_2 ( VAR_2, VAR_8 );
        if ( VAR_9 != VAR_2 ) {
            VAR_2 = VAR_9;
            VAR_7 = VAR_1;
        }
        else if ( VAR_4 ) {
            break;
        }
    }
    FUNC_0 ( VAR_5 );
    if ( !VAR_4 || VAR_7 ) {
        return VAR_2;
    }
    else {
        return ((void*)0);
    }
}
