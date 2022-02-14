
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dwidth; int dheight; int want_redraw; struct priv* priv; } ;
struct priv {int renderer; int osd_res; int dst_rect; int src_rect; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct vo*,int *,int *,int *) ;
 int FUNC_2 (struct vo*) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_0, int VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;
    VAR_0->dwidth = VAR_1;
    VAR_0->dheight = VAR_2;
    FUNC_1(VAR_0, &VAR_3->src_rect, &VAR_3->dst_rect,
                         &VAR_3->osd_res);
    FUNC_0(VAR_3->renderer, VAR_1, VAR_2);
    VAR_0->want_redraw = 1;
    FUNC_2(VAR_0);
}
