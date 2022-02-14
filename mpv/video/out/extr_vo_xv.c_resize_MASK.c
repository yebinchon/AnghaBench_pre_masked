
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvctx {int src_rect; int dst_rect; } ;
struct vo {int want_redraw; int input_ctx; struct xvctx* priv; } ;
struct mp_osd_res {int dummy; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*,int *,int *,struct mp_osd_res*) ;
 int FUNC_3 (struct vo*,int *) ;
 int FUNC_4 (struct vo*,int *) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_0)
{
    struct xvctx *VAR_1 = VAR_0->priv;



    struct mp_osd_res VAR_2;

    FUNC_2(VAR_0, &VAR_1->src_rect, &VAR_1->dst_rect, &VAR_2);

    FUNC_3(VAR_0, &VAR_1->dst_rect);
    FUNC_4(VAR_0, &VAR_1->dst_rect);
    FUNC_1(VAR_0);

    FUNC_0(VAR_0->input_ctx, &VAR_1->dst_rect, &VAR_1->src_rect);

    VAR_0->want_redraw = 1;
}
