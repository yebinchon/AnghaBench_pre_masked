
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int is_readonly; } ;
typedef int SeafRepoManager ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,char const*) ;

gboolean
FUNC_3 (SeafRepoManager *VAR_1,
                                    const char *VAR_2,
                                    const char *VAR_3)
{
    SeafRepo *VAR_4 = FUNC_1 (VAR_1, VAR_2);
    if (!VAR_4) {
        FUNC_2 ("Failed to get repo %s.\n", VAR_2);
        return VAR_0;
    }

    return FUNC_0 (VAR_2, VAR_4->is_readonly, VAR_3);
}
