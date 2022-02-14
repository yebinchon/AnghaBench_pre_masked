
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_8__ {int isFinished; void* curItem; } ;
struct TYPE_7__ {int isFinished; void* curItem; size_t nrequired; size_t nadditional; size_t nentries; size_t nuserentries; int* entryRes; int (* triConsistentFn ) (TYPE_1__*) ;int curItemMatches; int recheckCurItem; TYPE_2__** scanEntry; TYPE_2__** additionalEntries; TYPE_2__** requiredEntries; } ;
typedef int Snapshot ;
typedef int MemoryContext ;
typedef void* ItemPointerData ;
typedef int GinTernaryValue ;
typedef int GinState ;
typedef TYPE_1__* GinScanKey ;
typedef TYPE_2__* GinScanEntry ;


 int FUNC_0 (int) ;



 scalar_t__ FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void**) ;
 int VAR_0 ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void**,scalar_t__,int ) ;
 int FUNC_5 (void**,scalar_t__) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,TYPE_2__*,void*,int ) ;
 scalar_t__ FUNC_11 (void**,void**) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(GinState *VAR_1, MemoryContext VAR_2, GinScanKey VAR_3,
     ItemPointerData VAR_4, Snapshot VAR_5)
{
 ItemPointerData VAR_6;
 ItemPointerData VAR_7;
 uint32 VAR_8;
 bool VAR_9;
 GinScanEntry VAR_10;
 GinTernaryValue VAR_11;
 MemoryContext VAR_12;
 bool VAR_13;

 FUNC_0(!VAR_3->isFinished);






 if (FUNC_11(&VAR_3->curItem, &VAR_4) > 0)
  return;
 FUNC_6(&VAR_6);
 VAR_13 = 1;
 for (VAR_8 = 0; VAR_8 < VAR_3->nrequired; VAR_8++)
 {
  VAR_10 = VAR_3->requiredEntries[VAR_8];

  if (VAR_10->isFinished)
   continue;
  if (FUNC_11(&VAR_10->curItem, &VAR_4) <= 0)
  {
   FUNC_10(VAR_1, VAR_10, VAR_4, VAR_5);
   if (VAR_10->isFinished)
    continue;
  }

  VAR_13 = 0;
  if (FUNC_11(&VAR_10->curItem, &VAR_6) < 0)
   VAR_6 = VAR_10->curItem;
 }

 if (VAR_13)
 {

  VAR_3->isFinished = 1;
  return;
 }
 if (FUNC_3(&VAR_6))
 {
  if (FUNC_1(&VAR_4) <
   FUNC_1(&VAR_6))
  {
   FUNC_4(&VAR_4,
         FUNC_1(&VAR_6),
         VAR_0);
  }
 }
 else
 {
  FUNC_0(FUNC_2(&VAR_6) > 0);
  FUNC_4(&VAR_4,
        FUNC_1(&VAR_6),
        FUNC_9(FUNC_2(&VAR_6)));
 }
 for (VAR_8 = 0; VAR_8 < VAR_3->nadditional; VAR_8++)
 {
  VAR_10 = VAR_3->additionalEntries[VAR_8];

  if (VAR_10->isFinished)
   continue;

  if (FUNC_11(&VAR_10->curItem, &VAR_4) <= 0)
  {
   FUNC_10(VAR_1, VAR_10, VAR_4, VAR_5);
   if (VAR_10->isFinished)
    continue;
  }






  if (FUNC_11(&VAR_10->curItem, &VAR_6) < 0)
  {
   FUNC_0(FUNC_3(&VAR_6));
   VAR_6 = VAR_10->curItem;
  }
 }
 VAR_3->curItem = VAR_6;
 FUNC_5(&VAR_7,
       FUNC_1(&VAR_3->curItem));
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3->nentries; VAR_8++)
 {
  VAR_10 = VAR_3->scanEntry[VAR_8];
  if (VAR_10->isFinished == 0 &&
   FUNC_11(&VAR_10->curItem, &VAR_7) == 0)
  {
   if (VAR_8 < VAR_3->nuserentries)
    VAR_3->entryRes[VAR_8] = 129;
   else
    VAR_3->entryRes[VAR_8] = 128;
   VAR_9 = 1;
  }
  else
   VAR_3->entryRes[VAR_8] = 130;
 }


 VAR_12 = FUNC_8(VAR_2);

 if (VAR_9)
 {

  VAR_11 = VAR_3->triConsistentFn(VAR_3);

  if (VAR_11 == 128 || VAR_11 == 129)
  {

   FUNC_8(VAR_12);
   FUNC_7(VAR_2);


   VAR_3->curItem = VAR_7;
   VAR_3->curItemMatches = 1;
   VAR_3->recheckCurItem = 1;
   return;
  }
 }
 for (VAR_8 = 0; VAR_8 < VAR_3->nentries; VAR_8++)
 {
  VAR_10 = VAR_3->scanEntry[VAR_8];
  if (VAR_10->isFinished)
   VAR_3->entryRes[VAR_8] = 130;
  else if (FUNC_11(&VAR_10->curItem, &VAR_7) == 0)
   VAR_3->entryRes[VAR_8] = 129;
  else if (FUNC_11(&VAR_10->curItem, &VAR_6) == 0)
   VAR_3->entryRes[VAR_8] = 128;
  else
   VAR_3->entryRes[VAR_8] = 130;
 }

 VAR_11 = VAR_3->triConsistentFn(VAR_3);

 switch (VAR_11)
 {
  case 128:
   VAR_3->curItemMatches = 1;

   break;

  case 130:
   VAR_3->curItemMatches = 0;
   break;

  case 129:
   VAR_3->curItemMatches = 1;
   VAR_3->recheckCurItem = 1;
   break;

  default:





   VAR_3->curItemMatches = 1;
   VAR_3->recheckCurItem = 1;
   break;
 }
 FUNC_8(VAR_12);
 FUNC_7(VAR_2);
}
