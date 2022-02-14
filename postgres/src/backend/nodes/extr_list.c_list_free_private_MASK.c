
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; struct TYPE_8__* elements; struct TYPE_8__* initial_elements; } ;
typedef TYPE_1__ List ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(List *VAR_1, bool VAR_2)
{
 if (VAR_1 == VAR_0)
  return;

 FUNC_0(VAR_1);

 if (VAR_2)
 {
  for (int VAR_3 = 0; VAR_3 < VAR_1->length; VAR_3++)
   FUNC_2(FUNC_1(&VAR_1->elements[VAR_3]));
 }
 if (VAR_1->elements != VAR_1->initial_elements)
  FUNC_2(VAR_1->elements);
 FUNC_2(VAR_1);
}
