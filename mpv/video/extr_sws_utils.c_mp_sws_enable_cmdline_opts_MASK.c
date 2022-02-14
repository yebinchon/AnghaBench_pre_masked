
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_sws_context {int force_reload; int zimg; scalar_t__ opts_cache; } ;


 scalar_t__ FUNC_0 (struct mp_sws_context*,struct mpv_global*,int *) ;
 int FUNC_1 (struct mp_sws_context*) ;
 int FUNC_2 (int ,struct mpv_global*) ;
 int VAR_0 ;

void FUNC_3(struct mp_sws_context *VAR_1, struct mpv_global *VAR_2)
{
    if (VAR_1->opts_cache)
        return;

    VAR_1->opts_cache = FUNC_0(VAR_1, VAR_2, &VAR_0);
    VAR_1->force_reload = 1;
    FUNC_1(VAR_1);




}
