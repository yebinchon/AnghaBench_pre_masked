
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repo_mgr; } ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char const*,char const*,char const*) ;

int
FUNC_2 (const char *VAR_3,
                             const char *VAR_4,
                             const char *VAR_5,
                             GError **VAR_6)
{
    if (!VAR_3 || !VAR_4 || !VAR_5) {
        FUNC_0 (VAR_6, VAR_0, VAR_1,
                     "Argument should not be null");
        return -1;
    }

    return FUNC_1 (VAR_2->repo_mgr,
                                                  VAR_3,
                                                  VAR_4, VAR_5);
}
