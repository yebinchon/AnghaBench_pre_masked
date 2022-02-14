
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ type; } ;
struct TYPE_19__ {int root; } ;
struct TYPE_16__ {char* val; int len; } ;
struct TYPE_17__ {TYPE_1__ string; } ;
struct TYPE_18__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ Jsonb ;
typedef TYPE_5__ JsonPathItem ;
typedef int JsonPathExecContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 TYPE_3__* FUNC_5 (int *,int ,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_6 (TYPE_5__*,int*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int *,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_10(JsonPathExecContext *VAR_6, JsonPathItem *VAR_7,
     Jsonb *VAR_8, JsonbValue *VAR_9)
{
 char *VAR_10;
 int VAR_11;
 JsonbValue VAR_12;
 JsonbValue *VAR_13;

 if (!VAR_8)
 {
  VAR_9->type = VAR_3;
  return;
 }

 FUNC_0(VAR_7->type == VAR_5);
 VAR_10 = FUNC_6(VAR_7, &VAR_11);
 VAR_12.type = VAR_4;
 VAR_12.val.string.val = VAR_10;
 VAR_12.val.string.len = VAR_11;

 VAR_13 = FUNC_5(&VAR_8->root, VAR_2, &VAR_12);

 if (VAR_13)
 {
  *VAR_9 = *VAR_13;
  FUNC_7(VAR_13);
 }
 else
 {
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("could not find jsonpath variable \"%s\"",
      FUNC_8(VAR_10, VAR_11))));
 }

 FUNC_1(&VAR_12, VAR_8);
 FUNC_9(VAR_6, &VAR_12, 1);
}
