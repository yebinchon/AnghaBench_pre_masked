
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* callback_state; int callback; int * stats; int * info; } ;
typedef TYPE_1__ spgBulkDeleteState ;
typedef int IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

IndexBulkDeleteResult *
FUNC_2(IndexVacuumInfo *VAR_0, IndexBulkDeleteResult *VAR_1,
     IndexBulkDeleteCallback VAR_2, void *VAR_3)
{
 spgBulkDeleteState VAR_4;


 if (VAR_1 == ((void*)0))
  VAR_1 = (IndexBulkDeleteResult *) FUNC_0(sizeof(IndexBulkDeleteResult));
 VAR_4.info = VAR_0;
 VAR_4.stats = VAR_1;
 VAR_4.callback = VAR_2;
 VAR_4.callback_state = VAR_3;

 FUNC_1(&VAR_4);

 return VAR_1;
}
