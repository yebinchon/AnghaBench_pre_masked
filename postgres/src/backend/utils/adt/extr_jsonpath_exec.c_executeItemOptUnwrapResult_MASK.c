
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int member_0; } ;
struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_1__ JsonbValue ;
typedef int JsonValueListIterator ;
typedef TYPE_2__ JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *,int *,TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static JsonPathExecResult
FUNC_9(JsonPathExecContext *VAR_2, JsonPathItem *VAR_3,
         JsonbValue *VAR_4, bool VAR_5,
         JsonValueList *VAR_6)
{
 if (VAR_5 && FUNC_8(VAR_2))
 {
  JsonValueList VAR_7 = {0};
  JsonValueListIterator VAR_8;
  JsonPathExecResult VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_7);
  JsonbValue *VAR_10;

  if (FUNC_7(VAR_9))
   return VAR_9;

  FUNC_2(&VAR_7, &VAR_8);
  while ((VAR_10 = FUNC_3(&VAR_7, &VAR_8)))
  {
   FUNC_0(VAR_10->type != VAR_0);

   if (FUNC_4(VAR_10) == VAR_0)
    FUNC_6(VAR_2, ((void*)0), VAR_10, VAR_6, 0);
   else
    FUNC_1(VAR_6, VAR_10);
  }

  return VAR_1;
 }

 return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6);
}
