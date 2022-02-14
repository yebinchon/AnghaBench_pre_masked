
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int vars; } ;
struct TYPE_18__ {int type; } ;
struct TYPE_15__ {int len; int val; } ;
struct TYPE_16__ {TYPE_1__ string; int numeric; int boolean; } ;
struct TYPE_17__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonPathItem ;
typedef TYPE_5__ JsonPathExecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_5(JsonPathExecContext *VAR_5, JsonPathItem *VAR_6,
    JsonbValue *VAR_7)
{
 switch (VAR_6->type)
 {
  case 131:
   VAR_7->type = VAR_2;
   break;
  case 132:
   VAR_7->type = VAR_1;
   VAR_7->val.boolean = FUNC_2(VAR_6);
   break;
  case 130:
   VAR_7->type = VAR_3;
   VAR_7->val.numeric = FUNC_3(VAR_6);
   break;
  case 129:
   VAR_7->type = VAR_4;
   VAR_7->val.string.val = FUNC_4(VAR_6,
             &VAR_7->val.string.len);
   break;
  case 128:
   FUNC_1(VAR_5, VAR_6, VAR_5->vars, VAR_7);
   return;
  default:
   FUNC_0(VAR_0, "unexpected jsonpath item type");
 }
}
