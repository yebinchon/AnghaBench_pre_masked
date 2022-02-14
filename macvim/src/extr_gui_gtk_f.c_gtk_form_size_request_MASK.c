
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; TYPE_2__* data; } ;
struct TYPE_9__ {TYPE_4__* children; int height; int width; } ;
struct TYPE_8__ {int widget; } ;
struct TYPE_7__ {int height; int width; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GtkRequisition ;
typedef TYPE_2__ GtkFormChild ;
typedef TYPE_3__ GtkForm ;
typedef TYPE_4__ GList ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(GtkWidget *VAR_0, GtkRequisition *VAR_1)
{
    GList *VAR_2;
    GtkForm *VAR_3;

    FUNC_2(FUNC_1(VAR_0));

    VAR_3 = FUNC_0(VAR_0);

    VAR_1->width = VAR_3->width;
    VAR_1->height = VAR_3->height;

    VAR_2 = VAR_3->children;

    while (VAR_2)
    {
 GtkFormChild *VAR_4 = VAR_2->data;
 FUNC_3(VAR_4->widget, ((void*)0));
 VAR_2 = VAR_2->next;
    }
}
