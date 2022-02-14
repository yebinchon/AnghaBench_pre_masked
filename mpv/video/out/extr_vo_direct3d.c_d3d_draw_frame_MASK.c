
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {float member_2; float** t; int member_1; int member_0; } ;
typedef TYPE_3__ vertex_video ;
typedef int uint32_t ;
struct TYPE_15__ {int _11; } ;
struct TYPE_18__ {int bottom; int right; int top; int left; } ;
struct TYPE_17__ {int plane_count; int use_shaders; int vo; int d3d_backbuf; int d3d_surface; int d3d_device; TYPE_2__ d3d_colormatrix; int ** pixel_shaders; TYPE_1__* planes; scalar_t__ use_textures; TYPE_5__ fs_panscan_rect; TYPE_5__ fs_movie_rect; int have_image; } ;
typedef TYPE_4__ d3d_priv ;
typedef int ULONG ;
struct TYPE_19__ {float tex_w; float tex_h; } ;
struct TYPE_14__ {int shift_x; int shift_y; TYPE_7__ texture; } ;
typedef TYPE_5__ RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ,TYPE_5__*,int ,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_4__*) ;
 int * FUNC_10 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static uint32_t FUNC_12(d3d_priv *VAR_6)
{
    int VAR_7;

    if (!VAR_6->d3d_device)
        return VAR_5;

    if (!FUNC_9(VAR_6))
        return VAR_4;

    FUNC_1(VAR_6->d3d_device, 0, ((void*)0), VAR_0, 0, 0, 0);

    if (!VAR_6->have_image)
        goto render_osd;

    RECT VAR_8 = VAR_6->fs_movie_rect;
    RECT VAR_9 = VAR_6->fs_panscan_rect;

    if (VAR_6->use_textures) {

        for (VAR_7 = 0; VAR_7 < VAR_6->plane_count; VAR_7++) {
            FUNC_6(VAR_6->d3d_device, VAR_7,
                FUNC_10(VAR_6, &VAR_6->planes[VAR_7].texture));
        }

        vertex_video VAR_10[] = {
            { VAR_8.left, VAR_8.top, 0.0f},
            { VAR_8.right, VAR_8.top, 0.0f},
            { VAR_8.left, VAR_8.bottom, 0.0f},
            { VAR_8.right, VAR_8.bottom, 0.0f}
        };

        float VAR_11[4][2] = {
            { VAR_9.left, VAR_9.top},
            { VAR_9.right, VAR_9.top},
            { VAR_9.left, VAR_9.bottom},
            { VAR_9.right, VAR_9.bottom}
        };

        for (VAR_7 = 0; VAR_7 < VAR_6->plane_count; VAR_7++) {
            float VAR_12 = (1.0f / (1 << VAR_6->planes[VAR_7].shift_x))
                        / VAR_6->planes[VAR_7].texture.tex_w;
            float VAR_13 = (1.0f / (1 << VAR_6->planes[VAR_7].shift_y))
                        / VAR_6->planes[VAR_7].texture.tex_h;
            for (int VAR_14 = 0; VAR_14 < 4; VAR_14++) {
                VAR_10[VAR_14].t[VAR_7][0] = VAR_11[VAR_14][0] * VAR_12;
                VAR_10[VAR_14].t[VAR_7][1] = VAR_11[VAR_14][1] * VAR_13;
            }
        }

        if (VAR_6->use_shaders) {
            FUNC_4(VAR_6->d3d_device,
                                    VAR_6->pixel_shaders[VAR_6->use_shaders]);
            FUNC_5(VAR_6->d3d_device, 0,
                                                     &VAR_6->d3d_colormatrix._11,
                                                     4);
        }

        FUNC_3(VAR_6->d3d_device, VAR_1);
        FUNC_2(VAR_6->d3d_device, VAR_2,
                                         2, &VAR_10[0], sizeof(vertex_video));

        FUNC_4(VAR_6->d3d_device, ((void*)0));

        for (VAR_7 = 0; VAR_7 < VAR_6->plane_count; VAR_7++) {
            FUNC_6(VAR_6->d3d_device, VAR_7, ((void*)0));
        }

    } else {
        VAR_9.left &= ~(ULONG)1;
        VAR_9.top &= ~(ULONG)1;
        VAR_9.right &= ~(ULONG)1;
        VAR_9.bottom &= ~(ULONG)1;
        if (FUNC_0(FUNC_7(VAR_6->d3d_device,
                                                VAR_6->d3d_surface,
                                                &VAR_9,
                                                VAR_6->d3d_backbuf,
                                                &VAR_8,
                                                VAR_3))) {
            FUNC_8(VAR_6, "Copying frame to the backbuffer failed.\n");
            return VAR_4;
        }
    }

render_osd:

    FUNC_11(VAR_6->vo);

    return VAR_5;
}
