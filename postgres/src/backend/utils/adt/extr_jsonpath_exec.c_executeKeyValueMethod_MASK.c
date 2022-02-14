
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_32__ {scalar_t__ id; scalar_t__ jbc; } ;
struct TYPE_31__ {TYPE_7__ baseObject; int lastGeneratedObjectId; } ;
struct TYPE_30__ {int type; } ;
struct TYPE_27__ {char* val; int len; } ;
struct TYPE_26__ {int * data; } ;
struct TYPE_28__ {int numeric; TYPE_2__ string; TYPE_1__ binary; } ;
struct TYPE_29__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int JsonbContainer ;
typedef int Jsonb ;
typedef int JsonValueList ;
typedef TYPE_5__ JsonPathItem ;
typedef int JsonPathExecResult ;
typedef TYPE_6__ JsonPathExecContext ;
typedef TYPE_7__ JsonBaseObjectInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,TYPE_4__*,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int * FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*,TYPE_5__*,TYPE_4__*,int *,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_18 (int ) ;
 TYPE_4__* FUNC_19 (int **,scalar_t__,TYPE_4__*) ;
 TYPE_7__ FUNC_20 (TYPE_6__*,TYPE_4__*,int ) ;

__attribute__((used)) static JsonPathExecResult
FUNC_21(JsonPathExecContext *VAR_14, JsonPathItem *VAR_15,
       JsonbValue *VAR_16, JsonValueList *VAR_17)
{
 JsonPathExecResult VAR_18 = VAR_12;
 JsonPathItem VAR_19;
 JsonbContainer *VAR_20;
 JsonbValue VAR_21;
 JsonbValue VAR_22;
 JsonbValue VAR_23;
 JsonbValue VAR_24;
 JsonbValue VAR_25;
 JsonbValue VAR_26;
 JsonbIterator *VAR_27;
 JsonbIteratorToken VAR_28;
 int64 VAR_29;
 bool VAR_30;

 if (FUNC_9(VAR_16) != VAR_10 || VAR_16->type != VAR_8)
  FUNC_11(FUNC_12(VAR_1,
        (FUNC_13(VAR_0),
         FUNC_14("jsonpath item method .%s() can only be applied to an object",
          FUNC_18(VAR_15->type)))));

 VAR_20 = VAR_16->val.binary.data;

 if (!FUNC_5(VAR_20))
  return VAR_12;

 VAR_30 = FUNC_17(VAR_15, &VAR_19);

 VAR_24.type = VAR_11;
 VAR_24.val.string.val = "key";
 VAR_24.val.string.len = 3;

 VAR_25.type = VAR_11;
 VAR_25.val.string.val = "value";
 VAR_25.val.string.len = 5;

 VAR_26.type = VAR_11;
 VAR_26.val.string.val = "id";
 VAR_26.val.string.len = 2;


 VAR_29 = VAR_16->type != VAR_8 ? 0 :
  (int64) ((char *) VAR_20 - (char *) VAR_14->baseObject.jbc);
 VAR_29 += (int64) VAR_14->baseObject.id * FUNC_3(10000000000);

 VAR_23.type = VAR_9;
 VAR_23.val.numeric = FUNC_1(FUNC_2(VAR_7,
               FUNC_4(VAR_29)));

 VAR_27 = FUNC_7(VAR_20);

 while ((VAR_28 = FUNC_8(&VAR_27, &VAR_21, 1)) != VAR_3)
 {
  JsonBaseObjectInfo VAR_31;
  JsonbValue VAR_32;
  JsonbParseState *VAR_33;
  JsonbValue *VAR_34;
  Jsonb *VAR_35;

  if (VAR_28 != VAR_5)
   continue;

  VAR_18 = VAR_13;

  if (!VAR_30 && !VAR_17)
   break;

  VAR_28 = FUNC_8(&VAR_27, &VAR_22, 1);
  FUNC_0(VAR_28 == VAR_6);

  VAR_33 = ((void*)0);
  FUNC_19(&VAR_33, VAR_2, ((void*)0));

  FUNC_19(&VAR_33, VAR_5, &VAR_24);
  FUNC_19(&VAR_33, VAR_6, &VAR_21);

  FUNC_19(&VAR_33, VAR_5, &VAR_25);
  FUNC_19(&VAR_33, VAR_6, &VAR_22);

  FUNC_19(&VAR_33, VAR_5, &VAR_26);
  FUNC_19(&VAR_33, VAR_6, &VAR_23);

  VAR_34 = FUNC_19(&VAR_33, VAR_4, ((void*)0));

  VAR_35 = FUNC_10(VAR_34);

  FUNC_6(&VAR_32, VAR_35);

  VAR_31 = FUNC_20(VAR_14, &VAR_32, VAR_14->lastGeneratedObjectId++);

  VAR_18 = FUNC_15(VAR_14, VAR_15, &VAR_19, &VAR_32, VAR_17, 1);

  VAR_14->baseObject = VAR_31;

  if (FUNC_16(VAR_18))
   return VAR_18;

  if (VAR_18 == VAR_13 && !VAR_17)
   break;
 }

 return VAR_18;
}
