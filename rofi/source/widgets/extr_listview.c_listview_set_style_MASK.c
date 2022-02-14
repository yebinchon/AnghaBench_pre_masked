
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int widget ;
typedef int TextBoxFontType ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1 ( widget *VAR_5, TextBoxFontType VAR_6 )
{
    TextBoxFontType VAR_7 = VAR_6 & VAR_2;
    if ( VAR_5 == ((void*)0) ) {
        return;
    }

    if ( VAR_7 == ( VAR_3 | VAR_0 ) ) {
        VAR_7 = VAR_0;
    }
    switch ( ( VAR_6 & VAR_1 ) )
    {
    case 128:
        FUNC_0 ( VAR_5, VAR_4[VAR_7][1] );
        break;
    case 129:
        FUNC_0 ( VAR_5, VAR_4[VAR_7][2] );
        break;
    default:
        FUNC_0 ( VAR_5, VAR_4[VAR_7][0] );
        break;
    }
}
