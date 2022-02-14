
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_27__ {int type; } ;
struct TYPE_26__ {int member_0; } ;
struct TYPE_24__ {int numeric; } ;
struct TYPE_25__ {TYPE_1__ val; } ;
typedef scalar_t__ PGFunction ;
typedef TYPE_2__ JsonbValue ;
typedef int JsonValueListIterator ;
typedef TYPE_3__ JsonValueList ;
typedef TYPE_4__ JsonPathItem ;
typedef scalar_t__ JsonPathExecResult ;
typedef int JsonPathExecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_4__*,TYPE_2__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *,TYPE_4__*,TYPE_4__*,TYPE_2__*,TYPE_3__*,int) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_13 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static JsonPathExecResult
FUNC_16(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6,
        JsonbValue *VAR_7, PGFunction VAR_8, JsonValueList *VAR_9)
{
 JsonPathExecResult VAR_10;
 JsonPathExecResult VAR_11;
 JsonPathItem VAR_12;
 JsonValueList VAR_13 = {0};
 JsonValueListIterator VAR_14;
 JsonbValue *VAR_15;
 bool VAR_16;

 FUNC_13(VAR_6, &VAR_12);
 VAR_10 = FUNC_9(VAR_5, &VAR_12, VAR_7, 1, &VAR_13);

 if (FUNC_12(VAR_10))
  return VAR_10;

 VAR_10 = VAR_3;

 VAR_16 = FUNC_14(VAR_6, &VAR_12);

 FUNC_2(&VAR_13, &VAR_14);
 while ((VAR_15 = FUNC_3(&VAR_13, &VAR_14)))
 {
  if ((VAR_15 = FUNC_11(VAR_15, VAR_2)))
  {
   if (!VAR_9 && !VAR_16)
    return VAR_4;
  }
  else
  {
   if (!VAR_9 && !VAR_16)
    continue;

   FUNC_5(FUNC_6(VAR_1,
         (FUNC_7(VAR_0),
          FUNC_8("operand of unary jsonpath operator %s is not a numeric value",
           FUNC_15(VAR_6->type)))));
  }

  if (VAR_8)
   VAR_15->val.numeric =
    FUNC_0(FUNC_1(VAR_8,
             FUNC_4(VAR_15->val.numeric)));

  VAR_11 = FUNC_10(VAR_5, VAR_6, &VAR_12, VAR_15, VAR_9, 0);

  if (FUNC_12(VAR_11))
   return VAR_11;

  if (VAR_11 == VAR_4)
  {
   if (!VAR_9)
    return VAR_4;
   VAR_10 = VAR_4;
  }
 }

 return VAR_10;
}
