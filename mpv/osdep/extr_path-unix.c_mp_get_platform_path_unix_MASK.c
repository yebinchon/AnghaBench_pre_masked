
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char const* FUNC_0 (char*) ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

const char *FUNC_3(void *VAR_5, const char *VAR_6)
{
    FUNC_1(&VAR_4, VAR_3);
    if (FUNC_2(VAR_6, "home") == 0)
        return VAR_1;
    if (FUNC_2(VAR_6, "old_home") == 0)
        return VAR_2;
    if (FUNC_2(VAR_6, "global") == 0)
        return VAR_0;
    if (FUNC_2(VAR_6, "desktop") == 0)
        return FUNC_0("HOME");
    return ((void*)0);
}
