
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {int repo_mgr; } ;
typedef int SeafRepoManager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_1 (int ,char const*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

gboolean
FUNC_3 (SeafRepoManager *VAR_4,
                                 const char *VAR_5)
{
    gboolean VAR_6 = VAR_0;

    char *VAR_7 = FUNC_1 (VAR_3->repo_mgr,
                                                          VAR_5,
                                                          VAR_1);
    if (VAR_7 != ((void*)0) && FUNC_2 (VAR_7, "true") == 0)
        VAR_6 = VAR_2;

    FUNC_0 (VAR_7);
    return VAR_6;
}
