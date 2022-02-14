
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
typedef int gint ;
struct TYPE_4__ {TYPE_2__* child; } ;
typedef TYPE_1__ container ;
typedef int WidgetType ;
struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;


 int * FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static widget *FUNC_2 ( widget *VAR_0, WidgetType VAR_1, gint VAR_2, gint VAR_3 )
{
    container *VAR_4 = (container *) VAR_0;
    if ( !FUNC_1 ( VAR_4->child, VAR_2, VAR_3 ) ) {
        return ((void*)0);
    }

    VAR_2 -= VAR_4->child->x;
    VAR_3 -= VAR_4->child->y;
    return FUNC_0 ( VAR_4->child, VAR_1, VAR_2, VAR_3 );
}
