
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int obj_store; TYPE_1__* priv; } ;
struct TYPE_4__ {int commit_cache; } ;
typedef TYPE_2__ SeafCommitManager ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,int,char const*) ;

gboolean
FUNC_2 (SeafCommitManager *VAR_2,
                                   const char *VAR_3,
                                   int VAR_4,
                                   const char *VAR_5)
{






    return FUNC_1 (VAR_2->obj_store, VAR_3, VAR_4, VAR_5);
}
