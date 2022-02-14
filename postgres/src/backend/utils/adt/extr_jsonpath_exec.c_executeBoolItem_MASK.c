
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_31__ {int member_0; } ;
struct TYPE_27__ {int expr; } ;
struct TYPE_28__ {TYPE_1__ like_regex; } ;
struct TYPE_30__ {int type; TYPE_2__ content; int base; } ;
struct TYPE_29__ {int member_0; } ;
typedef int JsonbValue ;
typedef TYPE_3__ JsonValueList ;
typedef TYPE_4__ JsonPathItem ;
typedef int JsonPathExecResult ;
typedef TYPE_5__ JsonPathExecContext ;
typedef int JsonPathBool ;
typedef TYPE_5__ JsonLikeRegexContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int *,int,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int *,int,int ,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_5__*) ;

__attribute__((used)) static JsonPathBool
FUNC_11(JsonPathExecContext *VAR_8, JsonPathItem *VAR_9,
    JsonbValue *VAR_10, bool VAR_11)
{
 JsonPathItem VAR_12;
 JsonPathItem VAR_13;
 JsonPathBool VAR_14;
 JsonPathBool VAR_15;

 if (!VAR_11 && FUNC_8(VAR_9))
  FUNC_1(VAR_0, "boolean jsonpath item cannot have next item");

 switch (VAR_9->type)
 {
  case 140:
   FUNC_6(VAR_9, &VAR_12);
   VAR_14 = FUNC_11(VAR_8, &VAR_12, VAR_10, 0);

   if (VAR_14 == VAR_4)
    return VAR_4;






   FUNC_7(VAR_9, &VAR_13);
   VAR_15 = FUNC_11(VAR_8, &VAR_13, VAR_10, 0);

   return VAR_15 == VAR_5 ? VAR_14 : VAR_15;

  case 129:
   FUNC_6(VAR_9, &VAR_12);
   VAR_14 = FUNC_11(VAR_8, &VAR_12, VAR_10, 0);

   if (VAR_14 == VAR_5)
    return VAR_5;

   FUNC_7(VAR_9, &VAR_13);
   VAR_15 = FUNC_11(VAR_8, &VAR_13, VAR_10, 0);

   return VAR_15 == VAR_4 ? VAR_14 : VAR_15;

  case 131:
   FUNC_5(VAR_9, &VAR_12);

   VAR_14 = FUNC_11(VAR_8, &VAR_12, VAR_10, 0);

   if (VAR_14 == VAR_6)
    return VAR_6;

   return VAR_14 == VAR_5 ? VAR_4 : VAR_5;

  case 135:
   FUNC_5(VAR_9, &VAR_12);
   VAR_14 = FUNC_11(VAR_8, &VAR_12, VAR_10, 0);
   return VAR_14 == VAR_6 ? VAR_5 : VAR_4;

  case 139:
  case 130:
  case 134:
  case 137:
  case 133:
  case 136:
   FUNC_6(VAR_9, &VAR_12);
   FUNC_7(VAR_9, &VAR_13);
   return FUNC_3(VAR_8, VAR_9, &VAR_12, &VAR_13, VAR_10, 1,
         VAR_1, VAR_8);

  case 128:
   FUNC_6(VAR_9, &VAR_12);
   FUNC_7(VAR_9, &VAR_13);
   return FUNC_3(VAR_8, VAR_9, &VAR_12, &VAR_13, VAR_10, 0,
         VAR_3, ((void*)0));

  case 132:
   {






    JsonLikeRegexContext VAR_16 = {0};

    FUNC_9(&VAR_12, VAR_9->base,
        VAR_9->content.like_regex.expr);

    return FUNC_3(VAR_8, VAR_9, &VAR_12, ((void*)0), VAR_10, 0,
          VAR_2, &VAR_16);
   }

  case 138:
   FUNC_5(VAR_9, &VAR_12);

   if (FUNC_10(VAR_8))
   {




    JsonValueList VAR_17 = {0};
    JsonPathExecResult VAR_18 =
    FUNC_2(VAR_8, &VAR_12, VAR_10,
              0, &VAR_17);

    if (FUNC_4(VAR_18))
     return VAR_6;

    return FUNC_0(&VAR_17) ? VAR_4 : VAR_5;
   }
   else
   {
    JsonPathExecResult VAR_19 =
    FUNC_2(VAR_8, &VAR_12, VAR_10,
              0, ((void*)0));

    if (FUNC_4(VAR_19))
     return VAR_6;

    return VAR_19 == VAR_7 ? VAR_5 : VAR_4;
   }

  default:
   FUNC_1(VAR_0, "invalid boolean jsonpath item type: %d", VAR_9->type);
   return VAR_6;
 }
}
