
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * callback_state; int callback; TYPE_3__* stats; TYPE_2__* info; } ;
typedef TYPE_1__ spgBulkDeleteState ;
struct TYPE_10__ {scalar_t__ num_index_tuples; } ;
struct TYPE_9__ {scalar_t__ num_heap_tuples; int estimated_count; scalar_t__ analyze_only; } ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__ IndexBulkDeleteResult ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

IndexBulkDeleteResult *
FUNC_2(IndexVacuumInfo *VAR_1, IndexBulkDeleteResult *VAR_2)
{
 spgBulkDeleteState VAR_3;


 if (VAR_1->analyze_only)
  return VAR_2;







 if (VAR_2 == ((void*)0))
 {
  VAR_2 = (IndexBulkDeleteResult *) FUNC_0(sizeof(IndexBulkDeleteResult));
  VAR_3.info = VAR_1;
  VAR_3.stats = VAR_2;
  VAR_3.callback = VAR_0;
  VAR_3.callback_state = ((void*)0);

  FUNC_1(&VAR_3);
 }







 if (!VAR_1->estimated_count)
 {
  if (VAR_2->num_index_tuples > VAR_1->num_heap_tuples)
   VAR_2->num_index_tuples = VAR_1->num_heap_tuples;
 }

 return VAR_2;
}
