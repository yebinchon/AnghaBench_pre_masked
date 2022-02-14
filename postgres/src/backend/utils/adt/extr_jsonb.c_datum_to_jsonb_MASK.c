
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int text ;
typedef int sem ;
struct TYPE_18__ {int rawScalar; int nElems; } ;
struct TYPE_19__ {char* val; void* len; } ;
struct TYPE_20__ {TYPE_1__ array; TYPE_2__ string; int numeric; int boolean; } ;
struct TYPE_21__ {int type; TYPE_3__ val; } ;
struct TYPE_25__ {TYPE_4__ contVal; } ;
struct TYPE_24__ {int object_field_start; int scalar; int array_end; int object_end; int array_start; int object_start; void* semstate; } ;
struct TYPE_23__ {int root; } ;
struct TYPE_22__ {TYPE_8__* parseState; void* res; } ;
typedef int Oid ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbTypeCategory ;
typedef int JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef TYPE_5__ JsonbInState ;
typedef TYPE_6__ Jsonb ;
typedef TYPE_7__ JsonSemAction ;
typedef int JsonLexContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_6__*) ;
 void* FUNC_9 (int *,int ,int ,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int **,TYPE_4__*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 char* FUNC_14 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int ,TYPE_5__*) ;
 void* FUNC_16 (void*) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,TYPE_5__*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*) ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_23 (int *,int) ;
 int FUNC_24 (TYPE_7__*,int ,int) ;
 int VAR_24 ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int *,TYPE_7__*) ;
 void* FUNC_27 (TYPE_8__**,int ,TYPE_4__*) ;
 int * FUNC_28 (char*,char) ;
 void* FUNC_29 (char*) ;

__attribute__((used)) static void
FUNC_30(Datum VAR_25, bool VAR_26, JsonbInState *VAR_27,
      JsonbTypeCategory VAR_28, Oid VAR_29,
      bool VAR_30)
{
 char *VAR_31;
 bool VAR_32;
 JsonbValue VAR_33;
 bool VAR_34 = 0;

 FUNC_17();


 if (VAR_26)
 {
  FUNC_0(!VAR_30);
  VAR_33.type = VAR_15;
 }
 else if (VAR_30 &&
    (VAR_28 == 139 ||
     VAR_28 == 137 ||
     VAR_28 == 135 ||
     VAR_28 == 134 ||
     VAR_28 == 133))
 {
  FUNC_20(VAR_2,
    (FUNC_21(VAR_1),
     FUNC_22("key value must be scalar, not array, composite, or json")));
 }
 else
 {
  if (VAR_28 == 133)
   VAR_25 = FUNC_13(VAR_29, VAR_25);

  switch (VAR_28)
  {
   case 139:
    FUNC_15(VAR_25, VAR_27);
    break;
   case 137:
    FUNC_18(VAR_25, VAR_27);
    break;
   case 138:
    if (VAR_30)
    {
     VAR_31 = FUNC_2(VAR_25) ? "true" : "false";
     VAR_33.type = VAR_17;
     VAR_33.val.string.len = FUNC_29(VAR_31);
     VAR_33.val.string.val = VAR_31;
    }
    else
    {
     VAR_33.type = VAR_14;
     VAR_33.val.boolean = FUNC_2(VAR_25);
    }
    break;
   case 132:
    VAR_31 = FUNC_14(VAR_29, VAR_25);
    if (VAR_30)
    {

     VAR_33.type = VAR_17;
     VAR_33.val.string.len = FUNC_29(VAR_31);
     VAR_33.val.string.val = VAR_31;
    }
    else
    {





     VAR_32 = (FUNC_28(VAR_31, 'N') != ((void*)0) ||
          FUNC_28(VAR_31, 'n') != ((void*)0));
     if (!VAR_32)
     {
      Datum VAR_35;

      VAR_33.type = VAR_16;
      VAR_35 = FUNC_6(VAR_24,
               FUNC_1(VAR_31),
               FUNC_12(VAR_3),
               FUNC_7(-1));
      VAR_33.val.numeric = FUNC_4(VAR_35);
      FUNC_25(VAR_31);
     }
     else
     {
      VAR_33.type = VAR_17;
      VAR_33.val.string.len = FUNC_29(VAR_31);
      VAR_33.val.string.val = VAR_31;
     }
    }
    break;
   case 136:
    VAR_33.type = VAR_17;
    VAR_33.val.string.val = FUNC_9(((void*)0), VAR_25,
                VAR_0, ((void*)0));
    VAR_33.val.string.len = FUNC_29(VAR_33.val.string.val);
    break;
   case 131:
    VAR_33.type = VAR_17;
    VAR_33.val.string.val = FUNC_9(((void*)0), VAR_25,
                VAR_4, ((void*)0));
    VAR_33.val.string.len = FUNC_29(VAR_33.val.string.val);
    break;
   case 130:
    VAR_33.type = VAR_17;
    VAR_33.val.string.val = FUNC_9(((void*)0), VAR_25,
                VAR_5, ((void*)0));
    VAR_33.val.string.len = FUNC_29(VAR_33.val.string.val);
    break;
   case 133:
   case 135:
    {

     JsonLexContext *VAR_36;
     JsonSemAction VAR_37;
     text *VAR_38 = FUNC_5(VAR_25);

     VAR_36 = FUNC_23(VAR_38, 1);

     FUNC_24(&VAR_37, 0, sizeof(VAR_37));

     VAR_37.semstate = (void *) VAR_27;

     VAR_37.object_start = VAR_22;
     VAR_37.array_start = VAR_19;
     VAR_37.object_end = VAR_20;
     VAR_37.array_end = VAR_18;
     VAR_37.scalar = VAR_23;
     VAR_37.object_field_start = VAR_21;

     FUNC_26(VAR_36, &VAR_37);

    }
    break;
   case 134:
    {
     Jsonb *VAR_39 = FUNC_3(VAR_25);
     JsonbIterator *VAR_40;

     VAR_40 = FUNC_10(&VAR_39->root);

     if (FUNC_8(VAR_39))
     {
      (void) FUNC_11(&VAR_40, &VAR_33, 1);
      FUNC_0(VAR_33.type == 129);
      (void) FUNC_11(&VAR_40, &VAR_33, 1);
      VAR_34 = 1;
     }
     else
     {
      JsonbIteratorToken VAR_41;

      while ((VAR_41 = FUNC_11(&VAR_40, &VAR_33, 0))
          != VAR_8)
      {
       if (VAR_41 == VAR_10 || VAR_41 == VAR_11 ||
        VAR_41 == VAR_6 || VAR_41 == VAR_7)
        VAR_27->res = FUNC_27(&VAR_27->parseState,
                VAR_41, ((void*)0));
       else
        VAR_27->res = FUNC_27(&VAR_27->parseState,
                VAR_41, &VAR_33);
      }
     }
    }
    break;
   default:
    VAR_31 = FUNC_14(VAR_29, VAR_25);
    VAR_33.type = VAR_17;
    VAR_33.val.string.len = FUNC_16(FUNC_29(VAR_31));
    VAR_33.val.string.val = VAR_31;
    break;
  }
 }


 if (!VAR_26 && !VAR_34 &&
  VAR_28 >= 135 && VAR_28 <= 133)
 {

  return;
 }
 else if (VAR_27->parseState == ((void*)0))
 {

  JsonbValue VAR_42;

  VAR_42.type = 129;
  VAR_42.val.array.rawScalar = 1;
  VAR_42.val.array.nElems = 1;

  VAR_27->res = FUNC_27(&VAR_27->parseState, VAR_6, &VAR_42);
  VAR_27->res = FUNC_27(&VAR_27->parseState, VAR_9, &VAR_33);
  VAR_27->res = FUNC_27(&VAR_27->parseState, VAR_10, ((void*)0));
 }
 else
 {
  JsonbValue *VAR_43 = &VAR_27->parseState->contVal;

  switch (VAR_43->type)
  {
   case 129:
    VAR_27->res = FUNC_27(&VAR_27->parseState, VAR_9, &VAR_33);
    break;
   case 128:
    VAR_27->res = FUNC_27(&VAR_27->parseState,
            VAR_30 ? VAR_12 : VAR_13,
            &VAR_33);
    break;
   default:
    FUNC_19(VAR_2, "unexpected parent of nested structure");
  }
 }
}
