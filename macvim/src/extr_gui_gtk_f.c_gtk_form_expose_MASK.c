
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int gint ;
struct TYPE_19__ {TYPE_2__* data; struct TYPE_19__* next; } ;
struct TYPE_18__ {scalar_t__ window; int area; int region; } ;
struct TYPE_17__ {scalar_t__ bin_window; TYPE_5__* children; } ;
struct TYPE_16__ {TYPE_1__* widget; } ;
struct TYPE_15__ {scalar_t__ window; } ;
typedef TYPE_1__ GtkWidget ;
typedef TYPE_2__ GtkFormChild ;
typedef TYPE_3__ GtkForm ;
typedef TYPE_4__ GdkEventExpose ;
typedef int GdkEvent ;
typedef TYPE_5__ GList ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static gint
FUNC_9(GtkWidget *VAR_1, GdkEventExpose *VAR_2)
{
    GList *VAR_3;
    GtkForm *VAR_4;

    FUNC_4(FUNC_1(VAR_1), VAR_0);

    VAR_4 = FUNC_0(VAR_1);

    if (VAR_2->window == VAR_4->bin_window)
 return VAR_0;

    for (VAR_3 = VAR_4->children; VAR_3; VAR_3 = VAR_3->next)
    {
 GtkFormChild *VAR_5 = VAR_3->data;
 GtkWidget *VAR_6 = VAR_5->widget;





 if (FUNC_2(VAR_6) && FUNC_3(VAR_6)
  && VAR_6->window == VAR_2->window)
 {
     GdkEventExpose VAR_7;
     VAR_7 = *VAR_2;

     VAR_7.region = FUNC_7(VAR_6, VAR_2->region);
     if (!FUNC_5(VAR_7.region))
     {
  FUNC_6(VAR_7.region, &VAR_7.area);
  FUNC_8(VAR_6, (GdkEvent *)&VAR_7);
     }
 }
    }

    return VAR_0;
}
