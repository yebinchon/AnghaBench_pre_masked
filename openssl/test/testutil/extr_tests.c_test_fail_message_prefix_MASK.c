
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(const char *VAR_0, const char *VAR_1,
                              int VAR_2, const char *VAR_3,
                              const char *VAR_4, const char *VAR_5,
                              const char *VAR_6)
{
    FUNC_0("%s: ", VAR_0 != ((void*)0) ? VAR_0 : "ERROR");
    if (VAR_3)
        FUNC_0("(%s) ", VAR_3);
    if (VAR_6 != ((void*)0)) {
        if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0))
            FUNC_0("'%s %s %s' failed", VAR_4, VAR_6, VAR_5);
        else
            FUNC_0("'%s'", VAR_6);
    }
    if (VAR_1 != ((void*)0)) {
        FUNC_0(" @ %s:%d", VAR_1, VAR_2);
    }
    FUNC_0("\n");
}
