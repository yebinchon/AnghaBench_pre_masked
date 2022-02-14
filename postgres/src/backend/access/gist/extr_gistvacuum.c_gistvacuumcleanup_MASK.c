
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ num_index_tuples; } ;
struct TYPE_12__ {TYPE_1__ stats; int * empty_leaf_set; int * internal_page_set; int * page_set_context; } ;
struct TYPE_11__ {scalar_t__ num_heap_tuples; int estimated_count; scalar_t__ analyze_only; } ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef TYPE_3__ GistBulkDeleteResult ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *,int *) ;

IndexBulkDeleteResult *
FUNC_4(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1)
{
 GistBulkDeleteResult *VAR_2 = (GistBulkDeleteResult *) VAR_1;


 if (VAR_0->analyze_only)
  return VAR_1;






 if (VAR_2 == ((void*)0))
 {
  VAR_2 = FUNC_1();
  FUNC_3(VAR_0, VAR_2, ((void*)0), ((void*)0));
 }





 FUNC_2(VAR_0, VAR_2);


 FUNC_0(VAR_2->page_set_context);
 VAR_2->page_set_context = ((void*)0);
 VAR_2->internal_page_set = ((void*)0);
 VAR_2->empty_leaf_set = ((void*)0);







 if (!VAR_0->estimated_count)
 {
  if (VAR_2->stats.num_index_tuples > VAR_0->num_heap_tuples)
   VAR_2->stats.num_index_tuples = VAR_0->num_heap_tuples;
 }

 return (IndexBulkDeleteResult *) VAR_2;
}
