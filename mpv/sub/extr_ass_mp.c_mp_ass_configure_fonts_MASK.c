
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_style_opts {int font_provider; int font; } ;
struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
typedef int ASS_Renderer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int,char*,int) ;
 char* FUNC_1 (void*,struct mpv_global*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mp_log*,char*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int *) ;

void FUNC_6(ASS_Renderer *VAR_3, struct osd_style_opts *VAR_4,
                            struct mpv_global *VAR_5, struct mp_log *VAR_6)
{
    void *VAR_7 = FUNC_5(((void*)0));
    char *VAR_8 = FUNC_1(VAR_7, VAR_5, "subfont.ttf");
    char *VAR_9 = FUNC_1(VAR_7, VAR_5, "fonts.conf");

    if (VAR_8 && !FUNC_2(VAR_8))
        VAR_8 = ((void*)0);

    int VAR_10 = VAR_0;
    if (VAR_4->font_provider == 1)
        VAR_10 = VAR_2;
    if (VAR_4->font_provider == 2)
        VAR_10 = VAR_1;

    FUNC_3(VAR_6, "Setting up fonts...\n");
    FUNC_0(VAR_3, VAR_8, VAR_4->font, VAR_10, VAR_9, 1);
    FUNC_3(VAR_6, "Done.\n");

    FUNC_4(VAR_7);
}
