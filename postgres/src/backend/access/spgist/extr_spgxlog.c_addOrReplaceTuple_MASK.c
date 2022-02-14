
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nPlaceholder; } ;
struct TYPE_3__ {scalar_t__ tupstate; } ;
typedef TYPE_1__* SpGistDeadTuple ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int,scalar_t__,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_8(Page VAR_2, Item VAR_3, int VAR_4, OffsetNumber VAR_5)
{
 if (VAR_5 <= FUNC_4(VAR_2))
 {
  SpGistDeadTuple VAR_6 = (SpGistDeadTuple) FUNC_2(VAR_2,
                 FUNC_3(VAR_2, VAR_5));

  if (VAR_6->tupstate != VAR_1)
   FUNC_7(VAR_0, "SPGiST tuple to be replaced is not a placeholder");

  FUNC_0(FUNC_6(VAR_2)->nPlaceholder > 0);
  FUNC_6(VAR_2)->nPlaceholder--;

  FUNC_5(VAR_2, VAR_5);
 }

 FUNC_0(VAR_5 <= FUNC_4(VAR_2) + 1);

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0, 0) != VAR_5)
  FUNC_7(VAR_0, "failed to add item of size %u to SPGiST index page",
    VAR_4);
}
