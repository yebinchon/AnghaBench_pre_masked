
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
typedef int guint ;
typedef int gint ;
typedef int gboolean ;
struct TYPE_4__ {int * motion_target; int y; int x; } ;
struct TYPE_5__ {TYPE_1__ mouse; int main_window; } ;
typedef TYPE_2__ RofiViewState ;
typedef int BindingsScope ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int *) ;

gboolean FUNC_5 ( RofiViewState *VAR_2, BindingsScope VAR_3, guint VAR_4 )
{
    switch ( VAR_3 )
    {
    case 137:
        FUNC_1 ( VAR_4 );
        return VAR_1;
    case 135:
    case 134:
    case 136:
    case 132:
    case 133:
    {
        gint VAR_5 = VAR_2->mouse.x, VAR_6 = VAR_2->mouse.y;
        widget *VAR_7 = FUNC_2 ( FUNC_0 ( VAR_2->main_window ), VAR_3, VAR_5, VAR_6 );
        if ( VAR_7 == ((void*)0) ) {
            return VAR_0;
        }
        FUNC_4 ( VAR_7, &VAR_5, &VAR_6 );
        switch ( FUNC_3 ( VAR_7, VAR_4, VAR_5, VAR_6 ) )
        {
        case 128:
            return VAR_0;
        case 130:
            VAR_7 = ((void*)0);

        case 131:
            VAR_2->mouse.motion_target = VAR_7;

        case 129:
            return VAR_1;
        }
        break;
    }
    }
    return VAR_0;
}
