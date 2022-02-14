
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ box; scalar_t__ icon; scalar_t__ textbox; } ;
typedef TYPE_1__ _listview_row ;
typedef int TextBoxFontType ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 ( _listview_row VAR_0, TextBoxFontType VAR_1 )
{
    FUNC_1 ( FUNC_0(VAR_0.box), VAR_1);
    FUNC_1 ( FUNC_0(VAR_0.textbox), VAR_1);
    if ( VAR_0.icon ) {
        FUNC_1 ( FUNC_0(VAR_0.icon), VAR_1);
    }
    FUNC_2 ( FUNC_0( VAR_0.box ) );
}
