
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;


 scalar_t__ FUNC_0 (int) ;

IndexBulkDeleteResult *
FUNC_1(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1,
      IndexBulkDeleteCallback VAR_2, void *VAR_3)
{

 if (VAR_1 == ((void*)0))
  VAR_1 = (IndexBulkDeleteResult *) FUNC_0(sizeof(IndexBulkDeleteResult));

 return VAR_1;
}
