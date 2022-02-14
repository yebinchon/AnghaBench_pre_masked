
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enc_version; int version; int no_local_history; int salt; int random_key; int magic; int root_id; int ctime; scalar_t__ encrypted; int repo_desc; int repo_name; } ;
struct TYPE_5__ {int enc_version; int version; int no_local_history; int salt; int random_key; int magic; scalar_t__ encrypted; int root_id; int last_modify; void* desc; void* name; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2 (SeafRepo *VAR_0, SeafCommit *VAR_1)
{
    VAR_0->name = FUNC_0 (VAR_1->repo_name);
    VAR_0->desc = FUNC_0 (VAR_1->repo_desc);
    VAR_0->encrypted = VAR_1->encrypted;
    VAR_0->last_modify = VAR_1->ctime;
    FUNC_1 (VAR_0->root_id, VAR_1->root_id, 40);
    if (VAR_0->encrypted) {
        VAR_0->enc_version = VAR_1->enc_version;
        if (VAR_0->enc_version == 1)
            FUNC_1 (VAR_0->magic, VAR_1->magic, 32);
        else if (VAR_0->enc_version == 2) {
            FUNC_1 (VAR_0->magic, VAR_1->magic, 64);
            FUNC_1 (VAR_0->random_key, VAR_1->random_key, 96);
        }
        else if (VAR_0->enc_version == 3) {
            FUNC_1 (VAR_0->magic, VAR_1->magic, 64);
            FUNC_1 (VAR_0->random_key, VAR_1->random_key, 96);
            FUNC_1 (VAR_0->salt, VAR_1->salt, 64);
        }
    }
    VAR_0->no_local_history = VAR_1->no_local_history;
    VAR_0->version = VAR_1->version;
}
