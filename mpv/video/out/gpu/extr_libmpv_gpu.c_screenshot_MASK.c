
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voctrl_screenshot {int dummy; } ;
struct vo_frame {int dummy; } ;
struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;


 int FUNC_0 (int ,struct vo_frame*,struct voctrl_screenshot*) ;

__attribute__((used)) static void FUNC_1(struct render_backend *VAR_0, struct vo_frame *VAR_1,
                       struct voctrl_screenshot *VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;

    FUNC_0(VAR_3->renderer, VAR_1, VAR_2);
}
