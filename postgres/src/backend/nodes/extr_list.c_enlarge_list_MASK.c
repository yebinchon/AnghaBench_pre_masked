
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_length; int length; int * elements; int * initial_elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(List *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1 > VAR_0->max_length);
 VAR_2 = 16;
 while (VAR_2 < VAR_1)
  VAR_2 *= 2;





 if (VAR_0->elements == VAR_0->initial_elements)
 {







  VAR_0->elements = (ListCell *)
   FUNC_2(FUNC_1(VAR_0),
          VAR_2 * sizeof(ListCell));
  FUNC_4(VAR_0->elements, VAR_0->initial_elements,
      VAR_0->length * sizeof(ListCell));
  FUNC_3(VAR_0->initial_elements,
           VAR_0->max_length * sizeof(ListCell));

 }
 else
 {


  VAR_0->elements = (ListCell *) FUNC_6(VAR_0->elements,
              VAR_2 * sizeof(ListCell));
 }

 VAR_0->max_length = VAR_2;
}
