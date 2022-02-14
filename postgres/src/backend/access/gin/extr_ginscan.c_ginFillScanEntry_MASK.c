
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
typedef scalar_t__ int32 ;
struct TYPE_7__ {int isPartialMatch; scalar_t__ strategy; scalar_t__ searchMode; scalar_t__ attnum; int isFinished; int reduceResult; int offset; scalar_t__ nlist; int * list; int * matchResult; int * matchIterator; int * matchBitmap; int curItem; int buffer; int * extra_data; int queryCategory; int queryKey; } ;
struct TYPE_6__ {size_t totalentries; int allocentries; TYPE_2__** entries; int ginstate; } ;
typedef scalar_t__ StrategyNumber ;
typedef int * Pointer ;
typedef scalar_t__ OffsetNumber ;
typedef int GinState ;
typedef TYPE_1__* GinScanOpaque ;
typedef int GinScanEntryData ;
typedef TYPE_2__* GinScanEntry ;
typedef int GinNullCategory ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__**,int) ;

__attribute__((used)) static GinScanEntry
FUNC_4(GinScanOpaque VAR_2, OffsetNumber VAR_3,
     StrategyNumber VAR_4, int32 VAR_5,
     Datum VAR_6, GinNullCategory VAR_7,
     bool VAR_8, Pointer VAR_9)
{
 GinState *VAR_10 = &VAR_2->ginstate;
 GinScanEntry VAR_11;
 uint32 VAR_12;







 if (VAR_9 == ((void*)0))
 {
  for (VAR_12 = 0; VAR_12 < VAR_2->totalentries; VAR_12++)
  {
   GinScanEntry VAR_13 = VAR_2->entries[VAR_12];

   if (VAR_13->extra_data == ((void*)0) &&
    VAR_13->isPartialMatch == VAR_8 &&
    VAR_13->strategy == VAR_4 &&
    VAR_13->searchMode == VAR_5 &&
    VAR_13->attnum == VAR_3 &&
    FUNC_1(VAR_10, VAR_3,
          VAR_13->queryKey,
          VAR_13->queryCategory,
          VAR_6,
          VAR_7) == 0)
   {

    return VAR_13;
   }
  }
 }


 VAR_11 = (GinScanEntry) FUNC_2(sizeof(GinScanEntryData));
 VAR_11->queryKey = VAR_6;
 VAR_11->queryCategory = VAR_7;
 VAR_11->isPartialMatch = VAR_8;
 VAR_11->extra_data = VAR_9;
 VAR_11->strategy = VAR_4;
 VAR_11->searchMode = VAR_5;
 VAR_11->attnum = VAR_3;

 VAR_11->buffer = VAR_0;
 FUNC_0(&VAR_11->curItem);
 VAR_11->matchBitmap = ((void*)0);
 VAR_11->matchIterator = ((void*)0);
 VAR_11->matchResult = ((void*)0);
 VAR_11->list = ((void*)0);
 VAR_11->nlist = 0;
 VAR_11->offset = VAR_1;
 VAR_11->isFinished = 0;
 VAR_11->reduceResult = 0;


 if (VAR_2->totalentries >= VAR_2->allocentries)
 {
  VAR_2->allocentries *= 2;
  VAR_2->entries = (GinScanEntry *)
   FUNC_3(VAR_2->entries, VAR_2->allocentries * sizeof(GinScanEntry));
 }
 VAR_2->entries[VAR_2->totalentries++] = VAR_11;

 return VAR_11;
}
