
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int blk_ref_cnts; struct TYPE_4__* repo_name; struct TYPE_4__* email; struct TYPE_4__* worktree; struct TYPE_4__* passwd; struct TYPE_4__* token; struct TYPE_4__* host; } ;
typedef TYPE_1__ HttpTxTask ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (HttpTxTask *VAR_1)
{
    FUNC_0 (VAR_1->host);
    FUNC_0 (VAR_1->token);
    FUNC_0 (VAR_1->passwd);
    FUNC_0 (VAR_1->worktree);
    FUNC_0 (VAR_1->email);
    FUNC_0 (VAR_1->repo_name);
    if (VAR_1->type == VAR_0) {
        FUNC_1 (VAR_1->blk_ref_cnts);
    }
    FUNC_0 (VAR_1);
}
