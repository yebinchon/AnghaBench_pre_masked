
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GKeyFile ;
typedef int BlockBackend ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (char*) ;

BlockBackend*
FUNC_4(GKeyFile *VAR_0)
{
    BlockBackend *VAR_1;
    char *VAR_2;
    char *VAR_3;

    VAR_3 = FUNC_2 (VAR_0, "block_backend", "block_dir", ((void*)0));
    if (!VAR_3) {
        FUNC_3 ("Block dir not set in config.\n");
        return ((void*)0);
    }

    VAR_2 = FUNC_2 (VAR_0, "block_backend", "tmp_dir", ((void*)0));
    if (!VAR_2) {
        FUNC_3 ("Block tmp dir not set in config.\n");
        return ((void*)0);
    }

    VAR_1 = FUNC_0 (VAR_3, VAR_2);

    FUNC_1 (VAR_3);
    FUNC_1 (VAR_2);
    return VAR_1;
}
