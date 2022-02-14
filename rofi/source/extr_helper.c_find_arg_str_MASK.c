
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const* const) ;
 int VAR_2 ;
 char** VAR_3 ;

int FUNC_1 ( const char * const VAR_4, char** VAR_5 )
{
    int VAR_6 = FUNC_0 ( VAR_4 );

    if ( VAR_5 != ((void*)0) && VAR_6 > 0 && VAR_6 < VAR_2 - 1 ) {
        *VAR_5 = VAR_3[VAR_6 + 1];
        return VAR_1;
    }
    return VAR_0;
}
