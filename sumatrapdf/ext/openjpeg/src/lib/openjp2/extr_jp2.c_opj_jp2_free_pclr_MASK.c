
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* jp2_pclr; } ;
typedef TYPE_1__ opj_jp2_color_t ;
struct TYPE_5__ {struct TYPE_5__* cmap; struct TYPE_5__* entries; struct TYPE_5__* channel_size; struct TYPE_5__* channel_sign; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(opj_jp2_color_t *VAR_0)
{
    FUNC_0(VAR_0->jp2_pclr->channel_sign);
    FUNC_0(VAR_0->jp2_pclr->channel_size);
    FUNC_0(VAR_0->jp2_pclr->entries);

    if (VAR_0->jp2_pclr->cmap) {
        FUNC_0(VAR_0->jp2_pclr->cmap);
    }

    FUNC_0(VAR_0->jp2_pclr);
    VAR_0->jp2_pclr = ((void*)0);
}
