
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* children; } ;
typedef TYPE_1__ GtkForm ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(GtkForm *VAR_1)
{
    GList *VAR_2;

    for (VAR_2 = VAR_1->children; VAR_2; VAR_2 = VAR_2->next)
 FUNC_0(VAR_1, VAR_2->data, VAR_0);
}
