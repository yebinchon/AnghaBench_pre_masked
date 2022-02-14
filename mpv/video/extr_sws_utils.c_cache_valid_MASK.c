
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_sws_context {scalar_t__ flags; scalar_t__ brightness; scalar_t__ contrast; scalar_t__ saturation; scalar_t__ allow_zimg; int opts_cache; int dst; int src; scalar_t__ force_reload; struct mp_sws_context* cached; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct mp_sws_context *VAR_0)
{
    struct mp_sws_context *VAR_1 = VAR_0->cached;
    if (VAR_0->force_reload)
        return 0;
    return FUNC_1(&VAR_0->src, &VAR_1->src) &&
           FUNC_1(&VAR_0->dst, &VAR_1->dst) &&
           VAR_0->flags == VAR_1->flags &&
           VAR_0->brightness == VAR_1->brightness &&
           VAR_0->contrast == VAR_1->contrast &&
           VAR_0->saturation == VAR_1->saturation &&
           VAR_0->allow_zimg == VAR_1->allow_zimg &&
           (!VAR_0->opts_cache || !FUNC_0(VAR_0->opts_cache));
}
