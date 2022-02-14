
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_tex_gl {int fbo; } ;
struct TYPE_4__ {int blit_dst; int blit_src; } ;
struct ra_tex {struct ra_tex_gl* priv; TYPE_1__ params; } ;
struct ra {int dummy; } ;
struct mp_rect {int y1; int x1; int y0; int x0; } ;
struct TYPE_5__ {int (* BindFramebuffer ) (int ,int ) ;int (* BlitFramebuffer ) (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct ra*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ra *VAR_4, struct ra_tex *VAR_5, struct ra_tex *VAR_6,
                    struct mp_rect *VAR_7, struct mp_rect *VAR_8)
{
    GL *VAR_9 = FUNC_1(VAR_4);

    FUNC_0(VAR_6->params.blit_src);
    FUNC_0(VAR_5->params.blit_dst);

    struct ra_tex_gl *VAR_10 = VAR_6->priv;
    struct ra_tex_gl *VAR_11 = VAR_5->priv;

    VAR_9->BindFramebuffer(VAR_3, VAR_10->fbo);
    VAR_9->BindFramebuffer(VAR_1, VAR_11->fbo);
    VAR_9->BlitFramebuffer(VAR_8->x0, VAR_8->y0, VAR_8->x1, VAR_8->y1,
                        VAR_7->x0, VAR_7->y0, VAR_7->x1, VAR_7->y1,
                        VAR_0, VAR_2);
    VAR_9->BindFramebuffer(VAR_3, 0);
    VAR_9->BindFramebuffer(VAR_1, 0);
}
