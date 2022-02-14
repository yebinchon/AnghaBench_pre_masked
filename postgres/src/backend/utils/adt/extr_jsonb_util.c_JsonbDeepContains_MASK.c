
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_27__ {int container; } ;
struct TYPE_24__ {int data; } ;
struct TYPE_23__ {int nElems; scalar_t__ rawScalar; } ;
struct TYPE_22__ {int len; int val; } ;
struct TYPE_21__ {scalar_t__ nPairs; } ;
struct TYPE_25__ {TYPE_4__ binary; TYPE_3__ array; TYPE_2__ string; TYPE_1__ object; } ;
struct TYPE_26__ {scalar_t__ type; TYPE_5__ val; } ;
typedef TYPE_6__ JsonbValue ;
typedef scalar_t__ JsonbIteratorToken ;
typedef TYPE_7__ JsonbIterator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_7__**,TYPE_6__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_7 (int ,int ,TYPE_6__*) ;
 TYPE_6__* FUNC_8 (int ,int ,int ,TYPE_6__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_6__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_7__*) ;

bool
FUNC_11(JsonbIterator **VAR_13, JsonbIterator **VAR_14)
{
 JsonbValue VAR_15,
    VAR_16;
 JsonbIteratorToken VAR_17,
    VAR_18;







 FUNC_4();

 VAR_17 = FUNC_3(VAR_13, &VAR_15, 0);
 VAR_18 = FUNC_3(VAR_14, &VAR_16, 0);

 if (VAR_17 != VAR_18)
 {






  FUNC_0(VAR_17 == VAR_3 || VAR_17 == VAR_2);
  FUNC_0(VAR_18 == VAR_3 || VAR_18 == VAR_2);
  return 0;
 }
 else if (VAR_18 == VAR_3)
 {
  FUNC_0(VAR_15.type == VAR_11);
  FUNC_0(VAR_16.type == VAR_11);
  if (VAR_15.val.object.nPairs < VAR_16.val.object.nPairs)
   return 0;


  for (;;)
  {
   JsonbValue *VAR_19;
   JsonbValue VAR_20;

   VAR_18 = FUNC_3(VAR_14, &VAR_16, 0);






   if (VAR_18 == VAR_6)
    return 1;

   FUNC_0(VAR_18 == VAR_7);
   FUNC_0(VAR_16.type == VAR_12);


   VAR_19 =
    FUNC_8((*VAR_13)->container,
            VAR_16.val.string.val,
            VAR_16.val.string.len,
            &VAR_20);
   if (!VAR_19)
    return 0;





   VAR_18 = FUNC_3(VAR_14, &VAR_16, 1);

   FUNC_0(VAR_18 == VAR_8);





   if (VAR_19->type != VAR_16.type)
   {
    return 0;
   }
   else if (FUNC_1(VAR_19))
   {
    if (!FUNC_6(VAR_19, &VAR_16))
     return 0;
   }
   else
   {

    JsonbIterator *VAR_21,
         *VAR_22;

    FUNC_0(VAR_19->type == VAR_10);
    FUNC_0(VAR_16.type == VAR_10);

    VAR_21 = FUNC_2(VAR_19->val.binary.data);
    VAR_22 = FUNC_2(VAR_16.val.binary.data);
    if (!FUNC_11(&VAR_21, &VAR_22))
     return 0;
   }
  }
 }
 else if (VAR_18 == VAR_2)
 {
  JsonbValue *VAR_23 = ((void*)0);
  uint32 VAR_24 = VAR_15.val.array.nElems;

  FUNC_0(VAR_15.type == VAR_9);
  FUNC_0(VAR_16.type == VAR_9);
  if (VAR_15.val.array.rawScalar && !VAR_16.val.array.rawScalar)
   return 0;


  for (;;)
  {
   VAR_18 = FUNC_3(VAR_14, &VAR_16, 1);






   if (VAR_18 == VAR_5)
    return 1;

   FUNC_0(VAR_18 == VAR_4);

   if (FUNC_1(&VAR_16))
   {
    if (!FUNC_7((*VAR_13)->container,
             VAR_1,
             &VAR_16))
     return 0;
   }
   else
   {
    uint32 VAR_25;





    if (VAR_23 == ((void*)0))
    {
     uint32 VAR_26 = 0;


     VAR_23 = FUNC_9(sizeof(JsonbValue) * VAR_24);

     for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++)
     {

      VAR_18 = FUNC_3(VAR_13, &VAR_15, 1);
      FUNC_0(VAR_18 == VAR_4);

      if (VAR_15.type == VAR_10)
       VAR_23[VAR_26++] = VAR_15;
     }


     if (VAR_26 == 0)
      return 0;


     VAR_24 = VAR_26;
    }


    for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++)
    {

     JsonbIterator *VAR_27,
          *VAR_28;
     bool VAR_29;

     VAR_27 = FUNC_2(VAR_23[VAR_25].val.binary.data);
     VAR_28 = FUNC_2(VAR_16.val.binary.data);

     VAR_29 = FUNC_11(&VAR_27, &VAR_28);

     if (VAR_27)
      FUNC_10(VAR_27);
     if (VAR_28)
      FUNC_10(VAR_28);
     if (VAR_29)
      break;
    }





    if (VAR_25 == VAR_24)
     return 0;
   }
  }
 }
 else
 {
  FUNC_5(VAR_0, "invalid jsonb container type");
 }

 FUNC_5(VAR_0, "unexpectedly fell off end of jsonb container");
 return 0;
}
