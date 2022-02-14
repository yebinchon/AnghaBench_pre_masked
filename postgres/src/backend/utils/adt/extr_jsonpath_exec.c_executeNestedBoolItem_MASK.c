
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * current; } ;
typedef int JsonbValue ;
typedef int JsonPathItem ;
typedef TYPE_1__ JsonPathExecContext ;
typedef int JsonPathBool ;


 int FUNC_0 (TYPE_1__*,int *,int *,int) ;

__attribute__((used)) static JsonPathBool
FUNC_1(JsonPathExecContext *VAR_0, JsonPathItem *VAR_1,
       JsonbValue *VAR_2)
{
 JsonbValue *VAR_3;
 JsonPathBool VAR_4;

 VAR_3 = VAR_0->current;
 VAR_0->current = VAR_2;
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, 0);
 VAR_0->current = VAR_3;

 return VAR_4;
}
