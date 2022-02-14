
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_0)
{
    char *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if (FUNC_0 (VAR_0) < 0) {
        FUNC_3 ("Directory %s does not exist and is unable to create\n",
                      VAR_0);
        return -1;
    }

    VAR_1 = FUNC_1 (VAR_0, "commits", ((void*)0));
    if (FUNC_0 (VAR_1) < 0) {
        FUNC_3 ("Directory %s does not exist and is unable to create\n",
                      VAR_1);
        VAR_4 = -1;
        goto out;
    }

    VAR_2 = FUNC_1 (VAR_0, "fs", ((void*)0));
    if (FUNC_0 (VAR_2) < 0) {
        FUNC_3 ("Directory %s does not exist and is unable to create\n",
                      VAR_2);
        VAR_4 = -1;
        goto out;
    }

    VAR_3 = FUNC_1 (VAR_0, "blocks", ((void*)0));
    if (FUNC_0 (VAR_3) < 0) {
        FUNC_3 ("Directory %s does not exist and is unable to create\n",
                      VAR_3);
        VAR_4 = -1;
        goto out;
    }

out:
    FUNC_2 (VAR_1);
    FUNC_2 (VAR_2);
    FUNC_2 (VAR_3);
    return VAR_4;
}
