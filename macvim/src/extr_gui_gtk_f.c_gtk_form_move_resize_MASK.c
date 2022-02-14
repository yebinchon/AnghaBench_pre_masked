
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* gint ;
struct TYPE_5__ {void* height; void* width; } ;
struct TYPE_6__ {TYPE_1__ requisition; } ;
typedef TYPE_2__ GtkWidget ;
typedef int GtkForm ;


 int FUNC_0 (int *,TYPE_2__*,void*,void*) ;

void
FUNC_1(GtkForm *VAR_0, GtkWidget *VAR_1,
       gint VAR_2, gint VAR_3, gint VAR_4, gint VAR_5)
{
    VAR_1->requisition.width = VAR_4;
    VAR_1->requisition.height = VAR_5;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
