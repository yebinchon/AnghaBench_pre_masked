
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vertex {int dummy; } ;
struct ra_fbo {int tex; } ;
struct mpgl_osd_part {size_t format; scalar_t__ num_vertices; int vertices; } ;
struct TYPE_2__ {int w; int h; } ;
struct mpgl_osd {TYPE_1__ osd_res; int stereo_mode; struct mpgl_osd_part** parts; } ;
struct gl_transform {float* t; float** m; } ;
struct gl_shader_cache {int dummy; } ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;
 int FUNC_1 (struct mpgl_osd_part*,struct gl_transform) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct gl_shader_cache*,int const,int const,int const,int const) ;
 int FUNC_4 (struct gl_shader_cache*,int ,int,int ,int ,int,int ,scalar_t__) ;
 int FUNC_5 (struct gl_transform*,struct ra_fbo) ;
 int VAR_1 ;

void FUNC_6(struct mpgl_osd *VAR_2, int VAR_3,
                          struct gl_shader_cache *VAR_4, struct ra_fbo VAR_5)
{
    struct mpgl_osd_part *VAR_6 = VAR_2->parts[VAR_3];

    int VAR_7[2];
    FUNC_2(VAR_2->stereo_mode, VAR_7);

    VAR_6->num_vertices = 0;

    for (int VAR_8 = 0; VAR_8 < VAR_7[0]; VAR_8++) {
        for (int VAR_9 = 0; VAR_9 < VAR_7[1]; VAR_9++) {
            struct gl_transform VAR_10;
            FUNC_5(&VAR_10, VAR_5);

            float VAR_11 = VAR_2->osd_res.w * VAR_8;
            float VAR_12 = VAR_2->osd_res.h * VAR_9;
            VAR_10.t[0] += VAR_11 * VAR_10.m[0][0] + VAR_12 * VAR_10.m[1][0];
            VAR_10.t[1] += VAR_11 * VAR_10.m[0][1] + VAR_12 * VAR_10.m[1][1];

            FUNC_1(VAR_6, VAR_10);
        }
    }

    const int *VAR_13 = &VAR_0[VAR_6->format][0];
    FUNC_3(VAR_4, VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3]);

    FUNC_4(VAR_4, VAR_5.tex, 0, VAR_1, FUNC_0(VAR_1),
                        sizeof(struct vertex), VAR_6->vertices, VAR_6->num_vertices);
}
