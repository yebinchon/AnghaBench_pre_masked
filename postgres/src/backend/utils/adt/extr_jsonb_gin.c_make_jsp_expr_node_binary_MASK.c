
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** args; } ;
typedef int JsonPathGinNodeType ;
typedef TYPE_1__ JsonPathGinNode ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static JsonPathGinNode *
FUNC_1(JsonPathGinNodeType VAR_0,
        JsonPathGinNode *VAR_1, JsonPathGinNode *VAR_2)
{
 JsonPathGinNode *VAR_3 = FUNC_0(VAR_0, 2);

 VAR_3->args[0] = VAR_1;
 VAR_3->args[1] = VAR_2;

 return VAR_3;
}
