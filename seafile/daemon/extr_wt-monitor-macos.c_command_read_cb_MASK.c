
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_6__ {int repo_id; int type; } ;
typedef TYPE_1__ WatchCommand ;
struct TYPE_7__ {int * cmd_pipe; } ;
typedef TYPE_2__ SeafWTMonitor ;
typedef int CFOptionFlags ;
typedef int CFFileDescriptorRef ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char*,long,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (CFFileDescriptorRef VAR_1,
                             CFOptionFlags VAR_2,
                             void *VAR_3)
{
    SeafWTMonitor *VAR_4 = (SeafWTMonitor *)VAR_3;
    WatchCommand VAR_5;
    int VAR_6;

    VAR_6 = FUNC_4 (VAR_4->cmd_pipe[0], &VAR_5, sizeof(VAR_5));
    if (VAR_6 != sizeof(VAR_5)) {
        FUNC_5 ("[wt mon] failed to read command.\n");
        FUNC_0 (VAR_1, VAR_0);
        return;
    }

    FUNC_3 ("[wt mon] %ld receive command type=%d, repo=%s\n",
                (long)FUNC_1(), VAR_5.type, VAR_5.repo_id);
    FUNC_2 (VAR_4, &VAR_5);
    FUNC_0 (VAR_1, VAR_0);
}
