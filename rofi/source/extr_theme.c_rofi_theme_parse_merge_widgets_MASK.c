
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num_widgets; struct TYPE_8__** widgets; int properties; int name; } ;
typedef TYPE_1__ ThemeWidget ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4 ( ThemeWidget *VAR_1, ThemeWidget *VAR_2 )
{
    FUNC_0 ( VAR_1 != ((void*)0) );
    FUNC_0 ( VAR_2 != ((void*)0) );

    if ( VAR_1 == VAR_0 && FUNC_1(VAR_2->name, "*") == 0 ){
        FUNC_3 ( VAR_1, VAR_2->properties);
        return;
    }

    ThemeWidget *VAR_3 = FUNC_2 ( VAR_1, VAR_2->name);
    FUNC_3 ( VAR_3, VAR_2->properties);
    for ( unsigned int VAR_4 =0; VAR_4 < VAR_2->num_widgets; VAR_4++) {
        FUNC_4 ( VAR_3, VAR_2->widgets[VAR_4]);
    }
}
