
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rm_tids; } ;
typedef TYPE_1__ RevmapContents ;
typedef int Page ;
typedef int ItemPointerData ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

void
FUNC_8(Buffer VAR_0, BlockNumber VAR_1,
      BlockNumber VAR_2, ItemPointerData VAR_3)
{
 RevmapContents *VAR_4;
 ItemPointerData *VAR_5;
 Page VAR_6;


 VAR_6 = FUNC_0(VAR_0);
 VAR_4 = (RevmapContents *) FUNC_7(VAR_6);
 VAR_5 = (ItemPointerData *) VAR_4->rm_tids;
 VAR_5 += FUNC_1(VAR_1, VAR_2);

 if (FUNC_4(&VAR_3))
  FUNC_5(VAR_5,
        FUNC_2(&VAR_3),
        FUNC_3(&VAR_3));
 else
  FUNC_6(VAR_5);
}
