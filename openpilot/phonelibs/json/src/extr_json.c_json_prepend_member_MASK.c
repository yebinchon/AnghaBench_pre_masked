
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tag; int key; int * parent; } ;
typedef TYPE_1__ JsonNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

void FUNC_3(JsonNode *VAR_1, const char *VAR_2, JsonNode *VAR_3)
{
 FUNC_0(VAR_1->tag == VAR_0);
 FUNC_0(VAR_3->parent == ((void*)0));

 VAR_3->key = FUNC_1(VAR_2);
 FUNC_2(VAR_1, VAR_3);
}
