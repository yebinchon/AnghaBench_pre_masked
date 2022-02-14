
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef TYPE_1__* gpointer ;
struct TYPE_10__ {int hash_lock; int info_hash; int handle_hash; } ;
struct TYPE_9__ {int status; } ;
typedef TYPE_2__ SeafWTMonitorPriv ;
typedef TYPE_1__ RepoWatchInfo ;
typedef int * HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int *) ;
 TYPE_1__* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*) ;
 int * FUNC_9 (char const*) ;

__attribute__((used)) static HANDLE FUNC_10 (SeafWTMonitorPriv *VAR_1,
                         const char *VAR_2,
                         const char *VAR_3)
{
    HANDLE VAR_4 = ((void*)0);
    wchar_t *VAR_5 = ((void*)0);
    RepoWatchInfo *VAR_6;


    VAR_5 = FUNC_9 (VAR_3);

    VAR_4 = FUNC_5 (VAR_5);
    if (!VAR_4) {
        FUNC_8 ("failed to open handle for worktree "
                      "of repo  %s\n", VAR_2);
        FUNC_2 (VAR_5);
        return ((void*)0);
    }
    FUNC_2 (VAR_5);

    FUNC_6 (&VAR_1->hash_lock);
    FUNC_3 (VAR_1->handle_hash,
                         FUNC_4(VAR_2), (gpointer)VAR_4);

    VAR_6 = FUNC_1 (VAR_2, VAR_3);
    FUNC_3 (VAR_1->info_hash, (gpointer)VAR_4, VAR_6);
    FUNC_7 (&VAR_1->hash_lock);

    FUNC_0 (VAR_6->status, VAR_0, "", ((void*)0));

    return VAR_4;
}
