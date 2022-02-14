
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * gpointer ;
struct TYPE_6__ {scalar_t__* cmd_pipe; TYPE_1__* priv; } ;
struct TYPE_5__ {int handle_hash; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef int HANDLE ;
typedef int GHashTableIter ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int **,int **) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static BOOL
FUNC_6 (SeafWTMonitor *VAR_2)
{
    SeafWTMonitorPriv *VAR_3 = VAR_2->priv;

    if (!FUNC_1(VAR_2, (HANDLE)VAR_2->cmd_pipe[0])) {

        FUNC_5("Failed to add cmd_pipe to iocp, "
                     "error code %lu", FUNC_0());
        return VAR_0;
    }

    GHashTableIter VAR_4;
    gpointer VAR_5 = ((void*)0);
    gpointer VAR_6 = ((void*)0);

    FUNC_2 (&VAR_4, VAR_3->handle_hash);
    while (FUNC_3 (&VAR_4, &VAR_6, &VAR_5)) {
        if (!FUNC_1(VAR_2, (HANDLE)VAR_5)) {
            FUNC_5("Failed to add dir handle to iocp, "
                         "repo %s, error code %lu", (char *)VAR_6,
                         FUNC_0());
            continue;
        }
    }

    FUNC_4("Done: add_all_to_iocp\n");
    return VAR_1;
}
