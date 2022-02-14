
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int repo_mgr; } ;
struct TYPE_13__ {int new_name; int name; int status; } ;
struct TYPE_12__ {TYPE_2__* data; struct TYPE_12__* next; } ;
typedef int SeafileDiffEntry ;
typedef int SeafRepo ;
typedef TYPE_1__ GList ;
typedef int GError ;
typedef TYPE_2__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int ,char*,int ,char*,int ,char*,int ,int *) ;
 int FUNC_6 (int **,int ,int,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 TYPE_5__* VAR_3 ;
 TYPE_1__* FUNC_10 (int *,char const*,char const*,int,char**) ;
 int * FUNC_11 (int ,char const*) ;

GList *
FUNC_12 (const char *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7, GError **VAR_8)
{
    SeafRepo *VAR_9;
    char *VAR_10 = ((void*)0);
    GList *VAR_11, *VAR_12;
    GList *VAR_13 = ((void*)0);

    if (!VAR_4 || !VAR_5 || !VAR_6) {
        FUNC_6 (VAR_8, VAR_0, VAR_2, "Argument should not be null");
        return ((void*)0);
    }

    if (!FUNC_9 (VAR_4)) {
        FUNC_6 (VAR_8, VAR_0, VAR_2, "Invalid repo id");
        return ((void*)0);
    }

    if ((VAR_5[0] != 0 && !FUNC_8 (VAR_5)) || !FUNC_8(VAR_6)) {
        FUNC_6 (VAR_8, VAR_0, VAR_2, "Invalid commit id");
        return ((void*)0);
    }

    VAR_9 = FUNC_11 (VAR_3->repo_mgr, VAR_4);
    if (!VAR_9) {
        FUNC_6 (VAR_8, VAR_0, VAR_2, "No such repository");
        return ((void*)0);
    }

    VAR_11 = FUNC_10 (VAR_9, VAR_5, VAR_6, VAR_7, &VAR_10);
    if (VAR_10) {
        FUNC_6 (VAR_8, VAR_0, -1, "%s", VAR_10);
        FUNC_1 (VAR_10);
        return ((void*)0);
    }

    for (VAR_12 = VAR_11; VAR_12 != ((void*)0); VAR_12 = VAR_12->next) {
        DiffEntry *VAR_14 = VAR_12->data;
        SeafileDiffEntry *VAR_15 = FUNC_5 (
            VAR_1,
            "status", FUNC_7(VAR_14->status),
            "name", VAR_14->name,
            "new_name", VAR_14->new_name,
            ((void*)0));
        VAR_13 = FUNC_3 (VAR_13, VAR_15);
    }

    for (VAR_12 = VAR_11; VAR_12 != ((void*)0); VAR_12 = VAR_12->next) {
        DiffEntry *VAR_16 = VAR_12->data;
        FUNC_0 (VAR_16);
    }
    FUNC_2 (VAR_11);

    return FUNC_4 (VAR_13);
}
