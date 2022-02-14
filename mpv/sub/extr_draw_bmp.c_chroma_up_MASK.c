
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int color; } ;
struct TYPE_3__ {int flags; } ;
struct mp_image {int imgfmt; int w; int h; int * stride; int * planes; TYPE_2__ params; TYPE_1__ fmt; } ;
struct mp_draw_sub_cache {struct mp_image upsample_temp; struct mp_image* upsample_img; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct mp_image* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct mp_image*,int,int) ;
 int FUNC_3 (struct mp_image*,int ) ;
 int FUNC_4 (struct mp_image*,struct mp_image*,int ) ;
 int FUNC_5 (struct mp_image*) ;
 int FUNC_6 (struct mp_draw_sub_cache*,struct mp_image*) ;

__attribute__((used)) static struct mp_image *FUNC_7(struct mp_draw_sub_cache *VAR_5, int VAR_6,
                                  struct mp_image *VAR_7)
{
    if (VAR_7->imgfmt == VAR_6)
        return VAR_7;

    if (!VAR_5->upsample_img || VAR_5->upsample_img->imgfmt != VAR_6 ||
        VAR_5->upsample_img->w < VAR_7->w || VAR_5->upsample_img->h < VAR_7->h)
    {
        FUNC_5(VAR_5->upsample_img);
        VAR_5->upsample_img = FUNC_1(VAR_6, VAR_7->w, VAR_7->h);
        FUNC_6(VAR_5, VAR_5->upsample_img);
        if (!VAR_5->upsample_img)
            return ((void*)0);
    }

    VAR_5->upsample_temp = *VAR_5->upsample_img;
    struct mp_image *VAR_8 = &VAR_5->upsample_temp;
    FUNC_2(VAR_8, VAR_7->w, VAR_7->h);



    if (VAR_7->fmt.flags & VAR_3)
        VAR_8->params.color = VAR_7->params.color;

    if (VAR_7->imgfmt == VAR_0) {
        FUNC_0(VAR_6 == VAR_1);


        struct mp_image VAR_9 = *VAR_8;
        FUNC_3(&VAR_9, VAR_2);
        FUNC_2(&VAR_9, VAR_8->w, VAR_8->h);
        struct mp_image VAR_10 = VAR_9;
        FUNC_2(&VAR_10, VAR_7->w >> 1, VAR_7->h >> 1);
        for (int VAR_11 = 0; VAR_11 < 2; VAR_11++) {
            VAR_9.planes[0] = VAR_8->planes[1 + VAR_11];
            VAR_9.stride[0] = VAR_8->stride[1 + VAR_11];
            VAR_10.planes[0] = VAR_7->planes[1 + VAR_11];
            VAR_10.stride[0] = VAR_7->stride[1 + VAR_11];
            FUNC_4(&VAR_9, &VAR_10, VAR_4);
        }
        VAR_8->planes[0] = VAR_7->planes[0];
        VAR_8->stride[0] = VAR_7->stride[0];
    } else {
        FUNC_4(VAR_8, VAR_7, VAR_4);
    }

    return VAR_8;
}
