
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tex_h; int tex_w; int h; int w; int system; } ;
struct texplane {int shift_x; int shift_y; TYPE_3__ texture; int bits_per_pixel; int d3d_format; } ;
struct TYPE_8__ {scalar_t__ image_format; int plane_count; int src_width; int src_height; int d3d_surface; int movie_src_fmt; int d3d_device; struct texplane* planes; scalar_t__ use_textures; } ;
typedef TYPE_1__ d3d_priv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int ,int,int) ;

__attribute__((used)) static bool FUNC_7(d3d_priv *VAR_1)
{
    int VAR_2;
    bool VAR_3 = 0;

    FUNC_4(VAR_1->image_format != 0);

    if (VAR_1->use_textures) {
        for (VAR_2 = 0; VAR_2 < VAR_1->plane_count; VAR_2++) {
            struct texplane *VAR_4 = &VAR_1->planes[VAR_2];

            if (!VAR_4->texture.system) {
                if (!FUNC_6(VAR_1,
                                     &VAR_4->texture,
                                     VAR_4->d3d_format,
                                     VAR_1->src_width >> VAR_4->shift_x,
                                     VAR_1->src_height >> VAR_4->shift_y))
                {
                    FUNC_2(VAR_1, "Allocating plane %d"
                           " failed.\n", VAR_2);
                    return 0;
                }

                FUNC_3(VAR_1, "Allocated plane %d:"
                       " %d bit, shift=%d/%d size=%d/%d (%d/%d).\n", VAR_2,
                       VAR_4->bits_per_pixel,
                       VAR_4->shift_x, VAR_4->shift_y,
                       VAR_4->texture.w, VAR_4->texture.h,
                       VAR_4->texture.tex_w, VAR_4->texture.tex_h);

                VAR_3 = 1;
            }
        }

        if (VAR_3)
            FUNC_5(VAR_1);

    } else {

        if (!VAR_1->d3d_surface &&
            FUNC_0(FUNC_1(
                VAR_1->d3d_device, VAR_1->src_width, VAR_1->src_height,
                VAR_1->movie_src_fmt, VAR_0, &VAR_1->d3d_surface, ((void*)0))))
        {
            FUNC_2(VAR_1, "Allocating offscreen surface failed.\n");
            return 0;
        }
    }

    return 1;
}
