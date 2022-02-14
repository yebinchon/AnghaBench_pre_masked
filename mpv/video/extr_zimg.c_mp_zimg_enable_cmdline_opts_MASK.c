
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_zimg_context {scalar_t__ opts_cache; } ;


 int FUNC_0 (struct mp_zimg_context*) ;
 scalar_t__ FUNC_1 (struct mp_zimg_context*,struct mpv_global*,int *) ;
 int FUNC_2 (struct mp_zimg_context*) ;
 int VAR_0 ;

void FUNC_3(struct mp_zimg_context *VAR_1,
                                 struct mpv_global *VAR_2)
{
    if (VAR_1->opts_cache)
        return;

    VAR_1->opts_cache = FUNC_1(VAR_1, VAR_2, &VAR_0);
    FUNC_0(VAR_1);
    FUNC_2(VAR_1);
}
