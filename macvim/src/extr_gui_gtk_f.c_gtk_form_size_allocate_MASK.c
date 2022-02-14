
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_16__ {struct TYPE_16__* next; int * data; } ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_14__ {int bin_window; TYPE_4__* children; } ;
struct TYPE_13__ {TYPE_3__ allocation; int window; } ;
typedef TYPE_1__ GtkWidget ;
typedef int GtkFormChild ;
typedef TYPE_2__ GtkForm ;
typedef TYPE_3__ GtkAllocation ;
typedef TYPE_4__ GList ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(GtkWidget *VAR_1, GtkAllocation *VAR_2)
{
    GList *VAR_3;
    GtkForm *VAR_4;
    gboolean VAR_5;

    FUNC_3(FUNC_1(VAR_1));

    if (VAR_1->allocation.x == VAR_2->x
     && VAR_1->allocation.y == VAR_2->y
     && VAR_1->allocation.width == VAR_2->width
     && VAR_1->allocation.height == VAR_2->height)
 return;

    VAR_5 = VAR_1->allocation.width != VAR_2->width
     || VAR_1->allocation.height != VAR_2->height;
    VAR_4 = FUNC_0(VAR_1);

    if (VAR_5)
    {
 VAR_3 = VAR_4->children;

 while (VAR_3)
 {
     GtkFormChild *VAR_6 = VAR_3->data;
     FUNC_5(VAR_4, VAR_6, VAR_0);

     VAR_3 = VAR_3->next;
 }
    }

    if (FUNC_2(VAR_1))
    {
 FUNC_4(VAR_1->window,
          VAR_2->x, VAR_2->y,
          VAR_2->width, VAR_2->height);
 FUNC_4(FUNC_0(VAR_1)->bin_window,
          0, 0,
          VAR_2->width, VAR_2->height);
    }
    VAR_1->allocation = *VAR_2;
    if (VAR_5)
 FUNC_6(VAR_4);
}
