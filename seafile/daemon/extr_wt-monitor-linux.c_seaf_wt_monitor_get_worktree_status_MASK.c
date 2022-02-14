
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gpointer ;
typedef int WTStatus ;
struct TYPE_8__ {int * status; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int hash_lock; int info_hash; int handle_hash; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef TYPE_3__ RepoWatchInfo ;


 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

WTStatus *
FUNC_5 (SeafWTMonitor *VAR_0,
                                     const char *VAR_1)
{
    SeafWTMonitorPriv *VAR_2 = VAR_0->priv;
    gpointer VAR_3, VAR_4;
    RepoWatchInfo *VAR_5;

    FUNC_2 (&VAR_2->hash_lock);

    if (!FUNC_1 (VAR_2->handle_hash, VAR_1,
                                       &VAR_3, &VAR_4)) {
        FUNC_3 (&VAR_2->hash_lock);
        return ((void*)0);
    }

    VAR_5 = FUNC_0(VAR_2->info_hash, VAR_4);
    FUNC_4 (VAR_5->status);

    FUNC_3 (&VAR_2->hash_lock);

    return VAR_5->status;
}
