
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lastFilledBlock; TYPE_2__* stats; int * pendingList; int myXmin; int spgstate; TYPE_1__* info; } ;
typedef TYPE_3__ spgBulkDeleteState ;
struct TYPE_11__ {int xmin; } ;
struct TYPE_9__ {int estimated_count; scalar_t__ pages_deleted; scalar_t__ pages_free; scalar_t__ num_pages; int pages_removed; scalar_t__ num_index_tuples; } ;
struct TYPE_8__ {int index; } ;
typedef int Relation ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(spgBulkDeleteState *VAR_3)
{
 Relation VAR_4 = VAR_3->info->index;
 bool VAR_5;
 BlockNumber VAR_6,
    VAR_7;


 FUNC_8(&VAR_3->spgstate, VAR_4);
 VAR_3->pendingList = ((void*)0);
 VAR_3->myXmin = FUNC_0()->xmin;
 VAR_3->lastFilledBlock = VAR_1;





 VAR_3->stats->estimated_count = 0;
 VAR_3->stats->num_index_tuples = 0;
 VAR_3->stats->pages_deleted = 0;


 VAR_5 = !FUNC_3(VAR_4);
 VAR_7 = VAR_2 + 1;
 for (;;)
 {

  if (VAR_5)
   FUNC_2(VAR_4, VAR_0);
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_5)
   FUNC_7(VAR_4, VAR_0);


  if (VAR_7 >= VAR_6)
   break;

  for (; VAR_7 < VAR_6; VAR_7++)
  {
   FUNC_10(VAR_3, VAR_7);

   if (VAR_3->pendingList != ((void*)0))
    FUNC_9(VAR_3);
  }
 }


 FUNC_6(VAR_4);
 if (VAR_3->stats->pages_deleted > 0)
  FUNC_1(VAR_4);
 VAR_3->stats->num_pages = VAR_6;
 VAR_3->stats->pages_free = VAR_3->stats->pages_deleted;
}
