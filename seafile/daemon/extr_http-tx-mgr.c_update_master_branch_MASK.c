
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int branch_mgr; } ;
struct TYPE_4__ {int head; int repo_id; } ;
typedef int SeafBranch ;
typedef TYPE_1__ HttpTxTask ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (HttpTxTask *VAR_1)
{
    SeafBranch *VAR_2;
    VAR_2 = FUNC_1 (VAR_0->branch_mgr,
                                             VAR_1->repo_id,
                                             "master");
    if (!VAR_2) {
        VAR_2 = FUNC_3 ("master", VAR_1->repo_id, VAR_1->head);
        FUNC_0 (VAR_0->branch_mgr, VAR_2);
        FUNC_5 (VAR_2);
    } else {
        FUNC_4 (VAR_2, VAR_1->head);
        FUNC_2 (VAR_0->branch_mgr, VAR_2);
        FUNC_5 (VAR_2);
    }
}
