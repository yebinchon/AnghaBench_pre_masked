
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_swapchain {struct priv* priv; } ;
struct priv {scalar_t__ main_fb; int wrapped_fb; TYPE_1__* gl; } ;
struct TYPE_2__ {int es; int mpgl_caps; int (* BindFramebuffer ) (int ,scalar_t__) ;int (* GetFramebufferAttachmentParameteriv ) (int ,int ,int ,int*) ;scalar_t__ version; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct ra_swapchain *VAR_6)
{
    struct priv *VAR_7 = VAR_6->priv;
    GL *VAR_8 = VAR_7->gl;

    if (!VAR_7->wrapped_fb)
        return 0;

    if ((VAR_8->es < 300 && !VAR_8->version) || !(VAR_8->mpgl_caps & VAR_5))
        return 0;

    VAR_8->BindFramebuffer(VAR_3, VAR_7->main_fb);

    GLenum VAR_9 = VAR_8->version ? VAR_1 : VAR_0;
    if (VAR_7->main_fb)
        VAR_9 = VAR_2;

    GLint VAR_10 = 0;

    VAR_8->GetFramebufferAttachmentParameteriv(VAR_3, VAR_9,
                            VAR_4, &VAR_10);

    VAR_8->BindFramebuffer(VAR_3, 0);

    return VAR_10;
}
