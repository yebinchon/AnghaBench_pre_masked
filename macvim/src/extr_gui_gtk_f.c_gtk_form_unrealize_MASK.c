
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* unrealize ) (int *) ;} ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* data; } ;
struct TYPE_8__ {int * bin_window; TYPE_3__* children; } ;
struct TYPE_7__ {int * window; int widget; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GtkFormChild ;
typedef TYPE_2__ GtkForm ;
typedef TYPE_3__ GList ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(GtkWidget *VAR_3)
{
    GList *VAR_4;
    GtkForm *VAR_5;

    FUNC_5(FUNC_1(VAR_3));

    VAR_5 = FUNC_0(VAR_3);

    VAR_4 = VAR_5->children;

    FUNC_7(VAR_5->bin_window, ((void*)0));
    FUNC_6(VAR_5->bin_window);
    VAR_5->bin_window = ((void*)0);

    while (VAR_4)
    {
 GtkFormChild *VAR_6 = VAR_4->data;

 if (VAR_6->window != ((void*)0))
 {
     FUNC_8(FUNC_2(VAR_6->widget),
       FUNC_3(VAR_0),
       VAR_6);
     FUNC_8(FUNC_2(VAR_6->widget),
       FUNC_3(VAR_1),
       VAR_6);

     FUNC_7(VAR_6->window, ((void*)0));
     FUNC_6(VAR_6->window);

     VAR_6->window = ((void*)0);
 }

 VAR_4 = VAR_4->next;
    }

    if (FUNC_4 (VAR_2)->unrealize)
  (* FUNC_4 (VAR_2)->unrealize) (VAR_3);
}
