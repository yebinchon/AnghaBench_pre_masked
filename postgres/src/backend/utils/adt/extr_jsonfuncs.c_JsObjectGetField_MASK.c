
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int jsonb_cont; int json_hash; } ;
struct TYPE_15__ {TYPE_2__ val; scalar_t__ is_json; } ;
struct TYPE_10__ {scalar_t__ type; int len; int * str; } ;
struct TYPE_12__ {int * jsonb; TYPE_1__ json; } ;
struct TYPE_14__ {TYPE_3__ val; scalar_t__ is_json; } ;
struct TYPE_13__ {scalar_t__ type; int * val; } ;
typedef TYPE_4__ JsonHashEntry ;
typedef TYPE_5__ JsValue ;
typedef TYPE_6__ JsObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,char*,int ,int *) ;
 TYPE_4__* FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool
FUNC_3(JsObject *VAR_2, char *VAR_3, JsValue *VAR_4)
{
 VAR_4->is_json = VAR_2->is_json;

 if (VAR_4->is_json)
 {
  JsonHashEntry *VAR_5 = FUNC_1(VAR_2->val.json_hash, VAR_3,
              VAR_0, ((void*)0));

  VAR_4->val.json.type = VAR_5 ? VAR_5->type : VAR_1;
  VAR_4->val.json.str = VAR_4->val.json.type == VAR_1 ? ((void*)0) :
   VAR_5->val;
  VAR_4->val.json.len = VAR_4->val.json.str ? -1 : 0;

  return VAR_5 != ((void*)0);
 }
 else
 {
  VAR_4->val.jsonb = !VAR_2->val.jsonb_cont ? ((void*)0) :
   FUNC_0(VAR_2->val.jsonb_cont, VAR_3, FUNC_2(VAR_3),
           ((void*)0));

  return VAR_4->val.jsonb != ((void*)0);
 }
}
