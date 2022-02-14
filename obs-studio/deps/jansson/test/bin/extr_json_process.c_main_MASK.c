
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strip; int use_env; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_3, char *VAR_4[])
{
    int VAR_5;
    char *VAR_6 = ((void*)0);





    if (VAR_3 < 2) {
        goto usage;
    }

    for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
        if (!FUNC_2(VAR_4[VAR_5], "--strip"))
            VAR_1.strip = 1;
        else if (!FUNC_2(VAR_4[VAR_5], "--env"))
            VAR_1.use_env = 1;
        else
            VAR_6 = VAR_4[VAR_5];
    }

    if (VAR_1.use_env)
        return FUNC_4();
    else
    {
        if (!VAR_6)
            goto usage;

        return FUNC_3(VAR_6);
    }

usage:
    FUNC_0(VAR_2, "argc =%d\n", VAR_3);
    FUNC_0(VAR_2, "usage: %s [--strip] [--env] test_dir\n", VAR_4[0]);
    return 2;
}
