
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* gint ;
struct TYPE_10__ {TYPE_1__* data; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_3__* children; } ;
struct TYPE_8__ {void* y; void* x; int * widget; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GtkFormChild ;
typedef TYPE_2__ GtkForm ;
typedef TYPE_3__ GList ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;

void
FUNC_3(GtkForm *VAR_1,
       GtkWidget *VAR_2,
       gint VAR_3,
       gint VAR_4)
{
    GList *VAR_5;
    GtkFormChild *VAR_6;

    FUNC_1(FUNC_0(VAR_1));

    for (VAR_5 = VAR_1->children; VAR_5; VAR_5 = VAR_5->next)
    {
 VAR_6 = VAR_5->data;
 if (VAR_6->widget == VAR_2)
 {
     VAR_6->x = VAR_3;
     VAR_6->y = VAR_4;

     FUNC_2(VAR_1, VAR_6, VAR_0);
     return;
 }
    }
}
