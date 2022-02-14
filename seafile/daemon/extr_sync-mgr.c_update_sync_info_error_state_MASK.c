
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ err_cnt; scalar_t__ sync_perm_err_cnt; int in_error; } ;
struct TYPE_4__ {int error; TYPE_2__* info; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SyncInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (SyncTask *VAR_4, int VAR_5)
{
    SyncInfo *VAR_6 = VAR_4->info;

    if (VAR_5 == VAR_2) {
        VAR_6->err_cnt++;
        if (VAR_6->err_cnt == VAR_1)
            VAR_6->in_error = VAR_3;
        if (FUNC_0(VAR_4->error))
            VAR_6->sync_perm_err_cnt++;
    } else if (VAR_6->err_cnt > 0) {
        VAR_6->err_cnt = 0;
        VAR_6->in_error = VAR_0;
        VAR_6->sync_perm_err_cnt = 0;
    }
}
