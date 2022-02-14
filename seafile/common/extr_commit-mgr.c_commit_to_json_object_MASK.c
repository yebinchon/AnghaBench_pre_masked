
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
typedef int gint64 ;
struct TYPE_3__ {char* commit_id; char* root_id; char* repo_id; char* creator_name; char* creator_id; char* desc; char* repo_name; char* repo_desc; char* device_name; char* client_version; int enc_version; char* magic; char* random_key; char* salt; int version; scalar_t__ repaired; scalar_t__ new_merge; scalar_t__ conflict; scalar_t__ no_local_history; scalar_t__ encrypted; int repo_category; int second_parent_id; int parent_id; scalar_t__ ctime; } ;
typedef TYPE_1__ SeafCommit ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static json_t *
FUNC_4 (SeafCommit *VAR_0)
{
    json_t *VAR_1;

    VAR_1 = FUNC_0 ();

    FUNC_2 (VAR_1, "commit_id", VAR_0->commit_id);
    FUNC_2 (VAR_1, "root_id", VAR_0->root_id);
    FUNC_2 (VAR_1, "repo_id", VAR_0->repo_id);
    if (VAR_0->creator_name)
        FUNC_2 (VAR_1, "creator_name", VAR_0->creator_name);
    FUNC_2 (VAR_1, "creator", VAR_0->creator_id);
    FUNC_2 (VAR_1, "description", VAR_0->desc);
    FUNC_1 (VAR_1, "ctime", (gint64)VAR_0->ctime);
    FUNC_3 (VAR_1, "parent_id", VAR_0->parent_id);
    FUNC_3 (VAR_1, "second_parent_id",
                                           VAR_0->second_parent_id);




    FUNC_2 (VAR_1, "repo_name", VAR_0->repo_name);
    FUNC_2 (VAR_1, "repo_desc",
                                   VAR_0->repo_desc);
    FUNC_3 (VAR_1, "repo_category",
                                           VAR_0->repo_category);
    if (VAR_0->device_name)
        FUNC_2 (VAR_1, "device_name", VAR_0->device_name);

    if (VAR_0->client_version)
        FUNC_2 (VAR_1, "client_version", VAR_0->client_version);

    if (VAR_0->encrypted)
        FUNC_2 (VAR_1, "encrypted", "true");

    if (VAR_0->encrypted) {
        FUNC_1 (VAR_1, "enc_version", VAR_0->enc_version);
        if (VAR_0->enc_version >= 1)
            FUNC_2 (VAR_1, "magic", VAR_0->magic);
        if (VAR_0->enc_version >= 2)
            FUNC_2 (VAR_1, "key", VAR_0->random_key);
        if (VAR_0->enc_version >= 3)
            FUNC_2 (VAR_1, "salt", VAR_0->salt);
    }
    if (VAR_0->no_local_history)
        FUNC_1 (VAR_1, "no_local_history", 1);
    if (VAR_0->version != 0)
        FUNC_1 (VAR_1, "version", VAR_0->version);
    if (VAR_0->conflict)
        FUNC_1 (VAR_1, "conflict", 1);
    if (VAR_0->new_merge)
        FUNC_1 (VAR_1, "new_merge", 1);
    if (VAR_0->repaired)
        FUNC_1 (VAR_1, "repaired", 1);

    return VAR_1;
}
