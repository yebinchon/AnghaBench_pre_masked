
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ThemeMediaType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

ThemeMediaType FUNC_1 ( const char *VAR_8 )
{
    if ( FUNC_0( VAR_8, "monitor-id" ) == 0 ) {
        return VAR_7;
    } else if ( FUNC_0 ( VAR_8, "min-width") == 0 ) {
        return VAR_6;
    } else if ( FUNC_0 ( VAR_8, "min-height") == 0 ) {
        return VAR_5;
    } else if ( FUNC_0 ( VAR_8, "max-width") == 0 ) {
        return VAR_3;
    } else if ( FUNC_0 ( VAR_8, "max-height") == 0 ) {
        return VAR_2;
    } else if ( FUNC_0 ( VAR_8, "min-aspect-ratio") == 0 ) {
        return VAR_4;
    } else if ( FUNC_0 ( VAR_8, "max-aspect-ratio") == 0 ) {
        return VAR_1;
    }
    return VAR_0;
}
