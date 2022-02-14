
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;
struct mp_image_params {int dummy; } ;


 int FUNC_0 (int ,struct mp_image_params*) ;

__attribute__((used)) static void FUNC_1(struct render_backend *VAR_0, struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    FUNC_0(VAR_2->renderer, VAR_1);
}
