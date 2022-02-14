
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int worktree_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 char* FUNC_1 (char*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (char*,char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10 (const char *VAR_4)
{
    char *VAR_5 = FUNC_1 ("/", VAR_3->worktree_dir, VAR_1, ((void*)0));
    if (FUNC_0 (VAR_5) < 0) {
        FUNC_8 ("Seafile trash folder %s doesn't exist and cannot be created.\n",
                      VAR_5);
        FUNC_3 (VAR_5);
        return -1;
    }
    FUNC_3 (VAR_5);

    char *VAR_6 = FUNC_4 (VAR_4);
    char *VAR_7 = FUNC_1 ("/", VAR_3->worktree_dir, VAR_1, VAR_6, ((void*)0));
    int VAR_8 = 0;

    int VAR_9;
    char *VAR_10;
    for (VAR_9 = 1; VAR_9 < 10; ++VAR_9) {
        if (FUNC_2 (VAR_7, VAR_0)) {
            VAR_10 = FUNC_5 ("%s(%d)", VAR_7, VAR_9);
            FUNC_3 (VAR_7);
            VAR_7 = VAR_10;
            continue;
        }
        break;
    }

    if (FUNC_7 (VAR_4, VAR_7) < 0) {
        FUNC_8 ("Failed to move %s to Seafile recycle bin %s: %s\n",
                      VAR_4, VAR_7, FUNC_9(VAR_2));
        VAR_8 = -1;
        goto out;
    }

    FUNC_6 ("Moved folder %s to Seafile recyle bin %s.\n",
                  VAR_4, VAR_7);

out:
    FUNC_3 (VAR_6);
    FUNC_3 (VAR_7);
    return VAR_8;
}
