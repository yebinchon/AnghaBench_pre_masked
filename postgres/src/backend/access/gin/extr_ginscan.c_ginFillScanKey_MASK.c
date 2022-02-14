
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_10__ {int nentries; int nuserentries; int searchMode; int attnum; int curItemMatches; int recheckCurItem; int isFinished; int * scanEntry; int * additionalEntries; int * requiredEntries; scalar_t__ nadditional; scalar_t__ nrequired; int curItem; int strategy; int ** extra_data; int * queryCategories; scalar_t__* queryValues; scalar_t__ query; int * entryRes; } ;
struct TYPE_8__ {scalar_t__* canPartialMatch; } ;
struct TYPE_9__ {TYPE_1__ ginstate; int nkeys; TYPE_3__* keys; } ;
typedef int StrategyNumber ;
typedef int * Pointer ;
typedef int OffsetNumber ;
typedef int GinTernaryValue ;
typedef TYPE_1__ GinState ;
typedef TYPE_2__* GinScanOpaque ;
typedef TYPE_3__* GinScanKey ;
typedef int GinScanEntry ;
typedef int GinNullCategory ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int,int ,int,scalar_t__,int ,int,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(GinScanOpaque VAR_5, OffsetNumber VAR_6,
      StrategyNumber VAR_7, int32 VAR_8,
      Datum VAR_9, uint32 VAR_10,
      Datum *VAR_11, GinNullCategory *VAR_12,
      bool *VAR_13, Pointer *VAR_14)
{
 GinScanKey VAR_15 = &(VAR_5->keys[VAR_5->nkeys++]);
 GinState *VAR_16 = &VAR_5->ginstate;
 uint32 VAR_17 = VAR_10;
 uint32 VAR_18;


 if (VAR_8 != VAR_3)
  VAR_10++;
 VAR_15->nentries = VAR_10;
 VAR_15->nuserentries = VAR_17;

 VAR_15->scanEntry = (GinScanEntry *) FUNC_4(sizeof(GinScanEntry) * VAR_10);
 VAR_15->entryRes = (GinTernaryValue *) FUNC_5(sizeof(GinTernaryValue) * VAR_10);

 VAR_15->query = VAR_9;
 VAR_15->queryValues = VAR_11;
 VAR_15->queryCategories = VAR_12;
 VAR_15->extra_data = VAR_14;
 VAR_15->strategy = VAR_7;
 VAR_15->searchMode = VAR_8;
 VAR_15->attnum = VAR_6;

 FUNC_0(&VAR_15->curItem);
 VAR_15->curItemMatches = 0;
 VAR_15->recheckCurItem = 0;
 VAR_15->isFinished = 0;
 VAR_15->nrequired = 0;
 VAR_15->nadditional = 0;
 VAR_15->requiredEntries = ((void*)0);
 VAR_15->additionalEntries = ((void*)0);

 FUNC_3(VAR_16, VAR_15);

 for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
 {
  Datum VAR_19;
  GinNullCategory VAR_20;
  bool VAR_21;
  Pointer VAR_22;

  if (VAR_18 < VAR_17)
  {

   VAR_19 = VAR_11[VAR_18];
   VAR_20 = VAR_12[VAR_18];
   VAR_21 =
    (VAR_16->canPartialMatch[VAR_6 - 1] && VAR_13)
    ? VAR_13[VAR_18] : 0;
   VAR_22 = (VAR_14) ? VAR_14[VAR_18] : ((void*)0);
  }
  else
  {

   VAR_19 = (Datum) 0;
   switch (VAR_8)
   {
    case 128:
     VAR_20 = VAR_1;
     break;
    case 130:
     VAR_20 = VAR_2;
     break;
    case 129:
     VAR_20 = VAR_2;
     break;
    default:
     FUNC_1(VAR_0, "unexpected searchMode: %d", VAR_8);
     VAR_20 = 0;
     break;
   }
   VAR_21 = 0;
   VAR_22 = ((void*)0);
   VAR_7 = VAR_4;
  }

  VAR_15->scanEntry[VAR_18] = FUNC_2(VAR_5, VAR_6,
            VAR_7, VAR_8,
            VAR_19, VAR_20,
            VAR_21, VAR_22);
 }
}
