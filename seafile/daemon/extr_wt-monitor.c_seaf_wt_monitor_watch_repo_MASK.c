
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_6__ {int worktree; int type; int repo_id; } ;
typedef TYPE_1__ WatchCommand ;
struct TYPE_7__ {int * res_pipe; int * cmd_pipe; } ;
typedef TYPE_2__ SeafWTMonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7 (SeafWTMonitor *VAR_2,
                            const char *VAR_3,
                            const char *VAR_4)
{
    WatchCommand VAR_5;
    int VAR_6;

    FUNC_2 (&VAR_5, 0, sizeof(VAR_5));
    FUNC_1 (VAR_5.repo_id, VAR_3, 37);
    VAR_5.type = VAR_0;
    FUNC_0 (VAR_5.worktree, VAR_4, VAR_1);

    int VAR_7 = FUNC_5 (VAR_2->cmd_pipe[1], &VAR_5, sizeof(VAR_5));

    if (VAR_7 != sizeof(VAR_5)) {
        FUNC_6 ("[wt mon] fail to write command pipe.\n");
        return -1;
    }

    FUNC_3 ("send a watch command, repo %s\n", VAR_3);

    VAR_7 = FUNC_4 (VAR_2->res_pipe[0], &VAR_6, sizeof(int));
    if (VAR_7 != sizeof(int)) {
        FUNC_6 ("[wt mon] fail to read result pipe.\n");
        return -1;
    }

    return VAR_6;
}
