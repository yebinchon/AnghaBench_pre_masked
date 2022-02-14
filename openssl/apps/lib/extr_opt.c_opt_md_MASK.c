
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int VAR_0 ;

int FUNC_2(const char *VAR_1, const EVP_MD **VAR_2)
{
    *VAR_2 = FUNC_0(VAR_1);
    if (*VAR_2 != ((void*)0))
        return 1;
    FUNC_1("%s: Unrecognized flag %s\n", VAR_0, VAR_1);
    return 0;
}
