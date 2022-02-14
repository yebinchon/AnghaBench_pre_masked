
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version; int repo_id; } ;
typedef int SeafCommitManager ;
typedef TYPE_1__ SeafCommit ;


 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;

int
FUNC_1 (SeafCommitManager *VAR_0,
                                SeafCommit *VAR_1)
{
    int VAR_2;


    if ((VAR_2 = FUNC_0 (VAR_0, VAR_1->repo_id, VAR_1->version, VAR_1)) < 0)
        return -1;

    return 0;
}
