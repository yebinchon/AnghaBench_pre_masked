
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int elements; int type; } ;
typedef int ListCell ;
typedef TYPE_1__ const List ;


 TYPE_1__ const* VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ const* FUNC_2 (int ,int) ;

List *
FUNC_3(const List *VAR_1)
{
 List *VAR_2;

 if (VAR_1 == VAR_0)
  return VAR_0;

 VAR_2 = FUNC_2(VAR_1->type, VAR_1->length);
 FUNC_1(VAR_2->elements, VAR_1->elements,
     VAR_2->length * sizeof(ListCell));

 FUNC_0(VAR_2);
 return VAR_2;
}
