
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int PangoFontDescription ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,...) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

gboolean FUNC_3 ( PangoFontDescription *VAR_2, const char *VAR_3 )
{
    const char *VAR_4 = FUNC_1 ( VAR_2 );
    int VAR_5 = FUNC_2 ( VAR_2 );
    if ( VAR_4 == ((void*)0) || VAR_5 == 0 ) {
        FUNC_0 ( "Pango failed to parse font: '%s'", VAR_3 );
        FUNC_0 ( "Got family: <b>%s</b> at size: <b>%d</b>", VAR_4 ? VAR_4 : "{unknown}", VAR_5 );
        return VAR_0;
    }
    return VAR_1;
}
