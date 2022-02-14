
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* data; struct TYPE_12__* next; } ;
struct TYPE_11__ {TYPE_3__* entries; } ;
struct TYPE_10__ {char* name; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ GList ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int **,int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (int *,char const*,int,char const*) ;
 TYPE_2__* FUNC_7 (int *,char const*,int,char const*,char*,int **) ;
 int FUNC_8 (char*,char*,char const*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

SeafDirent *
FUNC_10 (SeafFSManager *VAR_2,
                                    const char *VAR_3,
                                    int VAR_4,
                                    const char *VAR_5,
                                    const char *VAR_6,
                                    GError **VAR_7)
{
    SeafDirent *VAR_8 = ((void*)0);
    SeafDir *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);

    VAR_10 = FUNC_2(VAR_6);
    VAR_11 = FUNC_1(VAR_6);

    if (FUNC_9 (VAR_10, ".") == 0) {
        VAR_9 = FUNC_6 (VAR_2, VAR_3, VAR_4, VAR_5);
        if (!VAR_9) {
            FUNC_3 (VAR_7, VAR_0, VAR_1, "directory is missing");
        }
    } else
        VAR_9 = FUNC_7 (VAR_2, VAR_3, VAR_4,
                                                   VAR_5, VAR_10, VAR_7);

    if (!VAR_9) {
        FUNC_8 ("dir %s doesn't exist in repo %.8s.\n", VAR_10, VAR_3);
        goto out;
    }

    GList *VAR_12;
    for (VAR_12 = VAR_9->entries; VAR_12; VAR_12 = VAR_12->next) {
        SeafDirent *VAR_13 = VAR_12->data;
        if (FUNC_9 (VAR_13->name, VAR_11) == 0) {
            VAR_8 = FUNC_5(VAR_13);
            break;
        }
    }

out:
    if (VAR_9)
        FUNC_4 (VAR_9);
    FUNC_0 (VAR_10);
    FUNC_0 (VAR_11);

    return VAR_8;
}
