
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nPlaceholder; int nRedirection; } ;
struct TYPE_4__ {int tupstate; int size; } ;
typedef int SpGistState ;
typedef TYPE_1__* SpGistDeadTuple ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int,int,int ) ;
 TYPE_1__* FUNC_6 (int *,int,int ,scalar_t__) ;

void
FUNC_7(SpGistState *VAR_5, Page VAR_6,
      OffsetNumber *VAR_7, int VAR_8,
      int VAR_9, int VAR_10,
      BlockNumber VAR_11, OffsetNumber VAR_12)
{
 OffsetNumber VAR_13;
 OffsetNumber VAR_14[VAR_1];
 SpGistDeadTuple VAR_15 = ((void*)0);
 int VAR_16;

 if (VAR_8 == 0)
  return;
 FUNC_4(VAR_14, VAR_7, sizeof(OffsetNumber) * VAR_8);
 if (VAR_8 > 1)
  FUNC_5(VAR_14, VAR_8, sizeof(OffsetNumber), VAR_4);

 FUNC_1(VAR_6, VAR_14, VAR_8);

 VAR_13 = VAR_7[0];

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
 {
  OffsetNumber VAR_17 = VAR_14[VAR_16];
  int VAR_18;

  VAR_18 = (VAR_17 == VAR_13) ? VAR_9 : VAR_10;
  if (VAR_15 == ((void*)0) || VAR_15->tupstate != VAR_18)
   VAR_15 = FUNC_6(VAR_5, VAR_18, VAR_11, VAR_12);

  if (FUNC_0(VAR_6, (Item) VAR_15, VAR_15->size,
      VAR_17, 0, 0) != VAR_17)
   FUNC_3(VAR_0, "failed to add item of size %u to SPGiST index page",
     VAR_15->size);

  if (VAR_18 == VAR_3)
   FUNC_2(VAR_6)->nRedirection++;
  else if (VAR_18 == VAR_2)
   FUNC_2(VAR_6)->nPlaceholder++;
 }
}
