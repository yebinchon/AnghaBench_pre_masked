
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int selected; TYPE_3__* boxes; int udata; int (* callback ) (int ,int ,unsigned int,int ,int *,int ) ;} ;
typedef TYPE_1__ listview ;
typedef int gboolean ;
typedef int TextBoxFontType ;
struct TYPE_5__ {int icon; int textbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2 ( listview *VAR_3, unsigned int VAR_4, unsigned int VAR_5, gboolean VAR_6 )
{

    TextBoxFontType VAR_7 = ( VAR_5 & 1 ) == 0 ? VAR_2 : VAR_0;
    VAR_7 = ( VAR_5 ) == VAR_3->selected ? VAR_1 : VAR_7;

    if ( VAR_3->callback ) {
        VAR_3->callback ( VAR_3->boxes[VAR_4].textbox, VAR_3->boxes[VAR_4].icon, VAR_5, VAR_3->udata, &VAR_7, VAR_6 );
        FUNC_0 ( VAR_3->boxes[VAR_4], VAR_7);
    }
}
