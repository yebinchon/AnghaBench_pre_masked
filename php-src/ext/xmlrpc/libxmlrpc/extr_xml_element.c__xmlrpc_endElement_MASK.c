
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* current; } ;
typedef TYPE_1__ xml_elem_data ;
struct TYPE_4__ {struct TYPE_4__* parent; int children; } ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1)
{
   xml_elem_data* VAR_2 = (xml_elem_data*)VAR_0;

   if(VAR_2 && VAR_2->current && VAR_2->current->parent) {
      FUNC_0(&VAR_2->current->parent->children, VAR_2->current);

      VAR_2->current = VAR_2->current->parent;
   }
}
