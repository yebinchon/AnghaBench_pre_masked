
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int curItemMatches; int recheckCurItem; int isFinished; int nentries; scalar_t__ (* triConsistentFn ) (TYPE_2__*) ;int nrequired; int nadditional; int * scanEntry; int * requiredEntries; int * additionalEntries; scalar_t__* entryRes; int curItem; } ;
struct TYPE_7__ {int keyCtx; int tempCtx; } ;
typedef int MemoryContext ;
typedef int GinState ;
typedef TYPE_1__* GinScanOpaque ;
typedef TYPE_2__* GinScanKey ;
typedef int GinScanEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int*,int,int,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(GinState *VAR_4, GinScanOpaque VAR_5, GinScanKey VAR_6)
{
 MemoryContext VAR_7 = VAR_0;
 int VAR_8;
 int VAR_9;
 int *VAR_10;

 FUNC_0(&VAR_6->curItem);
 VAR_6->curItemMatches = 0;
 VAR_6->recheckCurItem = 0;
 VAR_6->isFinished = 0;
 if (VAR_6->nentries > 1)
 {
  FUNC_2(VAR_5->tempCtx);

  VAR_10 = (int *) FUNC_3(sizeof(int) * VAR_6->nentries);
  for (VAR_8 = 0; VAR_8 < VAR_6->nentries; VAR_8++)
   VAR_10[VAR_8] = VAR_8;
  FUNC_4(VAR_10, VAR_6->nentries, sizeof(int),
      VAR_3, VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_6->nentries - 1; VAR_8++)
  {

   for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++)
    VAR_6->entryRes[VAR_10[VAR_9]] = VAR_1;
   for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_6->nentries; VAR_9++)
    VAR_6->entryRes[VAR_10[VAR_9]] = VAR_2;

   if (VAR_6->triConsistentFn(VAR_6) == VAR_1)
    break;
  }


  FUNC_2(VAR_5->keyCtx);

  VAR_6->nrequired = VAR_8 + 1;
  VAR_6->nadditional = VAR_6->nentries - VAR_6->nrequired;
  VAR_6->requiredEntries = FUNC_3(VAR_6->nrequired * sizeof(GinScanEntry));
  VAR_6->additionalEntries = FUNC_3(VAR_6->nadditional * sizeof(GinScanEntry));

  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->nrequired; VAR_8++)
   VAR_6->requiredEntries[VAR_8] = VAR_6->scanEntry[VAR_10[VAR_9++]];
  for (VAR_8 = 0; VAR_8 < VAR_6->nadditional; VAR_8++)
   VAR_6->additionalEntries[VAR_8] = VAR_6->scanEntry[VAR_10[VAR_9++]];


  FUNC_1(VAR_5->tempCtx);
 }
 else
 {
  FUNC_2(VAR_5->keyCtx);

  VAR_6->nrequired = 1;
  VAR_6->nadditional = 0;
  VAR_6->requiredEntries = FUNC_3(1 * sizeof(GinScanEntry));
  VAR_6->requiredEntries[0] = VAR_6->scanEntry[0];
 }
 FUNC_2(VAR_7);
}
