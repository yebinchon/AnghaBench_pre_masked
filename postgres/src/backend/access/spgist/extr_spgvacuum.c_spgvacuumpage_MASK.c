
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lastFilledBlock; TYPE_1__* stats; TYPE_2__* info; } ;
typedef TYPE_3__ spgBulkDeleteState ;
struct TYPE_8__ {int strategy; int index; } ;
struct TYPE_7__ {int pages_deleted; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14(spgBulkDeleteState *VAR_3, BlockNumber VAR_4)
{
 Relation VAR_5 = VAR_3->info->index;
 Buffer VAR_6;
 Page VAR_7;


 FUNC_13();

 VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_4,
        VAR_2, VAR_3->info->strategy);
 FUNC_1(VAR_6, VAR_0);
 VAR_7 = (Page) FUNC_0(VAR_6);

 if (FUNC_3(VAR_7))
 {




 }
 else if (FUNC_2(VAR_7))
 {

 }
 else if (FUNC_7(VAR_7))
 {
  if (FUNC_6(VAR_4))
  {
   FUNC_11(VAR_3, VAR_5, VAR_6);

  }
  else
  {
   FUNC_10(VAR_3, VAR_5, VAR_6, 0);
   FUNC_12(VAR_5, VAR_6);
  }
 }
 else
 {

  FUNC_12(VAR_5, VAR_6);
 }







 if (!FUNC_6(VAR_4))
 {
  if (FUNC_3(VAR_7) || FUNC_2(VAR_7))
  {
   FUNC_5(VAR_5, VAR_4);
   VAR_3->stats->pages_deleted++;
  }
  else
  {
   FUNC_8(VAR_5, VAR_6);
   VAR_3->lastFilledBlock = VAR_4;
  }
 }

 FUNC_9(VAR_6);
}
