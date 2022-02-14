
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {int fs_mgr; } ;
struct TYPE_21__ {char* repo_id; TYPE_2__* tree_root; } ;
struct TYPE_20__ {int dents_i; int version; int dents; } ;
struct TYPE_19__ {char* name; int mode; TYPE_2__* subdir; int id; } ;
typedef int SeafStat ;
typedef int SeafDir ;
typedef TYPE_1__ ChangeSetDirent ;
typedef TYPE_2__ ChangeSetDir ;
typedef TYPE_3__ ChangeSet ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,unsigned char*,int *,char const*,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char**) ;
 char** FUNC_9 (char const*,char*,int ) ;
 int FUNC_10 (char**) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 TYPE_6__* VAR_0 ;
 int FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (int *) ;
 int * FUNC_16 (int ,char*,int ,int ) ;
 int FUNC_17 (char*,char*,int ) ;
 int FUNC_18 (TYPE_1__*,unsigned char*,int *,char const*) ;

__attribute__((used)) static void
FUNC_19 (ChangeSet *VAR_1,
             unsigned char *VAR_2,
             SeafStat *VAR_3,
             const char *VAR_4,
             const char *VAR_5,
             ChangeSetDirent *VAR_6)
{
    char *VAR_7 = VAR_1->repo_id;
    ChangeSetDir *VAR_8 = VAR_1->tree_root;
    char **VAR_9, *VAR_10;
    int VAR_11, VAR_12;
    ChangeSetDir *VAR_13;
    ChangeSetDirent *VAR_14;
    SeafDir *VAR_15;

    VAR_9 = FUNC_9 (VAR_5, "/", 0);
    VAR_11 = FUNC_10(VAR_9);
    VAR_13 = VAR_8;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {



        VAR_10 = VAR_9[VAR_12];
        VAR_14 = FUNC_6 (VAR_13->dents, VAR_10);

        if (VAR_14) {
            if (FUNC_0(VAR_14->mode)) {
                if (VAR_12 == (VAR_11-1))

                    break;

                if (!VAR_14->subdir) {
                    VAR_15 = FUNC_16(VAR_0->fs_mgr,
                                                           VAR_7,
                                                           VAR_8->version,
                                                           VAR_14->id);
                    if (!VAR_15) {
                        FUNC_17 ("Failed to load seafdir %s:%s\n",
                                      VAR_7, VAR_14->id);
                        break;
                    }
                    VAR_14->subdir = FUNC_15 (VAR_15);
                    FUNC_14 (VAR_15);
                }
                VAR_13 = VAR_14->subdir;
            } else if (FUNC_1(VAR_14->mode)) {
                if (VAR_12 == (VAR_11-1)) {

                    FUNC_18 (VAR_14, VAR_2, VAR_3, VAR_4);
                    break;
                }
            }
        } else {
            if (VAR_12 == (VAR_11-1)) {
                FUNC_4 (VAR_13, VAR_10, VAR_2, VAR_3, VAR_4, VAR_6);
            } else {
                VAR_13 = FUNC_3 (VAR_13, VAR_10);
            }
        }
    }

    FUNC_8 (VAR_9);
}
