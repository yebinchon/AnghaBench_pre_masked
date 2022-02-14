
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {void* pairs; int nPairs; } ;
struct TYPE_19__ {int rawScalar; int nElems; void* elems; } ;
struct TYPE_21__ {TYPE_2__ object; TYPE_1__ array; } ;
struct TYPE_22__ {int type; TYPE_3__ val; } ;
struct TYPE_23__ {int size; TYPE_4__ contVal; struct TYPE_23__* next; } ;
typedef TYPE_4__ JsonbValue ;
typedef TYPE_5__ JsonbParseState ;
typedef int JsonbPair ;
typedef int JsonbIteratorToken ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;







 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (int ,char*) ;


 int VAR_1 ;
 void* FUNC_6 (int) ;
 TYPE_5__* FUNC_7 (TYPE_5__**) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static JsonbValue *
FUNC_9(JsonbParseState **VAR_2, JsonbIteratorToken VAR_3,
      JsonbValue *VAR_4)
{
 JsonbValue *VAR_5 = ((void*)0);

 switch (VAR_3)
 {
  case 136:
   FUNC_0(!VAR_4 || VAR_4->val.array.rawScalar);
   *VAR_2 = FUNC_7(VAR_2);
   VAR_5 = &(*VAR_2)->contVal;
   (*VAR_2)->contVal.type = 129;
   (*VAR_2)->contVal.val.array.nElems = 0;
   (*VAR_2)->contVal.val.array.rawScalar = (VAR_4 &&
               VAR_4->val.array.rawScalar);
   if (VAR_4 && VAR_4->val.array.nElems > 0)
   {

    FUNC_0(VAR_4->type == 129);
    (*VAR_2)->size = VAR_4->val.array.nElems;
   }
   else
   {
    (*VAR_2)->size = 4;
   }
   (*VAR_2)->contVal.val.array.elems = FUNC_6(sizeof(JsonbValue) *
              (*VAR_2)->size);
   break;
  case 135:
   FUNC_0(!VAR_4);
   *VAR_2 = FUNC_7(VAR_2);
   VAR_5 = &(*VAR_2)->contVal;
   (*VAR_2)->contVal.type = 128;
   (*VAR_2)->contVal.val.object.nPairs = 0;
   (*VAR_2)->size = 4;
   (*VAR_2)->contVal.val.object.pairs = FUNC_6(sizeof(JsonbPair) *
               (*VAR_2)->size);
   break;
  case 131:
   FUNC_0(VAR_4->type == VAR_1);
   FUNC_3(*VAR_2, VAR_4);
   break;
  case 130:
   FUNC_0(FUNC_1(VAR_4));
   FUNC_4(*VAR_2, VAR_4);
   break;
  case 134:
   FUNC_0(FUNC_1(VAR_4));
   FUNC_2(*VAR_2, VAR_4);
   break;
  case 132:
   FUNC_8(&(*VAR_2)->contVal);

  case 133:

   FUNC_0(!VAR_4);
   VAR_5 = &(*VAR_2)->contVal;





   *VAR_2 = (*VAR_2)->next;
   if (*VAR_2)
   {
    switch ((*VAR_2)->contVal.type)
    {
     case 129:
      FUNC_2(*VAR_2, VAR_5);
      break;
     case 128:
      FUNC_4(*VAR_2, VAR_5);
      break;
     default:
      FUNC_5(VAR_0, "invalid jsonb container type");
    }
   }
   break;
  default:
   FUNC_5(VAR_0, "unrecognized jsonb sequential processing token");
 }

 return VAR_5;
}
