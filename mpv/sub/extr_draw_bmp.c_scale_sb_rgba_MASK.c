
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sub_bitmap {int dh; int dw; int stride; int bitmap; int h; int w; } ;
struct TYPE_2__ {int color; } ;
struct mp_image {TYPE_1__ params; int imgfmt; int * stride; int * planes; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mp_image* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mp_image*,int ,int ) ;
 int FUNC_2 (struct mp_image*,int ) ;
 int FUNC_3 (struct mp_image*,struct mp_image*,int ) ;
 int FUNC_4 (struct mp_image*) ;
 int FUNC_5 (struct mp_image*,struct mp_image*) ;

__attribute__((used)) static void FUNC_6(struct sub_bitmap *VAR_3, const struct mp_image *VAR_4,
                          struct mp_image **VAR_5, struct mp_image **VAR_6)
{
    struct mp_image VAR_7 = {0};
    FUNC_2(&VAR_7, VAR_0);
    FUNC_1(&VAR_7, VAR_3->w, VAR_3->h);
    VAR_7.planes[0] = VAR_3->bitmap;
    VAR_7.stride[0] = VAR_3->stride;
    struct mp_image *VAR_8 = FUNC_0(VAR_0, VAR_3->dw, VAR_3->dh);
    struct mp_image *VAR_9 = FUNC_0(VAR_1, VAR_3->dw, VAR_3->dh);
    struct mp_image *VAR_10 = FUNC_0(VAR_4->imgfmt, VAR_3->dw, VAR_3->dh);
    if (!VAR_8 || !VAR_9 || !VAR_10) {
        FUNC_4(VAR_8);
        FUNC_4(VAR_9);
        FUNC_4(VAR_10);
        return;
    }

    FUNC_3(VAR_8, &VAR_7, VAR_2);
    FUNC_5(VAR_8, VAR_9);

    VAR_10->params.color = VAR_4->params.color;
    FUNC_3(VAR_10, VAR_8, VAR_2);

    FUNC_4(VAR_8);

    *VAR_5 = VAR_10;
    *VAR_6 = VAR_9;
}
