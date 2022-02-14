
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_7__ {int fs_mgr; int commit_mgr; } ;
struct TYPE_6__ {int ctime; int creator_name; int root_id; int parent_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef int GError ;


 int FUNC_0 (TYPE_1__*,char const*,char const*,int,char const*,char*,char*,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int) ;
 TYPE_4__* VAR_0 ;
 TYPE_1__* FUNC_5 (int ,char const*,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (int ,char const*,int,int ,char const*,int *,int **) ;

__attribute__((used)) static int
FUNC_8 (const char *VAR_1, const char *VAR_2, int VAR_3,
                            const char *VAR_4, const char *VAR_5,
                            char **VAR_6, gint64 *VAR_7)
{
    char VAR_8[41];
    SeafCommit *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    int VAR_11;
    int VAR_12 = 0;
    GError *VAR_13 = ((void*)0);

    *VAR_6 = ((void*)0);
    *VAR_7 = 0;

    FUNC_4 (VAR_8, VAR_4, 41);

    while (1) {
        VAR_9 = FUNC_5 (VAR_0->commit_mgr,
                                                 VAR_1, VAR_3,
                                                 VAR_8);
        if (!VAR_9) {
            VAR_12 = -1;
            break;
        }


        if (!VAR_9->parent_id)
            break;

        VAR_10 = FUNC_7 (VAR_0->fs_mgr,
                                                  VAR_2, VAR_3,
                                                  VAR_9->root_id,
                                                  VAR_5,
                                                  ((void*)0),
                                                  &VAR_13);
        if (VAR_13) {
            FUNC_1 (&VAR_13);
            VAR_12 = -1;
            break;
        }

        if (!VAR_10) {
            VAR_12 = -1;
            break;
        }

        VAR_11 = FUNC_0 (VAR_9,
                                          VAR_1, VAR_2, VAR_3,
                                          VAR_5, VAR_10,
                                          VAR_8, &VAR_13);
        if (VAR_13) {
            FUNC_1 (&VAR_13);
            VAR_12 = -1;
            break;
        }

        if (VAR_11) {
            *VAR_6 = FUNC_3 (VAR_9->creator_name);
            *VAR_7 = VAR_9->ctime;
            break;
        } else {



            FUNC_2 (VAR_10);
            FUNC_6 (VAR_9);
        }
    }

    FUNC_2 (VAR_10);
    if (VAR_9)
        FUNC_6 (VAR_9);
    return VAR_12;
}
