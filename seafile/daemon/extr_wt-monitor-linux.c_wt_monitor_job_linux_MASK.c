
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* gpointer ;
typedef int fd_set ;
typedef int cmd ;
typedef int WatchCommand ;
struct TYPE_6__ {int* cmd_pipe; TYPE_1__* priv; } ;
struct TYPE_5__ {int maxfd; int handle_hash; int read_fds; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef int GHashTableIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char**,char**) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (int,int *,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int *,int *,int *,int *) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_10 (void *VAR_2)
{
    SeafWTMonitor *VAR_3 = VAR_2;
    SeafWTMonitorPriv *VAR_4 = VAR_3->priv;

    WatchCommand VAR_5;
    int VAR_6;
    int VAR_7;
    fd_set VAR_8;
    int VAR_9;
    char *VAR_10;
    gpointer VAR_11, VAR_12;
    GHashTableIter VAR_13;

    FUNC_1 (VAR_3->cmd_pipe[0], &VAR_4->read_fds);
    VAR_4->maxfd = VAR_3->cmd_pipe[0];

    while (1) {
        VAR_8 = VAR_4->read_fds;

        VAR_7 = FUNC_8 (VAR_4->maxfd + 1, &VAR_8, ((void*)0), ((void*)0), ((void*)0));
        if (VAR_7 < 0 && VAR_1 == VAR_0) {
            continue;
        } else if (VAR_7 < 0) {
            FUNC_7 ("[wt mon] select error: %s.\n", FUNC_9(VAR_1));
            break;
        }

        if (FUNC_0 (VAR_3->cmd_pipe[0], &VAR_8)) {
            VAR_6 = FUNC_6 (VAR_3->cmd_pipe[0], &VAR_5, sizeof(VAR_5));
            if (VAR_6 != sizeof(VAR_5)) {
                FUNC_7 ("[wt mon] failed to read command.\n");
                continue;
            }
            FUNC_4 (VAR_3, &VAR_5);
        }

        FUNC_2 (&VAR_13, VAR_4->handle_hash);
        while (FUNC_3 (&VAR_13, &VAR_11, &VAR_12)) {
            VAR_10 = VAR_11;
            VAR_9 = (int)(long)VAR_12;
            if (FUNC_0 (VAR_9, &VAR_8))
                FUNC_5 (VAR_4, VAR_10, VAR_9);
        }
    }

    return ((void*)0);
}
