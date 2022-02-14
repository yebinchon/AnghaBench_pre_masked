
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int forall; int remove; } ;
struct TYPE_3__ {int expose_event; int size_allocate; int size_request; int map; int unrealize; int realize; } ;
typedef TYPE_1__ GtkWidgetClass ;
typedef int GtkFormClass ;
typedef TYPE_2__ GtkContainerClass ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_2(GtkFormClass *VAR_9)
{
    GtkWidgetClass *VAR_10;
    GtkContainerClass *VAR_11;

    VAR_10 = (GtkWidgetClass *) VAR_9;
    VAR_11 = (GtkContainerClass *) VAR_9;

    VAR_8 = FUNC_1(FUNC_0());

    VAR_10->realize = VAR_3;
    VAR_10->unrealize = VAR_7;
    VAR_10->map = VAR_2;
    VAR_10->size_request = VAR_6;
    VAR_10->size_allocate = VAR_5;
    VAR_10->expose_event = VAR_0;

    VAR_11->remove = VAR_4;
    VAR_11->forall = VAR_1;
}
