
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int ,char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void*) ;

char *FUNC_3(void *VAR_0, const char *VAR_1, size_t VAR_2)
{
    if (!VAR_1)
        return ((void*)0);
    char *VAR_3 = ((void*)0);
    FUNC_0(&VAR_3, 0, VAR_1, VAR_2);
    if (!FUNC_2(VAR_3, VAR_0)) {
        FUNC_1(VAR_3);
        VAR_3 = ((void*)0);
    }
    return VAR_3;
}
