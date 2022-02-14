
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {scalar_t__ NextEntryOffset; } ;
struct TYPE_6__ {int worktree; } ;
typedef TYPE_1__ RepoWatchInfo ;
typedef TYPE_2__* PFILE_NOTIFY_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_2__*,int) ;

__attribute__((used)) static gboolean
FUNC_1 (const char *VAR_1, RepoWatchInfo *VAR_2,
                char *VAR_3, unsigned int VAR_4)
{
    PFILE_NOTIFY_INFORMATION VAR_5;

    int VAR_6 = 0;
    while (1) {
        VAR_5 = (PFILE_NOTIFY_INFORMATION)&VAR_3[VAR_6];
        VAR_6 += VAR_5->NextEntryOffset;

        FUNC_0 (VAR_2, VAR_2->worktree,
                           VAR_5, (VAR_5->NextEntryOffset == 0));

        if (!VAR_5->NextEntryOffset)
            break;
    }

    return VAR_0;
}
