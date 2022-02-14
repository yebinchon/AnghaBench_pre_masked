
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int int32 ;
struct TYPE_28__ {int root; } ;
struct TYPE_23__ {int len; int * data; } ;
struct TYPE_22__ {int len; int val; } ;
struct TYPE_24__ {TYPE_4__ binary; int numeric; scalar_t__ boolean; TYPE_3__ string; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_5__ val; } ;
struct TYPE_26__ {int typioparam; int typiofunc; } ;
struct TYPE_25__ {char* data; } ;
struct TYPE_20__ {int len; char* str; scalar_t__ type; } ;
struct TYPE_21__ {TYPE_8__* jsonb; TYPE_1__ json; } ;
struct TYPE_19__ {TYPE_2__ val; scalar_t__ is_json; } ;
typedef TYPE_6__ StringInfoData ;
typedef TYPE_7__ ScalarIOData ;
typedef scalar_t__ Oid ;
typedef TYPE_8__ JsonbValue ;
typedef TYPE_9__ Jsonb ;
typedef TYPE_10__ JsValue ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_9__*) ;
 char* FUNC_5 (int *,int *,int ) ;
 TYPE_9__* FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (TYPE_6__*,char*) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,char*,int) ;
 int VAR_8 ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int ,int ) ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static Datum
FUNC_17(ScalarIOData *VAR_9, Oid VAR_10, int32 VAR_11, JsValue *VAR_12)
{
 Datum VAR_13;
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);

 if (VAR_12->is_json)
 {
  int VAR_16 = VAR_12->val.json.len;

  VAR_15 = VAR_12->val.json.str;
  FUNC_0(VAR_15);
  if (VAR_16 >= 0)
  {

   VAR_14 = FUNC_13(VAR_16 + 1 * sizeof(char));
   FUNC_12(VAR_14, VAR_15, VAR_16);
   VAR_14[VAR_16] = '\0';
  }
  else
   VAR_14 = VAR_15;


  if ((VAR_10 == VAR_2 || VAR_10 == VAR_1) &&
   VAR_12->val.json.type == VAR_3)
  {
   StringInfoData VAR_17;

   FUNC_11(&VAR_17);
   FUNC_10(&VAR_17, VAR_14);

   if (VAR_14 != VAR_15)
    FUNC_14(VAR_14);
   VAR_14 = VAR_17.data;
  }
 }
 else
 {
  JsonbValue *VAR_18 = VAR_12->val.jsonb;

  if (VAR_10 == VAR_1)
  {
   Jsonb *VAR_19 = FUNC_6(VAR_18);

   return FUNC_4(VAR_19);
  }

  else if (VAR_10 == VAR_2 && VAR_18->type != VAR_4)
  {




   Jsonb *VAR_20 = FUNC_6(VAR_18);

   VAR_14 = FUNC_5(((void*)0), &VAR_20->root, FUNC_8(VAR_20));
  }
  else if (VAR_18->type == VAR_7)
   VAR_14 = FUNC_15(VAR_18->val.string.val, VAR_18->val.string.len);
  else if (VAR_18->type == VAR_5)
   VAR_14 = FUNC_16(VAR_18->val.boolean ? "true" : "false");
  else if (VAR_18->type == VAR_6)
   VAR_14 = FUNC_1(FUNC_2(VAR_8,
               FUNC_7(VAR_18->val.numeric)));
  else if (VAR_18->type == VAR_4)
   VAR_14 = FUNC_5(((void*)0), VAR_18->val.binary.data,
         VAR_18->val.binary.len);
  else
   FUNC_9(VAR_0, "unrecognized jsonb type: %d", (int) VAR_18->type);
 }

 VAR_13 = FUNC_3(&VAR_9->typiofunc, VAR_14, VAR_9->typioparam, VAR_11);


 if (VAR_14 != VAR_15)
  FUNC_14(VAR_14);

 return VAR_13;
}
