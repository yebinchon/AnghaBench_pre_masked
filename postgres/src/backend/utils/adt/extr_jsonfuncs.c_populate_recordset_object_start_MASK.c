
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_8__ {int entrysize; int hcxt; int keysize; } ;
struct TYPE_7__ {int json_hash; int function_name; TYPE_1__* lex; } ;
struct TYPE_6__ {int lex_level; } ;
typedef TYPE_2__ PopulateRecordsetState ;
typedef int JsonHashEntry ;
typedef TYPE_3__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 PopulateRecordsetState *VAR_7 = (PopulateRecordsetState *) VAR_6;
 int VAR_8 = VAR_7->lex->lex_level;
 HASHCTL VAR_9;


 if (VAR_8 == 0)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("cannot call %s on an object",
      VAR_7->function_name)));


 if (VAR_8 > 1)
  return;


 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = VAR_5;
 VAR_9.entrysize = sizeof(JsonHashEntry);
 VAR_9.hcxt = VAR_0;
 VAR_7->json_hash = FUNC_3("json object hashtable",
         100,
         &VAR_9,
         VAR_4 | VAR_3);
}
