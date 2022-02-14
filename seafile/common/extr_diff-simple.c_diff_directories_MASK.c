
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sub_dirs ;
typedef int gboolean ;
typedef int dirs ;
struct TYPE_15__ {int fs_mgr; } ;
struct TYPE_14__ {int (* dir_cb ) (int,char const*,TYPE_1__**,int ,int *) ;int store_id; int version; int data; } ;
struct TYPE_13__ {char* name; int id; int mode; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_1__ SeafDir ;
typedef TYPE_3__ DiffOptions ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_1__**,char*,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*,char*,int *) ;
 int FUNC_4 (TYPE_1__**,int ,int) ;
 TYPE_7__* VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int,char const*,TYPE_1__**,int ,int *) ;

__attribute__((used)) static int
FUNC_9 (int VAR_2, SeafDirent *VAR_3[], const char *VAR_4, DiffOptions *VAR_5)
{
    SeafDirent *VAR_6[3];
    int VAR_7, VAR_8 = 0;
    char *VAR_9 = "";
    int VAR_10;
    SeafDir *VAR_11[3], *VAR_12;

    FUNC_4 (VAR_6, 0, sizeof(VAR_6[0])*VAR_2);
    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        if (VAR_3[VAR_7] && FUNC_0(VAR_3[VAR_7]->mode)) {
            VAR_6[VAR_7] = VAR_3[VAR_7];
            ++VAR_8;
        }
    }

    if (VAR_8 == 0)
        return 0;

    gboolean VAR_13 = VAR_0;
    VAR_10 = VAR_5->dir_cb (VAR_2, VAR_4, VAR_6, VAR_5->data, &VAR_13);
    if (VAR_10 < 0)
        return VAR_10;

    if (!VAR_13)
        return 0;

    FUNC_4 (VAR_11, 0, sizeof(VAR_11[0])*VAR_2);
    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        if (VAR_3[VAR_7] != ((void*)0) && FUNC_0(VAR_3[VAR_7]->mode)) {
            VAR_12 = FUNC_6 (VAR_1->fs_mgr,
                                               VAR_5->store_id,
                                               VAR_5->version,
                                               VAR_3[VAR_7]->id);
            if (!VAR_12) {
                FUNC_7 ("Failed to find dir %s:%s.\n",
                              VAR_5->store_id, VAR_3[VAR_7]->id);
                VAR_10 = -1;
                goto free_sub_dirs;
            }
            VAR_11[VAR_7] = VAR_12;

            VAR_9 = VAR_3[VAR_7]->name;
        }
    }

    char *VAR_14 = FUNC_3 (VAR_4, VAR_9, "/", ((void*)0));

    VAR_10 = FUNC_1 (VAR_2, VAR_11, VAR_14, VAR_5);

    FUNC_2 (VAR_14);

free_sub_dirs:
    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
        FUNC_5 (VAR_11[VAR_7]);
    return VAR_10;
}
