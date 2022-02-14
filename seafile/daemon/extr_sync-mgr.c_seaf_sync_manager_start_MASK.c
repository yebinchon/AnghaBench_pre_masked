
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_11__ {int job_mgr; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {void* refresh_windows_timer; int refresh_paths; void* update_tx_state_timer; void* check_sync_timer; } ;
typedef TYPE_2__ SeafSyncManager ;
typedef int GCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,char*,int ,TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_4 (int ,int ,int *,int ) ;
 void* FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_7 (SeafSyncManager *VAR_12)
{
    VAR_12->priv->check_sync_timer = FUNC_5 (
        VAR_4, VAR_12, VAR_0);

    VAR_12->priv->update_tx_state_timer = FUNC_5 (
        VAR_11, VAR_12, VAR_3);

    FUNC_0 (VAR_9, "repo-http-fetched",
                      (GCallback)VAR_5, VAR_12);
    FUNC_0 (VAR_9, "repo-http-uploaded",
                      (GCallback)VAR_6, VAR_12);
    pthread_t VAR_13;
    pthread_attr_t VAR_14;
    FUNC_1(&VAR_14);
    FUNC_2(&VAR_14, VAR_1);
    if (FUNC_3 (&VAR_13, &VAR_14, VAR_10, VAR_12) < 0) {
        FUNC_6 ("Failed to create update cached head commit id thread.\n");
        return -1;
    }

    return 0;
}
