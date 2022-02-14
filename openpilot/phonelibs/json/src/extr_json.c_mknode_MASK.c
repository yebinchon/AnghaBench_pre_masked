
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; } ;
typedef int JsonTag ;
typedef TYPE_1__ JsonNode ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static JsonNode *FUNC_2(JsonTag VAR_0)
{
 JsonNode *VAR_1 = (JsonNode*) FUNC_0(1, sizeof(JsonNode));
 if (VAR_1 == ((void*)0))
  FUNC_1();
 VAR_1->tag = VAR_0;
 return VAR_1;
}
