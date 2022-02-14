
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_tex_gl {int fbo; } ;
struct TYPE_4__ {int render_dst; } ;
struct ra_tex {struct ra_tex_gl* priv; TYPE_1__ params; } ;
struct ra {int dummy; } ;
struct mp_rect {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_5__ {int (* BindFramebuffer ) (int ,int ) ;int (* Disable ) (int ) ;int (* Clear ) (int ) ;int (* ClearColor ) (float,float,float,float) ;int (* Enable ) (int ) ;int (* Scissor ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;} ;
typedef TYPE_2__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct ra*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float,float,float,float) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct ra *VAR_3, struct ra_tex *VAR_4, float VAR_5[4],
                     struct mp_rect *VAR_6)
{
    GL *VAR_7 = FUNC_1(VAR_3);

    FUNC_0(VAR_4->params.render_dst);
    struct ra_tex_gl *VAR_8 = VAR_4->priv;

    VAR_7->BindFramebuffer(VAR_1, VAR_8->fbo);

    VAR_7->Scissor(VAR_6->x0, VAR_6->y0,
                VAR_6->x1 - VAR_6->x0,
                VAR_6->y1 - VAR_6->y0);

    VAR_7->Enable(VAR_2);
    VAR_7->ClearColor(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
    VAR_7->Clear(VAR_0);
    VAR_7->Disable(VAR_2);

    VAR_7->BindFramebuffer(VAR_1, 0);
}
