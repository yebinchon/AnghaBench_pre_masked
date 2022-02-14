
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int block_mgr; } ;
struct TYPE_5__ {TYPE_1__* repo; } ;
struct TYPE_4__ {int id; int version; } ;
typedef TYPE_2__ SyncTask ;
typedef int GHashTable ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void *
FUNC_5 (void *VAR_2)
{
    SyncTask *VAR_3 = VAR_2;
    FUNC_4 (VAR_1->block_mgr, VAR_3->repo->id);


    return VAR_2;
}
