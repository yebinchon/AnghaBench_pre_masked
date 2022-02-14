
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int*) ;
 char* FUNC_1 (char const*,char*) ;

int
FUNC_2(const char *VAR_0)
{
    const char *VAR_1 = VAR_0 ? FUNC_1(VAR_0, "IV_NCP=") : ((void*)0);
    if (VAR_1)
    {
        int VAR_2 = 0;
        int VAR_3 = FUNC_0(VAR_1, "IV_NCP=%d", &VAR_2);
        if (VAR_3 == 1)
        {
            return VAR_2;
        }
    }
    return 0;
}
