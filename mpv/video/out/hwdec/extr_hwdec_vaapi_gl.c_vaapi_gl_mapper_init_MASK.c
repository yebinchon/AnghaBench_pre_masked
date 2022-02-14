
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vaapi_gl_mapper_priv {int * gl_textures; void* EGLImageTargetTexture2DOES; void* DestroyImageKHR; void* CreateImageKHR; } ;
struct ra_tex_params {int dimensions; int d; int render_src; int src_linear; TYPE_1__* format; int h; int w; } ;
struct ra_imgfmt_desc {int num_planes; TYPE_1__** planes; } ;
struct ra_hwdec_mapper {int ra; struct priv* priv; } ;
struct priv {int * tex; int layout; struct vaapi_gl_mapper_priv* interop_mapper_priv; } ;
struct TYPE_5__ {int (* BindTexture ) (int ,int ) ;int (* TexParameteri ) (int ,int ,int ) ;int (* GenTextures ) (int,int *) ;} ;
struct TYPE_4__ {scalar_t__ ctype; } ;
typedef TYPE_2__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 struct vaapi_gl_mapper_priv* VAR_8 ;
 int FUNC_3 (int ,struct ra_tex_params*,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 struct vaapi_gl_mapper_priv* FUNC_12 (int *,int ) ;

__attribute__((used)) static bool FUNC_13(struct ra_hwdec_mapper *VAR_9,
                                 const struct ra_imgfmt_desc *VAR_10)
{
    struct priv *VAR_11 = VAR_9->priv;
    struct vaapi_gl_mapper_priv *VAR_12 = FUNC_12(((void*)0), VAR_12);
    VAR_11->interop_mapper_priv = VAR_12;


    VAR_12->CreateImageKHR = (void *)FUNC_0("eglCreateImageKHR");
    VAR_12->DestroyImageKHR = (void *)FUNC_0("eglDestroyImageKHR");

    VAR_12->EGLImageTargetTexture2DOES =
        (void *)FUNC_0("glEGLImageTargetTexture2DOES");

    if (!VAR_12->CreateImageKHR || !VAR_12->DestroyImageKHR ||
        !VAR_12->EGLImageTargetTexture2DOES)
        return 0;

    GL *VAR_13 = FUNC_4(VAR_9->ra);
    VAR_13->GenTextures(4, VAR_12->gl_textures);
    for (int VAR_14 = 0; VAR_14 < VAR_10->num_planes; VAR_14++) {
        VAR_13->BindTexture(VAR_2, VAR_12->gl_textures[VAR_14]);
        VAR_13->TexParameteri(VAR_2, VAR_4, VAR_1);
        VAR_13->TexParameteri(VAR_2, VAR_3, VAR_1);
        VAR_13->TexParameteri(VAR_2, VAR_5, VAR_0);
        VAR_13->TexParameteri(VAR_2, VAR_6, VAR_0);
        VAR_13->BindTexture(VAR_2, 0);

        struct ra_tex_params VAR_15 = {
            .dimensions = 2,
            .w = FUNC_2(&VAR_11->layout, VAR_14),
            .h = FUNC_1(&VAR_11->layout, VAR_14),
            .d = 1,
            .format = VAR_10->planes[VAR_14],
            .render_src = 1,
            .src_linear = 1,
        };

        if (VAR_15.format->ctype != VAR_7)
            return 0;

        VAR_11->tex[VAR_14] = FUNC_3(VAR_9->ra, &VAR_15,
                                                 VAR_12->gl_textures[VAR_14]);
        if (!VAR_11->tex[VAR_14])
            return 0;
    }

    return 1;
}
