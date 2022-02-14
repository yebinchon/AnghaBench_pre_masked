
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_widgets; struct TYPE_4__** widgets; int name; } ;
typedef TYPE_1__ ThemeWidget ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static inline ThemeWidget *FUNC_1 ( ThemeWidget *VAR_0, const char *VAR_1 )
{
    for ( unsigned int VAR_2 = 0; VAR_0 && VAR_2 < VAR_0->num_widgets; VAR_2++ ) {
        if ( FUNC_0 ( VAR_0->widgets[VAR_2]->name, VAR_1 ) == 0 ) {
            return VAR_0->widgets[VAR_2];
        }
    }
    return VAR_0;
}
