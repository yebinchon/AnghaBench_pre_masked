
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** elements; } ;
typedef int NodeTag ;
typedef void* ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

List *
FUNC_2(NodeTag VAR_0, ListCell VAR_1, ListCell VAR_2,
    ListCell VAR_3)
{
 List *VAR_4 = FUNC_1(VAR_0, 3);

 VAR_4->elements[0] = VAR_1;
 VAR_4->elements[1] = VAR_2;
 VAR_4->elements[2] = VAR_3;
 FUNC_0(VAR_4);
 return VAR_4;
}
