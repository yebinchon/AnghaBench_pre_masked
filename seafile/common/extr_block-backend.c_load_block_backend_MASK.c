
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GKeyFile ;
typedef int BlockBackend ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*,char*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

BlockBackend*
FUNC_5 (GKeyFile *VAR_0)
{
    char *VAR_1;
    BlockBackend *VAR_2;

    VAR_1 = FUNC_1 (VAR_0, "block_backend", "name", ((void*)0));
    if (!VAR_1) {
        return ((void*)0);
    }

    if (FUNC_4(VAR_1, "filesystem") == 0) {
        VAR_2 = FUNC_2(VAR_0);
        FUNC_0 (VAR_1);
        return VAR_2;
    }

    FUNC_3 ("Unknown backend\n");
    return ((void*)0);
}
