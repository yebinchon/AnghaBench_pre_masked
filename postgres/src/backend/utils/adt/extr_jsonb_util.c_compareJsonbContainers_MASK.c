
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {struct TYPE_16__* parent; } ;
struct TYPE_13__ {int nPairs; } ;
struct TYPE_12__ {int nElems; int rawScalar; } ;
struct TYPE_14__ {TYPE_2__ object; TYPE_1__ array; } ;
struct TYPE_15__ {int type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef scalar_t__ JsonbIteratorToken ;
typedef TYPE_5__ JsonbIterator ;
typedef int JsonbContainer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__**,TYPE_4__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_5__*) ;

int
FUNC_6(JsonbContainer *VAR_4, JsonbContainer *VAR_5)
{
 JsonbIterator *VAR_6,
      *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_1(VAR_5);

 do
 {
  JsonbValue VAR_9,
     VAR_10;
  JsonbIteratorToken VAR_11,
     VAR_12;

  VAR_11 = FUNC_2(&VAR_6, &VAR_9, 0);
  VAR_12 = FUNC_2(&VAR_7, &VAR_10, 0);

  if (VAR_11 == VAR_12)
  {
   if (VAR_11 == VAR_1)
   {

    break;
   }

   if (VAR_11 == VAR_2 || VAR_11 == VAR_3)
   {






    continue;
   }

   if (VAR_9.type == VAR_10.type)
   {
    switch (VAR_9.type)
    {
     case 128:
     case 131:
     case 130:
     case 133:
      VAR_8 = FUNC_3(&VAR_9, &VAR_10);
      break;
     case 135:







      if (VAR_9.val.array.rawScalar != VAR_10.val.array.rawScalar)
       VAR_8 = (VAR_9.val.array.rawScalar) ? -1 : 1;
      if (VAR_9.val.array.nElems != VAR_10.val.array.nElems)
       VAR_8 = (VAR_9.val.array.nElems > VAR_10.val.array.nElems) ? 1 : -1;
      break;
     case 129:
      if (VAR_9.val.object.nPairs != VAR_10.val.object.nPairs)
       VAR_8 = (VAR_9.val.object.nPairs > VAR_10.val.object.nPairs) ? 1 : -1;
      break;
     case 134:
      FUNC_4(VAR_0, "unexpected jbvBinary value");
      break;
     case 132:
      FUNC_4(VAR_0, "unexpected jbvDatetime value");
      break;
    }
   }
   else
   {

    VAR_8 = (VAR_9.type > VAR_10.type) ? 1 : -1;
   }
  }
  else
  {
   FUNC_0(VAR_11 != VAR_2 && VAR_11 != VAR_3);
   FUNC_0(VAR_12 != VAR_2 && VAR_12 != VAR_3);

   FUNC_0(VAR_9.type != VAR_10.type);
   FUNC_0(VAR_9.type != 134);
   FUNC_0(VAR_10.type != 134);

   VAR_8 = (VAR_9.type > VAR_10.type) ? 1 : -1;
  }
 }
 while (VAR_8 == 0);

 while (VAR_6 != ((void*)0))
 {
  JsonbIterator *VAR_13 = VAR_6->parent;

  FUNC_5(VAR_6);
  VAR_6 = VAR_13;
 }
 while (VAR_7 != ((void*)0))
 {
  JsonbIterator *VAR_14 = VAR_7->parent;

  FUNC_5(VAR_7);
  VAR_7 = VAR_14;
 }

 return VAR_8;
}
