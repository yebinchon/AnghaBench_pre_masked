
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {TYPE_1__* vo; int screen_osd_res; int dst_rect; int src_rect; } ;
struct TYPE_2__ {int want_redraw; } ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0)
{
    FUNC_0(VAR_0->vo, &VAR_0->src_rect, &VAR_0->dst_rect, &VAR_0->screen_osd_res);




    VAR_0->vo->want_redraw = 1;
}
