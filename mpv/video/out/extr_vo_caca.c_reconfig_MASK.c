
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int image_format; int image_width; int image_height; } ;
struct mp_image_params {int imgfmt; int w; int h; } ;


 int FUNC_0 (struct vo*) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0, struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    VAR_2->image_height = VAR_1->h;
    VAR_2->image_width = VAR_1->w;
    VAR_2->image_format = VAR_1->imgfmt;

    return FUNC_0(VAR_0);
}
