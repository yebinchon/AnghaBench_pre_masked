
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_index_tuples; int num_pages; } ;
struct TYPE_6__ {int index; int strategy; scalar_t__ analyze_only; } ;
typedef int Relation ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

IndexBulkDeleteResult *
FUNC_8(IndexVacuumInfo *VAR_2, IndexBulkDeleteResult *VAR_3)
{
 Relation VAR_4;


 if (VAR_2->analyze_only)
  return VAR_3;

 if (!VAR_3)
  VAR_3 = (IndexBulkDeleteResult *) FUNC_5(sizeof(IndexBulkDeleteResult));
 VAR_3->num_pages = FUNC_1(VAR_2->index);


 VAR_4 = FUNC_7(FUNC_0(FUNC_2(VAR_2->index), 0),
       VAR_0);

 FUNC_3(VAR_2->index, VAR_2->strategy);

 FUNC_4(VAR_2->index, VAR_4, VAR_1, 0,
      &VAR_3->num_index_tuples, &VAR_3->num_index_tuples);

 FUNC_6(VAR_4, VAR_0);

 return VAR_3;
}
