
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
typedef int ASS_Library ;


 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,struct mp_log*) ;
 int VAR_0 ;
 char* FUNC_4 (int *,struct mpv_global*,char*) ;
 int FUNC_5 (char*) ;

ASS_Library *FUNC_6(struct mpv_global *VAR_1, struct mp_log *VAR_2)
{
    char *VAR_3 = FUNC_4(((void*)0), VAR_1, "fonts");
    ASS_Library *VAR_4 = FUNC_1();
    if (!VAR_4)
        FUNC_0();
    FUNC_3(VAR_4, VAR_0, VAR_2);
    if (VAR_3)
        FUNC_2(VAR_4, VAR_3);
    FUNC_5(VAR_3);
    return VAR_4;
}
