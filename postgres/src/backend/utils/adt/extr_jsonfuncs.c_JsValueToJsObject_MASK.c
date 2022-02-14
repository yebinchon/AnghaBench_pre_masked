
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int jsonb_cont; int json_hash; } ;
struct TYPE_19__ {TYPE_3__ val; scalar_t__ is_json; } ;
struct TYPE_12__ {scalar_t__ len; int str; } ;
struct TYPE_13__ {TYPE_6__* jsonb; TYPE_1__ json; } ;
struct TYPE_18__ {TYPE_2__ val; scalar_t__ is_json; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_16__ {TYPE_4__ binary; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_5__ val; } ;
typedef TYPE_6__ JsonbValue ;
typedef TYPE_7__ JsValue ;
typedef TYPE_8__ JsObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(JsValue *VAR_3, JsObject *VAR_4)
{
 VAR_4->is_json = VAR_3->is_json;

 if (VAR_3->is_json)
 {

  VAR_4->val.json_hash =
   FUNC_6(VAR_3->val.json.str,
         VAR_3->val.json.len >= 0
         ? VAR_3->val.json.len
         : FUNC_7(VAR_3->val.json.str),
         "populate_composite");
 }
 else
 {
  JsonbValue *VAR_5 = VAR_3->val.jsonb;

  if (VAR_5->type == VAR_2 &&
   FUNC_1(VAR_5->val.binary.data))
  {
   VAR_4->val.jsonb_cont = VAR_5->val.binary.data;
  }
  else
  {
   bool VAR_6;

   VAR_6 = FUNC_0(VAR_5) ||
    (VAR_5->type == VAR_2 &&
     FUNC_2(VAR_5->val.binary.data));
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      VAR_6
      ? FUNC_5("cannot call %s on a scalar",
         "populate_composite")
      : FUNC_5("cannot call %s on an array",
         "populate_composite")));
  }
 }
}
