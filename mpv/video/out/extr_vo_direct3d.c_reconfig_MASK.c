
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vo {TYPE_1__* priv; } ;
struct mp_image_params {scalar_t__ imgfmt; scalar_t__ w; scalar_t__ h; } ;
struct TYPE_5__ {int have_image; scalar_t__ image_format; scalar_t__ src_width; scalar_t__ src_height; struct mp_image_params params; } ;
typedef TYPE_1__ d3d_priv ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_1, struct mp_image_params *VAR_2)
{
    d3d_priv *VAR_3 = VAR_1->priv;

    VAR_3->have_image = 0;

    FUNC_3(VAR_1);

    if ((VAR_3->image_format != VAR_2->imgfmt)
        || (VAR_3->src_width != VAR_2->w)
        || (VAR_3->src_height != VAR_2->h))
    {
        FUNC_0(VAR_3);

        VAR_3->src_width = VAR_2->w;
        VAR_3->src_height = VAR_2->h;
        VAR_3->params = *VAR_2;
        FUNC_1(VAR_3, VAR_2->imgfmt, 1);
    }

    if (!FUNC_2(VAR_3))
        return VAR_0;

    return 0;
}
