
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* index; } ;
struct TYPE_7__ {TYPE_1__* rd_indam; } ;
struct TYPE_6__ {int * (* ambulkdelete ) (TYPE_3__*,int *,int ,void*) ;} ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_3__*,int *,int ,void*) ;

IndexBulkDeleteResult *
FUNC_2(IndexVacuumInfo *VAR_2,
      IndexBulkDeleteResult *VAR_3,
      IndexBulkDeleteCallback VAR_4,
      void *VAR_5)
{
 Relation VAR_6 = VAR_2->index;

 VAR_0;
 FUNC_0(VAR_1);

 return VAR_6->rd_indam->ambulkdelete(VAR_2, VAR_3,
             VAR_4, VAR_5);
}
