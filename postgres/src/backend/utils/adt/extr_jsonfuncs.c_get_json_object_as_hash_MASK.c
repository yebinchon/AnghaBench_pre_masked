
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_9__ {int entrysize; int hcxt; int keysize; } ;
struct TYPE_8__ {char const* function_name; int * lex; int * hash; } ;
struct TYPE_7__ {int object_field_end; int object_field_start; int scalar; int array_start; void* semstate; } ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;
typedef int JsonHashEntry ;
typedef TYPE_2__ JHashState ;
typedef int HTAB ;
typedef TYPE_3__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*,int,TYPE_3__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static HTAB *
FUNC_5(char *VAR_8, int VAR_9, const char *VAR_10)
{
 HASHCTL VAR_11;
 HTAB *VAR_12;
 JHashState *VAR_13;
 JsonLexContext *VAR_14 = FUNC_1(VAR_8, VAR_9, 1);
 JsonSemAction *VAR_15;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.keysize = VAR_3;
 VAR_11.entrysize = sizeof(JsonHashEntry);
 VAR_11.hcxt = VAR_0;
 VAR_12 = FUNC_0("json object hashtable",
       100,
       &VAR_11,
       VAR_2 | VAR_1);

 VAR_13 = FUNC_3(sizeof(JHashState));
 VAR_15 = FUNC_3(sizeof(JsonSemAction));

 VAR_13->function_name = VAR_10;
 VAR_13->hash = VAR_12;
 VAR_13->lex = VAR_14;

 VAR_15->semstate = (void *) VAR_13;
 VAR_15->array_start = VAR_4;
 VAR_15->scalar = VAR_7;
 VAR_15->object_field_start = VAR_6;
 VAR_15->object_field_end = VAR_5;

 FUNC_4(VAR_14, VAR_15);

 return VAR_12;
}
