
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Pointer ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef scalar_t__ ItemPointer ;
typedef int IndexTuple ;
typedef int GinState ;
typedef int GinPostingList ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int) ;

ItemPointer
FUNC_7(GinState *VAR_1, OffsetNumber VAR_2, IndexTuple VAR_3,
    int *VAR_4)
{
 Pointer VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = FUNC_0(VAR_3);
 ItemPointer VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3))
 {
  if (VAR_6 > 0)
  {
   VAR_7 = FUNC_4((GinPostingList *) VAR_5, &VAR_8);
   if (VAR_6 != VAR_8)
    FUNC_3(VAR_0, "number of items mismatch in GIN entry tuple, %d in tuple header, %d decoded",
      VAR_6, VAR_8);
  }
  else
  {
   VAR_7 = FUNC_6(0);
  }
 }
 else
 {
  VAR_7 = (ItemPointer) FUNC_6(sizeof(ItemPointerData) * VAR_6);
  FUNC_5(VAR_7, VAR_5, sizeof(ItemPointerData) * VAR_6);
 }
 *VAR_4 = VAR_6;
 return VAR_7;
}
