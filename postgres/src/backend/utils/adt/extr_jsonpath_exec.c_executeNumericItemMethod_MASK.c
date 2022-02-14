
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int type; } ;
struct TYPE_17__ {int numeric; } ;
struct TYPE_18__ {TYPE_1__ val; int type; } ;
typedef int PGFunction ;
typedef TYPE_2__ JsonbValue ;
typedef int JsonValueList ;
typedef TYPE_3__ JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,TYPE_3__*,TYPE_2__*,int *,int) ;
 int FUNC_9 (int *,TYPE_3__*,TYPE_3__*,TYPE_2__*,int *,int) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (int) ;

__attribute__((used)) static JsonPathExecResult
FUNC_14(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6,
       JsonbValue *VAR_7, bool VAR_8, PGFunction VAR_9,
       JsonValueList *VAR_10)
{
 JsonPathItem VAR_11;
 Datum VAR_12;

 if (VAR_8 && FUNC_2(VAR_7) == VAR_2)
  return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_10, 0);

 if (!(VAR_7 = FUNC_10(VAR_7, VAR_3)))
  FUNC_4(FUNC_5(VAR_1,
        (FUNC_6(VAR_0),
         FUNC_7("jsonpath item method .%s() can only be applied to a numeric value",
          FUNC_12(VAR_6->type)))));

 VAR_12 = FUNC_1(VAR_9, FUNC_3(VAR_7->val.numeric));

 if (!FUNC_11(VAR_6, &VAR_11) && !VAR_10)
  return VAR_4;

 VAR_7 = FUNC_13(sizeof(*VAR_7));
 VAR_7->type = VAR_3;
 VAR_7->val.numeric = FUNC_0(VAR_12);

 return FUNC_9(VAR_5, VAR_6, &VAR_11, VAR_7, VAR_10, 0);
}
