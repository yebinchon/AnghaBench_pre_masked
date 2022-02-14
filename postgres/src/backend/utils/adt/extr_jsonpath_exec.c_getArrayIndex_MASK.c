
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_12__ {int member_0; } ;
struct TYPE_10__ {int numeric; } ;
struct TYPE_11__ {TYPE_1__ val; } ;
typedef TYPE_2__ JsonbValue ;
typedef TYPE_3__ JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *,TYPE_2__*,TYPE_3__*) ;
 TYPE_2__* FUNC_11 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 (int ,int*) ;
 int VAR_4 ;

__attribute__((used)) static JsonPathExecResult
FUNC_14(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6, JsonbValue *VAR_7,
     int32 *VAR_8)
{
 JsonbValue *VAR_9;
 JsonValueList VAR_10 = {0};
 JsonPathExecResult VAR_11 = FUNC_10(VAR_5, VAR_6, VAR_7, &VAR_10);
 Datum VAR_12;
 bool VAR_13 = 0;

 if (FUNC_12(VAR_11))
  return VAR_11;

 if (FUNC_4(&VAR_10) != 1 ||
  !(VAR_9 = FUNC_11(FUNC_3(&VAR_10), VAR_2)))
  FUNC_6(FUNC_7(VAR_1,
        (FUNC_8(VAR_0),
         FUNC_9("jsonpath array subscript is not a single numeric value"))));

 VAR_12 = FUNC_1(VAR_4,
          FUNC_5(VAR_9->val.numeric),
          FUNC_2(0));

 *VAR_8 = FUNC_13(FUNC_0(VAR_12),
         &VAR_13);

 if (VAR_13)
  FUNC_6(FUNC_7(VAR_1,
        (FUNC_8(VAR_0),
         FUNC_9("jsonpath array subscript is out of integer range"))));

 return VAR_3;
}
