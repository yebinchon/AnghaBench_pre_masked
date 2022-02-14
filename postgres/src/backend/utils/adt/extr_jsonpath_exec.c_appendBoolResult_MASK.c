
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int boolean; } ;
struct TYPE_5__ {TYPE_1__ val; int type; } ;
typedef TYPE_2__ JsonbValue ;
typedef int JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;
typedef scalar_t__ JsonPathBool ;


 int FUNC_0 (int *,int *,int *,TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static JsonPathExecResult
FUNC_2(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6,
     JsonValueList *VAR_7, JsonPathBool VAR_8)
{
 JsonPathItem VAR_9;
 JsonbValue VAR_10;

 if (!FUNC_1(VAR_6, &VAR_9) && !VAR_7)
  return VAR_4;

 if (VAR_8 == VAR_3)
 {
  VAR_10.type = VAR_1;
 }
 else
 {
  VAR_10.type = VAR_0;
  VAR_10.val.boolean = VAR_8 == VAR_2;
 }

 return FUNC_0(VAR_5, VAR_6, &VAR_9, &VAR_10, VAR_7, 1);
}
