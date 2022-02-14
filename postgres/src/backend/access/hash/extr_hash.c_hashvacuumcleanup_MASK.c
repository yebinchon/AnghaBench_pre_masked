
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_pages; } ;
struct TYPE_6__ {int index; } ;
typedef int Relation ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;

IndexBulkDeleteResult *
FUNC_1(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1)
{
 Relation VAR_2 = VAR_0->index;
 BlockNumber VAR_3;



 if (VAR_1 == ((void*)0))
  return ((void*)0);


 VAR_3 = FUNC_0(VAR_2);
 VAR_1->num_pages = VAR_3;

 return VAR_1;
}
