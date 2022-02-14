
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int JsonbValue ;
typedef int JsonPathItem ;
typedef int JsonPathGinPath ;
typedef int JsonPathGinNode ;
typedef int JsonPathGinContext ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;

__attribute__((used)) static JsonPathGinNode *
FUNC_4(JsonPathGinContext *VAR_1, JsonPathGinPath VAR_2,
       JsonPathItem *VAR_3, JsonbValue *VAR_4)
{

 List *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 if (FUNC_2(VAR_5) <= 0)

  return ((void*)0);

 if (FUNC_2(VAR_5) == 1)
  return FUNC_1(VAR_5);


 return FUNC_3(VAR_0, VAR_5);
}
