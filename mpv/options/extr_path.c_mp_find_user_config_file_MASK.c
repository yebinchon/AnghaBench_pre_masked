
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;


 int FUNC_0 (struct mpv_global*,char*,char const*,char*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (void*,struct mpv_global*,int ) ;
 char* FUNC_2 (void*,char*,char const*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int *) ;

char *FUNC_5(void *VAR_1, struct mpv_global *VAR_2,
                               const char *VAR_3)
{
    void *VAR_4 = FUNC_4(((void*)0));
    char *VAR_5 = (char *)FUNC_1(VAR_4, VAR_2, VAR_0[0]);
    if (VAR_5)
        VAR_5 = FUNC_2(VAR_1, VAR_5, VAR_3);
    FUNC_3(VAR_4);
    FUNC_0(VAR_2, "config path: '%s' -> '%s'\n", VAR_3, VAR_5 ? VAR_5 : "-");
    return VAR_5;
}
