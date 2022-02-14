
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int gint ;
struct TYPE_19__ {int height; int width; } ;
struct TYPE_24__ {TYPE_1__ requisition; } ;
struct TYPE_23__ {int event_mask; int colormap; int visual; int wclass; int height; int width; int y; int x; int window_type; } ;
struct TYPE_22__ {int * bin_window; } ;
struct TYPE_21__ {TYPE_6__* widget; int * window; int y; int x; } ;
struct TYPE_20__ {int style; } ;
typedef TYPE_2__ GtkWidget ;
typedef TYPE_3__ GtkFormChild ;
typedef TYPE_4__ GtkForm ;
typedef TYPE_5__ GdkWindowAttr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_8 ;
 int * FUNC_5 (int *,TYPE_5__*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*,int ,TYPE_3__*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_6__*,int *) ;

__attribute__((used)) static void
FUNC_13(GtkForm *VAR_11, GtkFormChild *VAR_12)
{
    if (VAR_12->window != ((void*)0))
 return;

    if (FUNC_3(VAR_12->widget))
    {
 GtkWidget *VAR_13;
 GdkWindowAttr VAR_14;
 gint VAR_15;

 VAR_13 = FUNC_2(VAR_11);

 VAR_14.window_type = VAR_6;
 VAR_14.x = VAR_12->x;
 VAR_14.y = VAR_12->y;
 VAR_14.width = VAR_12->widget->requisition.width;
 VAR_14.height = VAR_12->widget->requisition.height;
 VAR_14.wclass = VAR_1;
 VAR_14.visual = FUNC_11(VAR_13);
 VAR_14.colormap = FUNC_10(VAR_13);
 VAR_14.event_mask = VAR_0;

 VAR_15 = VAR_4 | VAR_5 | VAR_3 | VAR_2;
 VAR_12->window = FUNC_5(VAR_11->bin_window,
           &VAR_14, VAR_15);
 FUNC_6(VAR_12->window, VAR_13);

 FUNC_9(VAR_13->style,
     VAR_12->window,
     VAR_7);

 FUNC_12(VAR_12->widget, VAR_12->window);
 FUNC_7(VAR_12->window, VAR_8);




 FUNC_8(FUNC_0(VAR_12->widget), "map",
      FUNC_1(&VAR_9), VAR_12);
 FUNC_8(FUNC_0(VAR_12->widget), "unmap",
      FUNC_1(&VAR_10), VAR_12);
    }
    else if (!FUNC_4(VAR_12->widget))
    {
 FUNC_12(VAR_12->widget, VAR_11->bin_window);
    }
}
