
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int estimated_count; scalar_t__ pages_free; scalar_t__ num_pages; scalar_t__ pages_deleted; scalar_t__ num_index_tuples; } ;
struct TYPE_11__ {TYPE_1__ stats; void* empty_leaf_set; void* internal_page_set; int page_set_context; } ;
struct TYPE_10__ {int startNSN; void* callback_state; int callback; TYPE_4__* stats; TYPE_2__* info; } ;
struct TYPE_9__ {int index; } ;
typedef int Relation ;
typedef int MemoryContext ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef int IndexBulkDeleteCallback ;
typedef TYPE_3__ GistVacState ;
typedef TYPE_4__ GistBulkDeleteResult ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,scalar_t__) ;
 void* FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(IndexVacuumInfo *VAR_2, GistBulkDeleteResult *VAR_3,
      IndexBulkDeleteCallback VAR_4, void *VAR_5)
{
 Relation VAR_6 = VAR_2->index;
 GistVacState VAR_7;
 BlockNumber VAR_8;
 bool VAR_9;
 BlockNumber VAR_10;
 MemoryContext VAR_11;





 VAR_3->stats.estimated_count = 0;
 VAR_3->stats.num_index_tuples = 0;
 VAR_3->stats.pages_deleted = 0;
 VAR_3->stats.pages_free = 0;
 FUNC_3(VAR_3->page_set_context);







 VAR_11 = FUNC_4(VAR_3->page_set_context);
 VAR_3->internal_page_set = FUNC_11();
 VAR_3->empty_leaf_set = FUNC_11();
 FUNC_4(VAR_11);


 VAR_7.info = VAR_2;
 VAR_7.stats = VAR_3;
 VAR_7.callback = VAR_4;
 VAR_7.callback_state = VAR_5;
 if (FUNC_7(VAR_6))
  VAR_7.startNSN = FUNC_0();
 else
  VAR_7.startNSN = FUNC_9(VAR_6);
 VAR_9 = !FUNC_5(VAR_6);

 VAR_10 = VAR_1;
 for (;;)
 {

  if (VAR_9)
   FUNC_2(VAR_6, VAR_0);
  VAR_8 = FUNC_6(VAR_6);
  if (VAR_9)
   FUNC_8(VAR_6, VAR_0);


  if (VAR_10 >= VAR_8)
   break;

  for (; VAR_10 < VAR_8; VAR_10++)
   FUNC_10(&VAR_7, VAR_10, VAR_10);
 }
 if (VAR_3->stats.pages_free > 0)
  FUNC_1(VAR_6);


 VAR_3->stats.num_pages = VAR_8;
}
