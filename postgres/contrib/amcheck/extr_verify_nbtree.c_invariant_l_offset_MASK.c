
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_11__ {int keysz; int * scantid; int heapkeyspace; int pivotsearch; } ;
struct TYPE_10__ {int rel; int target; int targetblock; } ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__ BtreeCheckState ;
typedef TYPE_2__* BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_10(BtreeCheckState *VAR_0, BTScanInsert VAR_1,
       OffsetNumber VAR_2)
{
 ItemId VAR_3;
 int32 VAR_4;

 FUNC_0(VAR_1->pivotsearch);


 VAR_3 = FUNC_6(VAR_0, VAR_0->targetblock, VAR_0->target,
          VAR_2);

 if (!VAR_1->heapkeyspace)
  return FUNC_9(VAR_0, VAR_1, VAR_2);

 VAR_4 = FUNC_8(VAR_0->rel, VAR_1, VAR_0->target, VAR_2);
 if (VAR_4 == 0)
 {
  BTPageOpaque VAR_5;
  IndexTuple VAR_6;
  int VAR_7;
  ItemPointer VAR_8;
  bool VAR_9;

  VAR_6 = (IndexTuple) FUNC_5(VAR_0->target, VAR_3);
  VAR_5 = (BTPageOpaque) FUNC_7(VAR_0->target);
  VAR_9 = FUNC_4(VAR_5) && VAR_2 >= FUNC_3(VAR_5);


  VAR_7 = FUNC_2(VAR_6, VAR_0->rel);
  VAR_8 = FUNC_1(VAR_0, VAR_6, VAR_9);


  if (VAR_1->keysz == VAR_7)
   return VAR_1->scantid == ((void*)0) && VAR_8 != ((void*)0);

  return VAR_1->keysz < VAR_7;
 }

 return VAR_4 < 0;
}
