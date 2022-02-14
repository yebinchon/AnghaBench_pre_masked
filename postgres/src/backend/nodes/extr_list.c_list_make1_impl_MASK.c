
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * elements; } ;
typedef int NodeTag ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

List *
FUNC_2(NodeTag VAR_0, ListCell VAR_1)
{
 List *VAR_2 = FUNC_1(VAR_0, 1);

 VAR_2->elements[0] = VAR_1;
 FUNC_0(VAR_2);
 return VAR_2;
}
