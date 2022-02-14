
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;


 char** FUNC_0 (void*,struct mpv_global*,int,char const*) ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (void*,char*) ;

char *FUNC_3(void *VAR_0, struct mpv_global *VAR_1,
                          const char *VAR_2)
{
    char **VAR_3 = FUNC_0(VAR_0, VAR_1, 1, VAR_2);
    char *VAR_4 = VAR_3 && VAR_3[0] ? FUNC_2(VAR_0, VAR_3[0]) : ((void*)0);
    FUNC_1(VAR_3);
    return VAR_4;
}
