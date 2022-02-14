
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_8__ {int dirents; } ;
struct TYPE_7__ {TYPE_3__* subdir; int mode; } ;
struct TYPE_6__ {TYPE_3__* root; } ;
typedef TYPE_1__ SyncStatusTree ;
typedef TYPE_2__ SyncStatusDirent ;
typedef TYPE_3__ SyncStatusDir ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (char const*,char*,int ) ;
 size_t FUNC_4 (char**) ;

int
FUNC_5 (SyncStatusTree *VAR_0,
                         const char *VAR_1)
{
    char **VAR_2 = ((void*)0);
    guint VAR_3, VAR_4;
    char *VAR_5;
    SyncStatusDir *VAR_6 = VAR_0->root;
    SyncStatusDirent *VAR_7;
    int VAR_8 = 0;

    VAR_2 = FUNC_3 (VAR_1, "/", 0);
    if (!VAR_2)
        return VAR_8;
    VAR_3 = FUNC_4 (VAR_2);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 = VAR_2[VAR_4];
        VAR_7 = FUNC_1 (VAR_6->dirents, VAR_5);
        if (VAR_7) {
            if (FUNC_0(VAR_7->mode)) {
                if (VAR_4 == (VAR_3-1)) {
                    VAR_8 = 1;
                    goto out;
                } else {
                    VAR_6 = VAR_7->subdir;
                }
            } else {
                if (VAR_4 == (VAR_3-1)) {
                    VAR_8 = 1;
                    goto out;
                } else {
                    goto out;
                }
            }
        } else {
            goto out;
        }
    }

out:
    FUNC_2 (VAR_2);
    return VAR_8;
}
