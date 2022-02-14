
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; int max_length; int * elements; int * initial_elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

List *
FUNC_10(List *VAR_1, int VAR_2)
{
 FUNC_4(VAR_1);

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->length);






 if (VAR_1->length == 1)
 {
  FUNC_5(VAR_1);
  return VAR_0;
 }
 FUNC_7(&VAR_1->elements[VAR_2], &VAR_1->elements[VAR_2 + 1],
   (VAR_1->length - 1 - VAR_2) * sizeof(ListCell));
 VAR_1->length--;
 return VAR_1;
}
