
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; int y; int x; int window; int type; } ;
struct TYPE_5__ {int height; int width; int y; int x; } ;
struct TYPE_6__ {TYPE_1__ allocation; int window; } ;
typedef TYPE_2__ GtkWidget ;
typedef int GtkForm ;
typedef TYPE_3__ GdkEventConfigure ;
typedef int GdkEvent ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(GtkForm *VAR_1)
{
    GtkWidget *VAR_2;
    GdkEventConfigure VAR_3;

    VAR_2 = FUNC_0(VAR_1);

    VAR_3.type = VAR_0;
    VAR_3.window = VAR_2->window;
    VAR_3.x = VAR_2->allocation.x;
    VAR_3.y = VAR_2->allocation.y;
    VAR_3.width = VAR_2->allocation.width;
    VAR_3.height = VAR_2->allocation.height;

    FUNC_1((GdkEvent*)&VAR_3);
}
