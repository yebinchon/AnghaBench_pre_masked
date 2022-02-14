
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int commit_cache; } ;
typedef TYPE_2__ SeafCommitManager ;
typedef int SeafCommit ;


 int * FUNC_0 (int ,char const*) ;
 int * FUNC_1 (TYPE_2__*,char const*,int,char const*) ;
 int FUNC_2 (int *) ;

SeafCommit*
FUNC_3 (SeafCommitManager *VAR_0,
                                const char *VAR_1,
                                int VAR_2,
                                const char *VAR_3)
{
    SeafCommit *VAR_4;
    VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
    if (!VAR_4)
        return ((void*)0);



    return VAR_4;
}
