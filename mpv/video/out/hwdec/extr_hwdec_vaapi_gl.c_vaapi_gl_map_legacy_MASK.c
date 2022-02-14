
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vaapi_gl_mapper_priv {int * images; int (* EGLImageTargetTexture2DOES ) (int ,int ) ;int * gl_textures; int (* CreateImageKHR ) (int ,int ,int ,int *,int*) ;} ;
struct ra_hwdec_mapper {TYPE_2__** tex; int ra; struct priv* priv; } ;
struct ra_format {int num_components; int* component_size; } ;
struct TYPE_10__ {int* offsets; int* pitches; } ;
struct priv {int num_planes; TYPE_2__** tex; TYPE_3__ current_image; struct vaapi_gl_mapper_priv* interop_mapper_priv; } ;
typedef TYPE_3__ VAImage ;
struct TYPE_11__ {int handle; } ;
typedef TYPE_4__ VABufferInfo ;
struct TYPE_12__ {int (* BindTexture ) (int ,int ) ;} ;
struct TYPE_8__ {int w; int h; struct ra_format* format; } ;
struct TYPE_9__ {TYPE_1__ params; } ;
typedef TYPE_5__ GL ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct ra_hwdec_mapper *VAR_10,
                                const VABufferInfo *VAR_11,
                                const int *VAR_12) {
    struct priv *VAR_13 = VAR_10->priv;
    struct vaapi_gl_mapper_priv *VAR_14 = VAR_13->interop_mapper_priv;

    GL *VAR_15 = FUNC_2(VAR_10->ra);

    VAImage *VAR_16 = &VAR_13->current_image;

    for (int VAR_17 = 0; VAR_17 < VAR_13->num_planes; VAR_17++) {
        int VAR_18[20] = {VAR_6};
        int VAR_19 = 0;

        const struct ra_format *VAR_20 = VAR_13->tex[VAR_17]->params.format;
        int VAR_21 = VAR_20->num_components;
        int VAR_22 = VAR_20->component_size[VAR_17] / 8;
        if (VAR_21 < 1 || VAR_21 > 3 || VAR_22 < 1 || VAR_22 > 2)
            return 0;
        int VAR_23 = VAR_12[VAR_21 - 1 + (VAR_22 - 1) * 4];
        if (!VAR_23)
            return 0;

        FUNC_0(VAR_5, VAR_23);
        FUNC_0(VAR_8, VAR_13->tex[VAR_17]->params.w);
        FUNC_0(VAR_3, VAR_13->tex[VAR_17]->params.h);
        FUNC_0(VAR_0, VAR_11->handle);
        FUNC_0(VAR_1, VAR_16->offsets[VAR_17]);
        FUNC_0(VAR_2, VAR_16->pitches[VAR_17]);

        VAR_14->images[VAR_17] = VAR_14->CreateImageKHR(FUNC_1(),
            VAR_7, VAR_4, ((void*)0), VAR_18);
        if (!VAR_14->images[VAR_17])
            return 0;

        VAR_15->BindTexture(VAR_9, VAR_14->gl_textures[VAR_17]);
        VAR_14->EGLImageTargetTexture2DOES(VAR_9, VAR_14->images[VAR_17]);

        VAR_10->tex[VAR_17] = VAR_13->tex[VAR_17];
    }
    VAR_15->BindTexture(VAR_9, 0);

    return 1;
}
