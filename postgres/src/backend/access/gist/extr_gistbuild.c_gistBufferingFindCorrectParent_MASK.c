
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int indexrel; } ;
struct TYPE_5__ {int t_tid; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ GISTBuildState ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static Buffer
FUNC_11(GISTBuildState *VAR_6,
          BlockNumber VAR_7, int VAR_8,
          BlockNumber *VAR_9,
          OffsetNumber *VAR_10)
{
 BlockNumber VAR_11;
 Buffer VAR_12;
 Page VAR_13;
 OffsetNumber VAR_14;
 OffsetNumber VAR_15;

 if (VAR_8 > 0)
  VAR_11 = FUNC_9(VAR_6, VAR_7);
 else
 {




  if (*VAR_9 == VAR_3)
   FUNC_8(VAR_0, "no parent buffer provided of child %d", VAR_7);
  VAR_11 = *VAR_9;
 }

 VAR_12 = FUNC_7(VAR_6->indexrel, VAR_11);
 VAR_13 = FUNC_0(VAR_12);
 FUNC_2(VAR_12, VAR_2);
 FUNC_10(VAR_6->indexrel, VAR_12);
 VAR_14 = FUNC_6(VAR_13);


 if (VAR_11 == *VAR_9 && *VAR_9 != VAR_3 &&
  *VAR_10 != VAR_5 && *VAR_10 <= VAR_14)
 {
  ItemId VAR_16 = FUNC_5(VAR_13, *VAR_10);
  IndexTuple VAR_17 = (IndexTuple) FUNC_4(VAR_13, VAR_16);

  if (FUNC_1(&(VAR_17->t_tid)) == VAR_7)
  {

   return VAR_12;
  }
 }
 for (VAR_15 = VAR_1; VAR_15 <= VAR_14; VAR_15 = FUNC_3(VAR_15))
 {
  ItemId VAR_18 = FUNC_5(VAR_13, VAR_15);
  IndexTuple VAR_19 = (IndexTuple) FUNC_4(VAR_13, VAR_18);

  if (FUNC_1(&(VAR_19->t_tid)) == VAR_7)
  {

   *VAR_10 = VAR_15;
   return VAR_12;
  }
 }

 FUNC_8(VAR_0, "failed to re-find parent for block %u", VAR_7);
 return VAR_4;
}
