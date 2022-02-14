
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int state; size_t nElems; size_t curIndex; int * children; int curValueOffset; int curDataOffset; int dataProper; int container; int isScalar; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {size_t nPairs; } ;
struct TYPE_15__ {size_t nElems; int rawScalar; } ;
struct TYPE_18__ {TYPE_3__ binary; TYPE_2__ object; TYPE_1__ array; } ;
struct TYPE_19__ {TYPE_4__ val; int type; } ;
typedef TYPE_5__ JsonbValue ;
typedef int JsonbIteratorToken ;
typedef TYPE_6__ JsonbIterator ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,size_t,int ,int ,TYPE_5__*) ;
 TYPE_6__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,size_t) ;
 TYPE_6__* FUNC_6 (int ,TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

JsonbIteratorToken
FUNC_7(JsonbIterator **VAR_12, JsonbValue *VAR_13, bool VAR_14)
{
 if (*VAR_12 == ((void*)0))
  return VAR_3;







recurse:
 switch ((*VAR_12)->state)
 {
  case 131:

   VAR_13->type = VAR_9;
   VAR_13->val.array.nElems = (*VAR_12)->nElems;





   VAR_13->val.array.rawScalar = (*VAR_12)->isScalar;
   (*VAR_12)->curIndex = 0;
   (*VAR_12)->curDataOffset = 0;
   (*VAR_12)->curValueOffset = 0;

   (*VAR_12)->state = 132;
   return VAR_1;

  case 132:
   if ((*VAR_12)->curIndex >= (*VAR_12)->nElems)
   {






    *VAR_12 = FUNC_4(*VAR_12);
    return VAR_5;
   }

   FUNC_3((*VAR_12)->container, (*VAR_12)->curIndex,
         (*VAR_12)->dataProper, (*VAR_12)->curDataOffset,
         VAR_13);

   FUNC_1((*VAR_12)->curDataOffset,
          (*VAR_12)->children[(*VAR_12)->curIndex]);
   (*VAR_12)->curIndex++;

   if (!FUNC_0(VAR_13) && !VAR_14)
   {

    *VAR_12 = FUNC_6(VAR_13->val.binary.data, *VAR_12);
    goto recurse;
   }
   else
   {




    return VAR_4;
   }

  case 129:

   VAR_13->type = VAR_10;
   VAR_13->val.object.nPairs = (*VAR_12)->nElems;





   (*VAR_12)->curIndex = 0;
   (*VAR_12)->curDataOffset = 0;
   (*VAR_12)->curValueOffset = FUNC_5((*VAR_12)->container,
               (*VAR_12)->nElems);

   (*VAR_12)->state = 130;
   return VAR_2;

  case 130:
   if ((*VAR_12)->curIndex >= (*VAR_12)->nElems)
   {






    *VAR_12 = FUNC_4(*VAR_12);
    return VAR_6;
   }
   else
   {

    FUNC_3((*VAR_12)->container, (*VAR_12)->curIndex,
          (*VAR_12)->dataProper, (*VAR_12)->curDataOffset,
          VAR_13);
    if (VAR_13->type != VAR_11)
     FUNC_2(VAR_0, "unexpected jsonb type as object key");


    (*VAR_12)->state = 128;
    return VAR_7;
   }

  case 128:

   (*VAR_12)->state = 130;

   FUNC_3((*VAR_12)->container, (*VAR_12)->curIndex + (*VAR_12)->nElems,
         (*VAR_12)->dataProper, (*VAR_12)->curValueOffset,
         VAR_13);

   FUNC_1((*VAR_12)->curDataOffset,
          (*VAR_12)->children[(*VAR_12)->curIndex]);
   FUNC_1((*VAR_12)->curValueOffset,
          (*VAR_12)->children[(*VAR_12)->curIndex + (*VAR_12)->nElems]);
   (*VAR_12)->curIndex++;






   if (!FUNC_0(VAR_13) && !VAR_14)
   {
    *VAR_12 = FUNC_6(VAR_13->val.binary.data, *VAR_12);
    goto recurse;
   }
   else
    return VAR_8;
 }

 FUNC_2(VAR_0, "invalid iterator state");
 return -1;
}
