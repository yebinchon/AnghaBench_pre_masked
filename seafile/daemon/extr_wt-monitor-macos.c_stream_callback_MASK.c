
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_8__ {int worktree; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int info_hash; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef TYPE_3__ RepoWatchInfo ;
typedef int FSEventStreamEventId ;
typedef int FSEventStreamEventFlags ;
typedef scalar_t__ ConstFSEventStreamRef ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_3__*,int ,int const,int const) ;
 int FUNC_3 (char*,long,int const,char*,int const) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (ConstFSEventStreamRef VAR_0,
                      void *VAR_1,
                      size_t VAR_2,
                      void *VAR_3,
                      const FSEventStreamEventFlags VAR_4[],
                      const FSEventStreamEventId VAR_5[])
{
    RepoWatchInfo *VAR_6;
    SeafWTMonitor *VAR_7 = (SeafWTMonitor *)VAR_1;
    SeafWTMonitorPriv *VAR_8 = VAR_7->priv;
    char **VAR_9 = (char **)VAR_3;

    VAR_6 = FUNC_1 (VAR_8->info_hash, (gpointer)(long)VAR_0);
    if (!VAR_6) {
        FUNC_4 ("Repo watch info not found.\n");
        return;
    }

    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        FUNC_3("%ld Change %llu in %s, flags %x\n", (long)FUNC_0(),
                   VAR_5[VAR_10], VAR_9[VAR_10], VAR_4[VAR_10]);
        FUNC_2 (VAR_9[VAR_10], VAR_6, VAR_6->worktree,
                           VAR_5[VAR_10], VAR_4[VAR_10]);
    }
}
