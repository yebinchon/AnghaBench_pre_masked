
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_6__ {int type; int repo_id; } ;
typedef TYPE_1__ WatchCommand ;
struct TYPE_7__ {int * res_pipe; int * cmd_pipe; } ;
typedef TYPE_2__ SeafWTMonitor ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (char*) ;

int
FUNC_6 (SeafWTMonitor *VAR_1, const char *VAR_2)
{
    WatchCommand VAR_3;
    int VAR_4;

    FUNC_1 (&VAR_3, 0, sizeof(VAR_3));
    FUNC_0 (VAR_3.repo_id, VAR_2, 37);
    VAR_3.type = VAR_0;

    int VAR_5 = FUNC_4 (VAR_1->cmd_pipe[1], &VAR_3, sizeof(VAR_3));

    if (VAR_5 != sizeof(VAR_3)) {
        FUNC_5 ("[wt mon] fail to write command pipe.\n");
        return -1;
    }

    FUNC_2 ("send an unwatch command, repo %s\n", VAR_2);

    VAR_5 = FUNC_3 (VAR_1->res_pipe[0], &VAR_4, sizeof(int));
    if (VAR_5 != sizeof(int)) {
        FUNC_5 ("[wt mon] fail to read result pipe.\n");
        return -1;
    }

    return VAR_4;
}
