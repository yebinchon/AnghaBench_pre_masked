
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
struct TYPE_5__ {int* cmd_pipe; TYPE_1__* priv; } ;
struct TYPE_4__ {int maxfd; int info_hash; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef int GHashTableIter ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2 (SeafWTMonitor *VAR_0)
{
    SeafWTMonitorPriv *VAR_1 = VAR_0->priv;
    GHashTableIter VAR_2;
    gpointer VAR_3, VAR_4;
    int VAR_5, VAR_6 = VAR_0->cmd_pipe[0];

    FUNC_0 (&VAR_2, VAR_1->info_hash);
    while (FUNC_1 (&VAR_2, &VAR_3, &VAR_4)) {
        VAR_5 = (int) (long)VAR_3;
        if (VAR_5 > VAR_6)
            VAR_6 = VAR_5;
    }

    VAR_1->maxfd = VAR_6;
}
