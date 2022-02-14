
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_12__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gboolean ;
struct TYPE_14__ {int enc_version; char* random_key; int repo_version; char* repo_salt; char const* repo_id; scalar_t__ server_url; int is_readonly; int sync_wt_name; TYPE_2__* manager; } ;
struct TYPE_13__ {int tasks; } ;
typedef TYPE_2__ SeafCloneManager ;
typedef int GError ;
typedef TYPE_3__ CloneTask ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_4 (int ,char*,TYPE_3__*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,int ,TYPE_1__*) ;
 int * FUNC_9 (int *,char*) ;
 char const* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static char *
FUNC_13 (SeafCloneManager *VAR_0,
                 const char *VAR_1,
                 int VAR_2,
                 const char *VAR_3,
                 const char *VAR_4,
                 const char *VAR_5,
                 const char *VAR_6,
                 int VAR_7,
                 const char *VAR_8,
                 const char *VAR_9,
                 const char *VAR_10,
                 const char *VAR_11,
                 const char *VAR_12,
                 const char *VAR_13,
                 gboolean VAR_14,
                 GError **VAR_15)
{
    CloneTask *VAR_16;

    VAR_16 = FUNC_3 (VAR_1, VAR_3, VAR_4,
                           VAR_5, VAR_9, VAR_6,
                           VAR_10, VAR_11, VAR_12);
    VAR_16->manager = VAR_0;
    VAR_16->enc_version = VAR_7;
    VAR_16->random_key = FUNC_5 (VAR_8);
    VAR_16->repo_version = VAR_2;
    VAR_16->sync_wt_name = VAR_14;
    if (VAR_13) {
        json_error_t VAR_17;
        json_t *VAR_18 = ((void*)0);

        VAR_18 = FUNC_8 (VAR_13, 0, &VAR_17);
        if (!VAR_18) {
            FUNC_12 ("Failed to load more sync info from json: %s.\n", VAR_17.text);
            FUNC_2 (VAR_16);
            return ((void*)0);
        }

        json_t *VAR_19 = FUNC_9 (VAR_18, "is_readonly");
        VAR_16->is_readonly = FUNC_7 (VAR_19);
        json_t *VAR_20 = FUNC_9 (VAR_18, "server_url");
        if (VAR_20)
            VAR_16->server_url = FUNC_0 (FUNC_10 (VAR_20));
        json_t *VAR_21 = FUNC_9 (VAR_18, "repo_salt");
        if (VAR_21)
            VAR_16->repo_salt = FUNC_5 (FUNC_10 (VAR_21));
        FUNC_6 (VAR_18);
    }

    if (FUNC_11 (VAR_0, VAR_16) < 0) {
        FUNC_12 ("[Clone mgr] failed to save task.\n");
        FUNC_2 (VAR_16);
        return ((void*)0);
    }

    if (VAR_16->repo_version > 0) {
        if (VAR_16->server_url) {
            FUNC_1 (VAR_16);
        } else {
            FUNC_2 (VAR_16);
            return ((void*)0);
        }
    }


    FUNC_4 (VAR_0->tasks, FUNC_5(VAR_16->repo_id), VAR_16);

    return FUNC_5(VAR_1);
}
