
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seaf_dir; } ;
typedef int SeafRepoManager ;


 char* FUNC_0 (int ,char*,char const*,char const*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*,char const*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_4 (SeafRepoManager *VAR_1,
                                   const char *VAR_2,
                                   const char *VAR_3)
{
    char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);

    VAR_4 = FUNC_0 (VAR_0->seaf_dir, "storage", VAR_2, VAR_3, ((void*)0));
    VAR_5 = FUNC_3 (VAR_2, VAR_3);
    if (VAR_5) {
        FUNC_2 (VAR_4, VAR_5);
    }
    FUNC_1 (VAR_4);
    FUNC_1 (VAR_5);
}
