
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sws_opts {int zimg; scalar_t__ bitexact; int fast; int scaler; int chr_vshift; int chr_hshift; int chr_sharpen; int lum_sharpen; int chr_gblur; int lum_gblur; } ;
struct mp_sws_context {int force_reload; int allow_zimg; int flags; int src_filter; TYPE_1__* opts_cache; } ;
struct TYPE_2__ {struct sws_opts* opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mp_sws_context *VAR_3)
{
    FUNC_0(VAR_3->opts_cache);
    struct sws_opts *VAR_4 = VAR_3->opts_cache->opts;

    FUNC_1(VAR_3->src_filter);
    VAR_3->src_filter = FUNC_2(VAR_4->lum_gblur, VAR_4->chr_gblur,
                                           VAR_4->lum_sharpen, VAR_4->chr_sharpen,
                                           VAR_4->chr_hshift, VAR_4->chr_vshift, 0);
    VAR_3->force_reload = 1;

    VAR_3->flags = VAR_1;
    VAR_3->flags |= VAR_4->scaler;
    if (!VAR_4->fast)
        VAR_3->flags |= VAR_2;
    if (VAR_4->bitexact)
        VAR_3->flags |= VAR_0;

    VAR_3->allow_zimg = VAR_4->zimg;
}
