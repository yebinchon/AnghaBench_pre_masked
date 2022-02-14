
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_28__ {int type; } ;
struct TYPE_27__ {int member_0; } ;
struct TYPE_25__ {int numeric; } ;
struct TYPE_26__ {TYPE_1__ val; int type; } ;
typedef int Numeric ;
typedef TYPE_2__ JsonbValue ;
typedef TYPE_3__ JsonValueList ;
typedef TYPE_4__ JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;
typedef int (* BinaryArithmFunc ) (int ,int ,int*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,TYPE_4__*,TYPE_2__*,int,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_4__*,TYPE_4__*,TYPE_2__*,TYPE_3__*,int) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (int) ;

__attribute__((used)) static JsonPathExecResult
FUNC_16(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6,
      JsonbValue *VAR_7, BinaryArithmFunc VAR_8,
      JsonValueList *VAR_9)
{
 JsonPathExecResult VAR_10;
 JsonPathItem VAR_11;
 JsonValueList VAR_12 = {0};
 JsonValueList VAR_13 = {0};
 JsonbValue *VAR_14;
 JsonbValue *VAR_15;
 Numeric VAR_16;

 FUNC_10(VAR_6, &VAR_11);





 VAR_10 = FUNC_6(VAR_5, &VAR_11, VAR_7, 1, &VAR_12);
 if (FUNC_9(VAR_10))
  return VAR_10;

 FUNC_12(VAR_6, &VAR_11);

 VAR_10 = FUNC_6(VAR_5, &VAR_11, VAR_7, 1, &VAR_13);
 if (FUNC_9(VAR_10))
  return VAR_10;

 if (FUNC_1(&VAR_12) != 1 ||
  !(VAR_14 = FUNC_8(FUNC_0(&VAR_12), VAR_2)))
  FUNC_2(FUNC_3(VAR_1,
        (FUNC_4(VAR_0),
         FUNC_5("left operand of jsonpath operator %s is not a single numeric value",
          FUNC_13(VAR_6->type)))));

 if (FUNC_1(&VAR_13) != 1 ||
  !(VAR_15 = FUNC_8(FUNC_0(&VAR_13), VAR_2)))
  FUNC_2(FUNC_3(VAR_1,
        (FUNC_4(VAR_0),
         FUNC_5("right operand of jsonpath operator %s is not a single numeric value",
          FUNC_13(VAR_6->type)))));

 if (FUNC_14(VAR_5))
 {
  VAR_16 = VAR_8(VAR_14->val.numeric, VAR_15->val.numeric, ((void*)0));
 }
 else
 {
  bool VAR_17 = 0;

  VAR_16 = VAR_8(VAR_14->val.numeric, VAR_15->val.numeric, &VAR_17);

  if (VAR_17)
   return VAR_3;
 }

 if (!FUNC_11(VAR_6, &VAR_11) && !VAR_9)
  return VAR_4;

 VAR_14 = FUNC_15(sizeof(*VAR_14));
 VAR_14->type = VAR_2;
 VAR_14->val.numeric = VAR_16;

 return FUNC_7(VAR_5, VAR_6, &VAR_11, VAR_14, VAR_9, 0);
}
