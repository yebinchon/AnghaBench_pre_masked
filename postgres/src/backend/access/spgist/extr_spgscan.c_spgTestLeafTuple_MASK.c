
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int storeRes_func ;
struct TYPE_9__ {int pointer; } ;
struct TYPE_8__ {scalar_t__ tupstate; scalar_t__ nextOffset; int heapPtr; } ;
struct TYPE_7__ {int heapPtr; } ;
typedef TYPE_1__ SpGistSearchItem ;
typedef int SpGistScanOpaque ;
typedef TYPE_2__* SpGistLeafTuple ;
typedef TYPE_3__* SpGistDeadTuple ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,TYPE_1__*,TYPE_2__*,int,int*,int ) ;

__attribute__((used)) static OffsetNumber
FUNC_8(SpGistScanOpaque VAR_9,
     SpGistSearchItem *VAR_10,
     Page VAR_11, OffsetNumber VAR_12,
     bool VAR_13, bool VAR_14,
     bool *VAR_15,
     storeRes_func VAR_16)
{
 SpGistLeafTuple VAR_17 = (SpGistLeafTuple)
 FUNC_4(VAR_11, FUNC_5(VAR_11, VAR_12));

 if (VAR_17->tupstate != VAR_3)
 {
  if (!VAR_14)
  {
   if (VAR_17->tupstate == VAR_5)
   {

    FUNC_0(VAR_12 == FUNC_2(&VAR_10->heapPtr));

    VAR_10->heapPtr = ((SpGistDeadTuple) VAR_17)->pointer;
    FUNC_0(FUNC_1(&VAR_10->heapPtr) != VAR_4);
    return VAR_8;
   }

   if (VAR_17->tupstate == VAR_2)
   {

    FUNC_0(VAR_12 == FUNC_2(&VAR_10->heapPtr));

    FUNC_0(VAR_17->nextOffset == VAR_1);
    return VAR_6;
   }
  }


  FUNC_6(VAR_0, "unexpected SPGiST tuple state: %d", VAR_17->tupstate);
  return VAR_7;
 }

 FUNC_0(FUNC_3(&VAR_17->heapPtr));

 FUNC_7(VAR_9, VAR_10, VAR_17, VAR_13, VAR_15, VAR_16);

 return VAR_17->nextOffset;
}
