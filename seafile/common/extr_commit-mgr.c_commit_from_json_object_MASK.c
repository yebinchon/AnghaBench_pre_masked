
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
typedef scalar_t__ guint64 ;
typedef scalar_t__ gint64 ;
struct TYPE_4__ {int enc_version; int version; void* repaired; void* conflict; void* new_merge; void* no_local_history; int * salt; int * random_key; int * magic; void* encrypted; int * client_version; int * device_name; int * repo_category; int * repo_desc; int * repo_name; int * second_parent_id; int * parent_id; } ;
typedef TYPE_1__ SeafCommit ;


 void* VAR_0 ;
 void* VAR_1 ;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 TYPE_1__* FUNC_9 (char const*,char const*,char const*,char*,char const*,char const*,scalar_t__) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static SeafCommit *
FUNC_13 (const char *VAR_2, json_t *VAR_3)
{
    SeafCommit *VAR_4 = ((void*)0);
    const char *VAR_5;
    const char *VAR_6;
    const char *VAR_7 = ((void*)0);
    const char *VAR_8;
    const char *VAR_9;
    gint64 VAR_10;
    const char *VAR_11, *VAR_12;
    const char *VAR_13;
    const char *VAR_14;
    const char *VAR_15;
    const char *VAR_16;
    const char *VAR_17;
    const char *VAR_18 = ((void*)0);
    int VAR_19 = 0;
    const char *VAR_20 = ((void*)0);
    const char *VAR_21 = ((void*)0);
    const char *VAR_22 = ((void*)0);
    int VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25 = 0, VAR_26 = 0;
    int VAR_27 = 0;

    VAR_5 = FUNC_6 (VAR_3, "root_id");
    VAR_6 = FUNC_6 (VAR_3, "repo_id");
    if (FUNC_8 (VAR_3, "creator_name"))
        VAR_7 = FUNC_7 (VAR_3, "creator_name");
    VAR_8 = FUNC_6 (VAR_3, "creator");
    VAR_9 = FUNC_6 (VAR_3, "description");
    if (!VAR_9)
        VAR_9 = "";
    VAR_10 = (guint64) FUNC_5 (VAR_3, "ctime");
    VAR_11 = FUNC_7 (VAR_3, "parent_id");
    VAR_12 = FUNC_7 (VAR_3, "second_parent_id");

    VAR_13 = FUNC_6 (VAR_3, "repo_name");
    if (!VAR_13)
        VAR_13 = "";
    VAR_14 = FUNC_6 (VAR_3, "repo_desc");
    if (!VAR_14)
        VAR_14 = "";
    VAR_15 = FUNC_7 (VAR_3, "repo_category");
    VAR_16 = FUNC_7 (VAR_3, "device_name");
    VAR_17 = FUNC_7 (VAR_3, "client_version");

    if (FUNC_8 (VAR_3, "encrypted"))
        VAR_18 = FUNC_7 (VAR_3, "encrypted");

    if (VAR_18 && FUNC_11(VAR_18, "true") == 0
        && FUNC_8 (VAR_3, "enc_version")) {
        VAR_19 = FUNC_5 (VAR_3, "enc_version");
        VAR_20 = FUNC_6 (VAR_3, "magic");
    }

    if (VAR_19 >= 2)
        VAR_21 = FUNC_6 (VAR_3, "key");
    if (VAR_19 >= 3)
        VAR_22 = FUNC_6 (VAR_3, "salt");

    if (FUNC_8 (VAR_3, "no_local_history"))
        VAR_23 = FUNC_5 (VAR_3, "no_local_history");

    if (FUNC_8 (VAR_3, "version"))
        VAR_24 = FUNC_5 (VAR_3, "version");
    if (FUNC_8 (VAR_3, "new_merge"))
        VAR_26 = FUNC_5 (VAR_3, "new_merge");

    if (FUNC_8 (VAR_3, "conflict"))
        VAR_25 = FUNC_5 (VAR_3, "conflict");

    if (FUNC_8 (VAR_3, "repaired"))
        VAR_27 = FUNC_5 (VAR_3, "repaired");



    if (!VAR_6 || !FUNC_4(VAR_6) ||
        !VAR_5 || !FUNC_3(VAR_5) ||
        !VAR_8 || FUNC_12(VAR_8) != 40 ||
        (VAR_11 && !FUNC_3(VAR_11)) ||
        (VAR_12 && !FUNC_3(VAR_12)))
        return VAR_4;

    switch (VAR_19) {
    case 0:
        break;
    case 1:
        if (!VAR_20 || FUNC_12(VAR_20) != 32)
            return ((void*)0);
        break;
    case 2:
        if (!VAR_20 || FUNC_12(VAR_20) != 64)
            return ((void*)0);
        if (!VAR_21 || FUNC_12(VAR_21) != 96)
            return ((void*)0);
        break;
    case 3:
        if (!VAR_20 || FUNC_12(VAR_20) != 64)
            return ((void*)0);
        if (!VAR_21 || FUNC_12(VAR_21) != 96)
            return ((void*)0);
        if (!VAR_22 || FUNC_12(VAR_22) != 64)
            return ((void*)0);
        break;
    default:
        FUNC_10 ("Unknown encryption version %d.\n", VAR_19);
        return ((void*)0);
    }

    char *VAR_28 = VAR_7 ? FUNC_0 (VAR_7, -1) : ((void*)0);
    VAR_4 = FUNC_9 (VAR_2, VAR_6, VAR_5,
                              VAR_28, VAR_8, VAR_9, VAR_10);
    FUNC_1 (VAR_28);

    VAR_4->parent_id = VAR_11 ? FUNC_2(VAR_11) : ((void*)0);
    VAR_4->second_parent_id = VAR_12 ? FUNC_2(VAR_12) : ((void*)0);

    VAR_4->repo_name = FUNC_2(VAR_13);
    VAR_4->repo_desc = FUNC_2(VAR_14);
    if (VAR_18 && FUNC_11(VAR_18, "true") == 0)
        VAR_4->encrypted = VAR_1;
    else
        VAR_4->encrypted = VAR_0;
    if (VAR_15)
        VAR_4->repo_category = FUNC_2(VAR_15);
    VAR_4->device_name = FUNC_2(VAR_16);
    VAR_4->client_version = FUNC_2(VAR_17);

    if (VAR_4->encrypted) {
        VAR_4->enc_version = VAR_19;
        if (VAR_19 >= 1)
            VAR_4->magic = FUNC_2(VAR_20);
        if (VAR_19 >= 2)
            VAR_4->random_key = FUNC_2 (VAR_21);
        if (VAR_19 >= 3)
            VAR_4->salt = FUNC_2(VAR_22);
    }
    if (VAR_23)
        VAR_4->no_local_history = VAR_1;
    VAR_4->version = VAR_24;
    if (VAR_26)
        VAR_4->new_merge = VAR_1;
    if (VAR_25)
        VAR_4->conflict = VAR_1;
    if (VAR_27)
        VAR_4->repaired = VAR_1;

    return VAR_4;
}
