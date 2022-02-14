
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * json_hash; } ;
struct TYPE_10__ {int is_json; TYPE_2__ val; } ;
struct TYPE_9__ {int * json_hash; TYPE_1__* lex; } ;
struct TYPE_7__ {int lex_level; } ;
typedef TYPE_3__ PopulateRecordsetState ;
typedef TYPE_4__ JsObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 PopulateRecordsetState *VAR_1 = (PopulateRecordsetState *) VAR_0;
 JsObject VAR_2;


 if (VAR_1->lex->lex_level > 1)
  return;

 VAR_2.is_json = 1;
 VAR_2.val.json_hash = VAR_1->json_hash;


 FUNC_1(VAR_1, &VAR_2);


 FUNC_0(VAR_1->json_hash);
 VAR_1->json_hash = ((void*)0);
}
