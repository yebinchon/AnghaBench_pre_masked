
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int window; } ;
struct TYPE_5__ {TYPE_2__* widget; int * window; } ;
typedef TYPE_1__ GtkFormChild ;
typedef int GtkForm ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(GtkForm *VAR_1, GtkFormChild *VAR_2)
{
    FUNC_0(VAR_1, VAR_2);
    FUNC_2(VAR_2->widget);

    if (VAR_2->window == ((void*)0))
 FUNC_1(VAR_2->widget->window, VAR_0);
}
