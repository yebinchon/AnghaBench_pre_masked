
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_13__ {int fs_mgr; } ;
struct TYPE_12__ {char* repo_id; TYPE_2__* tree_root; } ;
struct TYPE_11__ {int dents; int version; } ;
struct TYPE_10__ {int mode; TYPE_2__* subdir; int id; } ;
typedef int SeafDir ;
typedef TYPE_1__ ChangeSetDirent ;
typedef TYPE_2__ ChangeSetDir ;
typedef TYPE_3__ ChangeSet ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char const*,char*,int ) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static ChangeSetDirent *
FUNC_12 (ChangeSet *VAR_3,
                  const char *VAR_4,
                  gboolean *VAR_5)
{
    char *VAR_6 = VAR_3->repo_id;
    ChangeSetDir *VAR_7 = VAR_3->tree_root;
    char **VAR_8, *VAR_9;
    int VAR_10, VAR_11;
    ChangeSetDir *VAR_12;
    ChangeSetDirent *VAR_13, *VAR_14 = ((void*)0);
    SeafDir *VAR_15;

    *VAR_5 = VAR_0;

    VAR_8 = FUNC_5 (VAR_4, "/", 0);
    VAR_10 = FUNC_6(VAR_8);
    VAR_12 = VAR_7;
    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        VAR_9 = VAR_8[VAR_11];

        VAR_13 = FUNC_2 (VAR_12->dents, VAR_9);
        if (!VAR_13)
            break;

        if (FUNC_0(VAR_13->mode)) {
            if (VAR_11 == (VAR_10-1)) {

                FUNC_7 (VAR_12, VAR_9);
                if (FUNC_3 (VAR_12->dents) == 0)
                    *VAR_5 = VAR_1;
                VAR_14 = VAR_13;
                break;
            }

            if (!VAR_13->subdir) {
                VAR_15 = FUNC_10(VAR_2->fs_mgr,
                                                       VAR_6,
                                                       VAR_7->version,
                                                       VAR_13->id);
                if (!VAR_15) {
                    FUNC_11 ("Failed to load seafdir %s:%s\n",
                                  VAR_6, VAR_13->id);
                    break;
                }
                VAR_13->subdir = FUNC_9 (VAR_15);
                FUNC_8 (VAR_15);
            }
            VAR_12 = VAR_13->subdir;
        } else if (FUNC_1(VAR_13->mode)) {
            if (VAR_11 == (VAR_10-1)) {

                FUNC_7 (VAR_12, VAR_9);
                if (FUNC_3 (VAR_12->dents) == 0)
                    *VAR_5 = VAR_1;
                VAR_14 = VAR_13;
                break;
            }
        }
    }

    FUNC_4 (VAR_8);
    return VAR_14;
}
