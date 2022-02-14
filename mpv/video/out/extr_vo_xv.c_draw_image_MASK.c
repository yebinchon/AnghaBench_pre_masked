
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xvctx {TYPE_1__* original_image; int current_buf; scalar_t__ num_buffers; } ;
struct vo {int osd; int params; struct xvctx* priv; } ;
struct mp_osd_res {int dummy; } ;
struct mp_image {int h; int w; } ;
struct TYPE_5__ {int pts; } ;
typedef TYPE_1__ mp_image_t ;


 struct mp_image FUNC_0 (struct vo*,int ) ;
 int FUNC_1 (struct mp_image*,int ,int ,int ,int ) ;
 int FUNC_2 (struct mp_image*,TYPE_1__*) ;
 int FUNC_3 (int ,struct mp_osd_res,int ,int ,struct mp_image*) ;
 struct mp_osd_res FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct vo*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct vo *VAR_0, mp_image_t *VAR_1)
{
    struct xvctx *VAR_2 = VAR_0->priv;

    FUNC_6(VAR_0, VAR_2->num_buffers - 1);

    struct mp_image VAR_3 = FUNC_0(VAR_0, VAR_2->current_buf);
    if (VAR_1) {
        FUNC_2(&VAR_3, VAR_1);
    } else {
        FUNC_1(&VAR_3, 0, 0, VAR_3.w, VAR_3.h);
    }

    struct mp_osd_res VAR_4 = FUNC_4(VAR_0->params);
    FUNC_3(VAR_0->osd, VAR_4, VAR_1 ? VAR_1->pts : 0, 0, &VAR_3);

    if (VAR_1 != VAR_2->original_image) {
        FUNC_5(VAR_2->original_image);
        VAR_2->original_image = VAR_1;
    }
}
