
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rawScalar; int nElems; } ;
struct TYPE_8__ {char* val; int len; } ;
struct TYPE_10__ {int boolean; TYPE_2__ array; int numeric; TYPE_1__ string; } ;
struct TYPE_11__ {int type; TYPE_3__ val; } ;
struct TYPE_13__ {TYPE_4__ contVal; } ;
struct TYPE_12__ {TYPE_6__* parseState; void* res; } ;
typedef TYPE_4__ JsonbValue ;
typedef TYPE_5__ JsonbInState ;
typedef int JsonTokenType ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;





 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_8 (TYPE_6__**,int ,TYPE_4__*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_11, char *VAR_12, JsonTokenType VAR_13)
{
 JsonbInState *VAR_14 = (JsonbInState *) VAR_11;
 JsonbValue VAR_15;
 Datum VAR_16;

 switch (VAR_13)
 {

  case 131:
   FUNC_0(VAR_12 != ((void*)0));
   VAR_15.type = VAR_9;
   VAR_15.val.string.len = FUNC_6(FUNC_9(VAR_12));
   VAR_15.val.string.val = VAR_12;
   break;
  case 132:





   FUNC_0(VAR_12 != ((void*)0));
   VAR_15.type = VAR_8;
   VAR_16 = FUNC_3(VAR_10,
            FUNC_1(VAR_12),
            FUNC_5(VAR_1),
            FUNC_4(-1));
   VAR_15.val.numeric = FUNC_2(VAR_16);
   break;
  case 130:
   VAR_15.type = VAR_6;
   VAR_15.val.boolean = 1;
   break;
  case 134:
   VAR_15.type = VAR_6;
   VAR_15.val.boolean = 0;
   break;
  case 133:
   VAR_15.type = VAR_7;
   break;
  default:

   FUNC_7(VAR_0, "invalid json token type");
   break;
 }

 if (VAR_14->parseState == ((void*)0))
 {

  JsonbValue VAR_17;

  VAR_17.type = 129;
  VAR_17.val.array.rawScalar = 1;
  VAR_17.val.array.nElems = 1;

  VAR_14->res = FUNC_8(&VAR_14->parseState, VAR_2, &VAR_17);
  VAR_14->res = FUNC_8(&VAR_14->parseState, VAR_3, &VAR_15);
  VAR_14->res = FUNC_8(&VAR_14->parseState, VAR_4, ((void*)0));
 }
 else
 {
  JsonbValue *VAR_18 = &VAR_14->parseState->contVal;

  switch (VAR_18->type)
  {
   case 129:
    VAR_14->res = FUNC_8(&VAR_14->parseState, VAR_3, &VAR_15);
    break;
   case 128:
    VAR_14->res = FUNC_8(&VAR_14->parseState, VAR_5, &VAR_15);
    break;
   default:
    FUNC_7(VAR_0, "unexpected parent of nested structure");
  }
 }
}
