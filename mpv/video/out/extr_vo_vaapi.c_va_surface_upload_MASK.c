
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int image_id; } ;
struct va_surface {scalar_t__ is_derived; int ctx; TYPE_1__ image; int id; int display; } ;
struct priv {int dummy; } ;
struct mp_image {scalar_t__ w; scalar_t__ h; int imgfmt; } ;
typedef int VAStatus ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mp_image*,struct mp_image*) ;
 int FUNC_3 (struct mp_image*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,TYPE_1__*,struct mp_image*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct priv*,struct mp_image*,int ) ;
 int FUNC_8 (struct va_surface*) ;
 struct va_surface* FUNC_9 (struct mp_image*) ;

__attribute__((used)) static int FUNC_10(struct priv *VAR_0, struct mp_image *VAR_1,
                             struct mp_image *VAR_2)
{
    struct va_surface *VAR_3 = FUNC_9(VAR_1);
    if (!VAR_3)
        return -1;

    if (FUNC_7(VAR_0, VAR_1, VAR_2->imgfmt) < 0)
        return -1;

    struct mp_image VAR_4;
    if (!FUNC_5(VAR_3->ctx, &VAR_3->image, &VAR_4))
        return -1;
    FUNC_1(VAR_2->w <= VAR_4.w && VAR_2->h <= VAR_4.h);
    FUNC_3(&VAR_4, VAR_2->w, VAR_2->h);
    FUNC_2(&VAR_4, VAR_2);
    FUNC_6(VAR_3->ctx, &VAR_3->image);

    if (!VAR_3->is_derived) {
        VAStatus VAR_5 = FUNC_4(VAR_3->display, VAR_3->id,
                                     VAR_3->image.image_id,
                                     0, 0, VAR_2->w, VAR_2->h,
                                     0, 0, VAR_2->w, VAR_2->h);
        if (!FUNC_0(VAR_3->ctx, "vaPutImage()"))
            return -1;
    }

    if (VAR_3->is_derived)
        FUNC_8(VAR_3);
    return 0;
}
