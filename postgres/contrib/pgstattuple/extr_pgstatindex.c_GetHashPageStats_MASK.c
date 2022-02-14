
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int free_space; int dead_items; int live_items; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__ HashIndexStat ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(Page VAR_1, HashIndexStat *VAR_2)
{
 OffsetNumber VAR_3 = FUNC_3(VAR_1);
 int VAR_4;


 for (VAR_4 = VAR_0; VAR_4 <= VAR_3; VAR_4++)
 {
  ItemId VAR_5 = FUNC_2(VAR_1, VAR_4);

  if (!FUNC_0(VAR_5))
   VAR_2->live_items++;
  else
   VAR_2->dead_items++;
 }
 VAR_2->free_space += FUNC_1(VAR_1);
}
