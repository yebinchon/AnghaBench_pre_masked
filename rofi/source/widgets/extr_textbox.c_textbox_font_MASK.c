
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * state; } ;
struct TYPE_6__ {int tbft; TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;
typedef int TextBoxFontType ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int ** VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 ( textbox *VAR_5, TextBoxFontType VAR_6 )
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
        FUNC_2 ( FUNC_0 ( VAR_5 ), VAR_4[VAR_7][1] );
        break;
    case 129:
        FUNC_2 ( FUNC_0 ( VAR_5 ), VAR_4[VAR_7][2] );
        break;
    default:
        FUNC_2 ( FUNC_0 ( VAR_5 ), VAR_4[VAR_7][0] );
        break;
    }
    if ( VAR_5->tbft != VAR_6 || VAR_5->widget.state == ((void*)0) ) {
        FUNC_1 ( FUNC_0 ( VAR_5 ) );
    }
    VAR_5->tbft = VAR_6;
}
