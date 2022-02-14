
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int render_src; int src_linear; int initial_data; struct ra_format const* format; int d; int h; int w; } ;
struct ra_format {int dummy; } ;
struct lut3d {int * size; int data; } ;
struct TYPE_7__ {TYPE_1__* mpi; } ;
struct gl_video {int use_lut_3d; int * lut_3d_size; TYPE_3__* ra; int lut_3d_texture; int cms; TYPE_2__ image; } ;
struct AVBufferRef {int dummy; } ;
typedef enum mp_csp_trc { ____Placeholder_mp_csp_trc } mp_csp_trc ;
typedef enum mp_csp_prim { ____Placeholder_mp_csp_prim } mp_csp_prim ;
struct TYPE_8__ {int caps; } ;
struct TYPE_6__ {struct AVBufferRef* icc_profile; } ;


 int FUNC_0 (struct gl_video*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct gl_video*,char*) ;
 int FUNC_2 (int ,struct lut3d**,int,int,struct AVBufferRef*) ;
 int FUNC_3 (int ,int,int,struct AVBufferRef*) ;
 struct ra_format* FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,struct ra_tex_params*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (struct lut3d*) ;

__attribute__((used)) static bool FUNC_8(struct gl_video *VAR_1, enum mp_csp_prim VAR_2,
                               enum mp_csp_trc VAR_3)
{
    if (!VAR_1->use_lut_3d)
        return 0;

    struct AVBufferRef *VAR_4 = ((void*)0);
    if (VAR_1->image.mpi)
        VAR_4 = VAR_1->image.mpi->icc_profile;

    if (VAR_1->lut_3d_texture && !FUNC_3(VAR_1->cms, VAR_2, VAR_3, VAR_4))
        return 1;



    const struct ra_format *VAR_5 = FUNC_4(VAR_1->ra, 2, 4);
    if (!VAR_5 || !(VAR_1->ra->caps & VAR_0)) {
        VAR_1->use_lut_3d = 0;
        FUNC_0(VAR_1, "Disabling color management (no RGBA16 3D textures).\n");
        return 0;
    }

    struct lut3d *VAR_6 = ((void*)0);
    if (!VAR_5 || !FUNC_2(VAR_1->cms, &VAR_6, VAR_2, VAR_3, VAR_4) || !VAR_6) {
        VAR_1->use_lut_3d = 0;
        return 0;
    }

    FUNC_6(VAR_1->ra, &VAR_1->lut_3d_texture);

    struct ra_tex_params VAR_7 = {
        .dimensions = 3,
        .w = VAR_6->size[0],
        .h = VAR_6->size[1],
        .d = VAR_6->size[2],
        .format = VAR_5,
        .render_src = 1,
        .src_linear = 1,
        .initial_data = VAR_6->data,
    };
    VAR_1->lut_3d_texture = FUNC_5(VAR_1->ra, &VAR_7);

    FUNC_1(VAR_1, "after 3d lut creation");

    for (int VAR_8 = 0; VAR_8 < 3; VAR_8++)
        VAR_1->lut_3d_size[VAR_8] = VAR_6->size[VAR_8];

    FUNC_7(VAR_6);

    return 1;
}
