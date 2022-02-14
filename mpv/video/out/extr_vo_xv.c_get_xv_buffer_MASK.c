
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xvctx {scalar_t__ xv_format; scalar_t__ cached_csp; int image_format; int image_height; int image_width; TYPE_2__** xvimage; } ;
struct vo {struct mp_image_params* params; struct xvctx* priv; } ;
struct TYPE_3__ {scalar_t__ space; } ;
struct mp_image_params {TYPE_1__ color; } ;
struct mp_image {int num_planes; int * stride; scalar_t__* planes; int member_0; } ;
struct TYPE_4__ {int * pitches; scalar_t__* offsets; scalar_t__ data; } ;
typedef TYPE_2__ XvImage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mp_image*,struct mp_image_params*) ;
 int FUNC_1 (struct mp_image*,int ,int ) ;
 int FUNC_2 (struct mp_image*,int ) ;

__attribute__((used)) static struct mp_image FUNC_3(struct vo *VAR_1, int VAR_2)
{
    struct xvctx *VAR_3 = VAR_1->priv;
    XvImage *VAR_4 = VAR_3->xvimage[VAR_2];

    struct mp_image VAR_5 = {0};
    FUNC_1(&VAR_5, VAR_3->image_width, VAR_3->image_height);
    FUNC_2(&VAR_5, VAR_3->image_format);

    bool VAR_6 = VAR_3->xv_format == VAR_0;
    for (int VAR_7 = 0; VAR_7 < VAR_5.num_planes; VAR_7++) {
        int VAR_8 = VAR_7 > 0 && VAR_6 ? (VAR_7 == 1 ? 2 : 1) : VAR_7;
        VAR_5.planes[VAR_7] = VAR_4->data + VAR_4->offsets[VAR_8];
        VAR_5.stride[VAR_7] = VAR_4->pitches[VAR_8];
    }

    if (VAR_1->params) {
        struct mp_image_params VAR_9 = *VAR_1->params;
        if (VAR_3->cached_csp)
            VAR_9.color.space = VAR_3->cached_csp;
        FUNC_0(&VAR_5, &VAR_9);
    }

    return VAR_5;
}
