
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int useTz; } ;
struct TYPE_4__ {int type; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonPathItem ;
typedef TYPE_2__ JsonPathExecContext ;
typedef int JsonPathBool ;


 int FUNC_0 (int ,int *,int *,int ) ;

__attribute__((used)) static JsonPathBool
FUNC_1(JsonPathItem *VAR_0, JsonbValue *VAR_1, JsonbValue *VAR_2, void *VAR_3)
{
 JsonPathExecContext *VAR_4 = (JsonPathExecContext *) VAR_3;

 return FUNC_0(VAR_0->type, VAR_1, VAR_2, VAR_4->useTz);
}
