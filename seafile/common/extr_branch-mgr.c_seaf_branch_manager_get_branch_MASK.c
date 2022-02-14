
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SeafBranchManager ;
typedef int SeafBranch ;


 int * FUNC_0 (int *,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

SeafBranch *
FUNC_2 (SeafBranchManager *VAR_0,
                                const char *VAR_1,
                                const char *VAR_2)
{
    SeafBranch *VAR_3;


    if (FUNC_1 (VAR_2, "fetch_head") == 0) {
        VAR_3 = FUNC_0 (VAR_0, VAR_1, "local");
        if (!VAR_3) {
            VAR_3 = FUNC_0 (VAR_0, VAR_1, "master");
        }
        return VAR_3;
    } else {
        return FUNC_0 (VAR_0, VAR_1, VAR_2);
    }
}
