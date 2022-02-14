
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* random_key; struct TYPE_4__* magic; struct TYPE_4__* client_version; struct TYPE_4__* device_name; struct TYPE_4__* repo_desc; struct TYPE_4__* repo_name; struct TYPE_4__* second_parent_id; struct TYPE_4__* parent_id; struct TYPE_4__* creator_name; struct TYPE_4__* desc; } ;
typedef TYPE_1__ SeafCommit ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (SeafCommit *VAR_0)
{
    FUNC_0 (VAR_0->desc);
    FUNC_0 (VAR_0->creator_name);
    if (VAR_0->parent_id) FUNC_0 (VAR_0->parent_id);
    if (VAR_0->second_parent_id) FUNC_0 (VAR_0->second_parent_id);
    if (VAR_0->repo_name) FUNC_0 (VAR_0->repo_name);
    if (VAR_0->repo_desc) FUNC_0 (VAR_0->repo_desc);
    if (VAR_0->device_name) FUNC_0 (VAR_0->device_name);
    FUNC_0 (VAR_0->client_version);
    FUNC_0 (VAR_0->magic);
    FUNC_0 (VAR_0->random_key);
    FUNC_0 (VAR_0);
}
