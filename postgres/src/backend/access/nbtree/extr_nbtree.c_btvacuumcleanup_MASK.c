
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_10__ {scalar_t__ num_index_tuples; } ;
struct TYPE_9__ {scalar_t__ num_heap_tuples; int estimated_count; int index; scalar_t__ analyze_only; } ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int) ;

IndexBulkDeleteResult *
FUNC_4(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1)
{

 if (VAR_0->analyze_only)
  return VAR_1;
 if (VAR_1 == ((void*)0))
 {
  TransactionId VAR_2;


  if (!FUNC_1(VAR_0))
   return ((void*)0);

  VAR_1 = (IndexBulkDeleteResult *) FUNC_3(sizeof(IndexBulkDeleteResult));
  FUNC_2(VAR_0, VAR_1, ((void*)0), ((void*)0), 0, &VAR_2);


  FUNC_0(VAR_0->index, VAR_2,
          VAR_0->num_heap_tuples);
 }







 if (!VAR_0->estimated_count)
 {
  if (VAR_1->num_index_tuples > VAR_0->num_heap_tuples)
   VAR_1->num_index_tuples = VAR_0->num_heap_tuples;
 }

 return VAR_1;
}
