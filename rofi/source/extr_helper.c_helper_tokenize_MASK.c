
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_2__ {int tokenize; } ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;
 int ** FUNC_2 (int) ;
 int ** FUNC_3 (int **,int) ;
 char* FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char const* const,char**) ;

rofi_int_matcher **FUNC_7 ( const char *VAR_1, int VAR_2 )
{
    if ( VAR_1 == ((void*)0) ) {
        return ((void*)0);
    }
    size_t VAR_3 = FUNC_5 ( VAR_1 );
    if ( VAR_3 == 0 ) {
        return ((void*)0);
    }

    char *VAR_4 = ((void*)0), *VAR_5;
    rofi_int_matcher **VAR_6 = ((void*)0);
    if ( !VAR_0.tokenize ) {
        VAR_6 = FUNC_2 ( sizeof ( rofi_int_matcher* ) * 2 );
        VAR_6[0] = FUNC_0 ( VAR_1, VAR_2 );
        return VAR_6;
    }


    int VAR_7 = 0;


    char *VAR_8 = FUNC_4 ( VAR_1 );



    const char * const VAR_9 = " ";
    for ( VAR_5 = FUNC_6 ( VAR_8, VAR_9, &VAR_4 ); VAR_5 != ((void*)0); VAR_5 = FUNC_6 ( ((void*)0), VAR_9, &VAR_4 ) ) {
        VAR_6 = FUNC_3 ( VAR_6, sizeof ( rofi_int_matcher* ) * ( VAR_7 + 2 ) );
        VAR_6[VAR_7] = FUNC_0 ( VAR_5, VAR_2 );
        VAR_6[VAR_7 + 1] = ((void*)0);
        VAR_7++;
    }

    FUNC_1 ( VAR_8 );
    return VAR_6;
}
