
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* FUNC_0 (void*) ;
 char const* FUNC_1 (void*) ;
 char const* FUNC_2 (void*,char*) ;
 char const* FUNC_3 (void*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

const char *FUNC_6(void *VAR_4, const char *VAR_5)
{
    FUNC_4(&VAR_2, VAR_1);
    if (VAR_3) {
        if (FUNC_5(VAR_5, "home") == 0)
            return VAR_3;
    } else {
        if (FUNC_5(VAR_5, "home") == 0)
            return FUNC_0(VAR_4);
        if (FUNC_5(VAR_5, "old_home") == 0)
            return FUNC_1(VAR_4);

        if (FUNC_5(VAR_5, "global") == 0)
            return FUNC_2(VAR_4, "mpv");
    }
    if (FUNC_5(VAR_5, "desktop") == 0)
        return FUNC_3(VAR_4, &VAR_0);
    return ((void*)0);
}
