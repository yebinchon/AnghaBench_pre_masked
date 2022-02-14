
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {int keysz; int * scantid; int heapkeyspace; int pivotsearch; } ;
struct TYPE_8__ {int rel; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__ BtreeCheckState ;
typedef int BlockNumber ;
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

__attribute__((used)) static inline bool
FUNC_9(BtreeCheckState *VAR_0, BTScanInsert VAR_1,
        BlockNumber VAR_2, Page VAR_3,
        OffsetNumber VAR_4)
{
 ItemId VAR_5;
 int32 VAR_6;

 FUNC_0(VAR_1->pivotsearch);


 VAR_5 = FUNC_6(VAR_0, VAR_2, VAR_3,
          VAR_4);
 VAR_6 = FUNC_8(VAR_0->rel, VAR_1, VAR_3, VAR_4);


 if (!VAR_1->heapkeyspace)
  return VAR_6 <= 0;


 if (VAR_6 == 0)
 {
  IndexTuple VAR_7;
  int VAR_8;
  ItemPointer VAR_9;
  BTPageOpaque VAR_10;
  bool VAR_11;

  VAR_7 = (IndexTuple) FUNC_5(VAR_3, VAR_5);
  VAR_10 = (BTPageOpaque) FUNC_7(VAR_3);
  VAR_11 = FUNC_4(VAR_10) && VAR_4 >= FUNC_3(VAR_10);


  VAR_8 = FUNC_2(VAR_7, VAR_0->rel);
  VAR_9 = FUNC_1(VAR_0, VAR_7, VAR_11);


  if (VAR_1->keysz == VAR_8)
   return VAR_1->scantid == ((void*)0) && VAR_9 != ((void*)0);

  return VAR_1->keysz < VAR_8;
 }

 return VAR_6 < 0;
}
