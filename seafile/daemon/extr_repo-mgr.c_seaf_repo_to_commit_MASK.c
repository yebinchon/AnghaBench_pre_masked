
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enc_version; int version; int no_local_history; void* salt; void* random_key; void* magic; scalar_t__ encrypted; void* repo_desc; void* repo_name; } ;
struct TYPE_5__ {int enc_version; int version; int no_local_history; int salt; int random_key; int magic; scalar_t__ encrypted; int desc; int name; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;


 void* FUNC_0 (int ) ;

void
FUNC_1 (SeafRepo *VAR_0, SeafCommit *VAR_1)
{
    VAR_1->repo_name = FUNC_0 (VAR_0->name);
    VAR_1->repo_desc = FUNC_0 (VAR_0->desc);
    VAR_1->encrypted = VAR_0->encrypted;
    if (VAR_1->encrypted) {
        VAR_1->enc_version = VAR_0->enc_version;
        if (VAR_1->enc_version == 1)
            VAR_1->magic = FUNC_0 (VAR_0->magic);
        else if (VAR_1->enc_version == 2) {
            VAR_1->magic = FUNC_0 (VAR_0->magic);
            VAR_1->random_key = FUNC_0 (VAR_0->random_key);
        }
        else if (VAR_1->enc_version == 3) {
            VAR_1->magic = FUNC_0 (VAR_0->magic);
            VAR_1->random_key = FUNC_0 (VAR_0->random_key);
            VAR_1->salt = FUNC_0 (VAR_0->salt);
        }
    }
    VAR_1->no_local_history = VAR_0->no_local_history;
    VAR_1->version = VAR_0->version;
}
