
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rofi_range_pair {int dummy; } ;
typedef int rofi_range_pair ;


 int * FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (char*,int *) ;
 char* FUNC_2 (char*,char const* const,char**) ;

void FUNC_3 ( char *VAR_0, rofi_range_pair **VAR_1, unsigned int *VAR_2 )
{
    char *VAR_3;
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    const char *const VAR_4 = ",";
    for ( char *VAR_5 = FUNC_2 ( VAR_0, VAR_4, &VAR_3 ); VAR_5 != ((void*)0); VAR_5 = FUNC_2 ( ((void*)0), VAR_4, &VAR_3 ) ) {

        *VAR_1 = FUNC_0 ( ( *VAR_1 ), ( ( *VAR_2 ) + 1 ) * sizeof ( struct rofi_range_pair ) );

        FUNC_1 ( VAR_5, &( ( *VAR_1 )[*VAR_2] ) );

        ( *VAR_2 )++;
    }
}
