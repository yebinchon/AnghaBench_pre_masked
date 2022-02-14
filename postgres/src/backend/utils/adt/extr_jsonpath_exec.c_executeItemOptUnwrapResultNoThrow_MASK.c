
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int throwErrors; } ;
typedef int JsonbValue ;
typedef int JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef TYPE_1__ JsonPathExecContext ;


 int FUNC_0 (TYPE_1__*,int *,int *,int,int *) ;

__attribute__((used)) static JsonPathExecResult
FUNC_1(JsonPathExecContext *VAR_0,
          JsonPathItem *VAR_1,
          JsonbValue *VAR_2, bool VAR_3,
          JsonValueList *VAR_4)
{
 JsonPathExecResult VAR_5;
 bool VAR_6 = VAR_0->throwErrors;

 VAR_0->throwErrors = 0;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->throwErrors = VAR_6;

 return VAR_5;
}
