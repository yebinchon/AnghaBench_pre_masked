
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int length; scalar_t__ elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (int) ;
 TYPE_1__ const* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 TYPE_1__* FUNC_4 (scalar_t__,int) ;

List *
FUNC_5(const List *VAR_1, const List *VAR_2)
{
 List *VAR_3;
 int VAR_4;

 if (VAR_1 == VAR_0)
  return FUNC_2(VAR_2);
 if (VAR_2 == VAR_0)
  return FUNC_2(VAR_1);

 FUNC_0(VAR_1->type == VAR_2->type);

 VAR_4 = VAR_1->length + VAR_2->length;
 VAR_3 = FUNC_4(VAR_1->type, VAR_4);
 FUNC_3(VAR_3->elements, VAR_1->elements,
     VAR_1->length * sizeof(ListCell));
 FUNC_3(VAR_3->elements + VAR_1->length, VAR_2->elements,
     VAR_2->length * sizeof(ListCell));

 FUNC_1(VAR_3);
 return VAR_3;
}
