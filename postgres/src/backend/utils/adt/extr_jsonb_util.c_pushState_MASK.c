
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ JsonbParseState ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static JsonbParseState *
FUNC_1(JsonbParseState **VAR_0)
{
 JsonbParseState *VAR_1 = FUNC_0(sizeof(JsonbParseState));

 VAR_1->next = *VAR_0;
 return VAR_1;
}
