
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*,void const*,size_t) ;
 int FUNC_1 (int *,char const*,int,char*,char const*,char const*,char*,void const*,size_t,void const*,size_t) ;

int FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3,
                const void *VAR_4, size_t VAR_5, const void *VAR_6, size_t VAR_7)
{
    if ((VAR_4 == ((void*)0)) ^ (VAR_6 == ((void*)0)))
        return 1;
    if (VAR_5 != VAR_7)
        return 1;
    if (VAR_4 == ((void*)0) || FUNC_0(VAR_4, VAR_6, VAR_5) == 0) {
        FUNC_1(((void*)0), VAR_0, VAR_1, "memory", VAR_2, VAR_3, "!=",
                                 VAR_4, VAR_5, VAR_6, VAR_7);
        return 0;
    }
    return 1;
}
