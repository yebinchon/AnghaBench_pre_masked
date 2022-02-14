
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int d; int render_src; int src_linear; struct ra_format const* format; int h; int w; } ;
struct ra_hwdec_mapper {int * tex; int ra; struct cuda_mapper_priv* priv; TYPE_1__* owner; } ;
struct ra_format {int linear_filter; } ;
struct ext_gl {int cu_res; } ;
struct cuda_mapper_priv {int * cu_array; int layout; struct ext_gl** ext; } ;
struct cuda_hw_priv {TYPE_2__* cu; } ;
struct TYPE_4__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuGraphicsUnmapResources ) (int,int *,int ) ;int (* cuGraphicsSubResourceGetMappedArray ) (int *,int ,int ,int ) ;int (* cuGraphicsMapResources ) (int,int *,int ) ;int (* cuGraphicsGLRegisterImage ) (int *,int ,int ,int ) ;} ;
struct TYPE_3__ {struct cuda_hw_priv* priv; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef TYPE_2__ CudaFunctions ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ext_gl* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,struct ra_tex_params*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int,int *,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int,int *,int ) ;
 int FUNC_9 (int *) ;
 struct ext_gl* FUNC_10 (int *,int ) ;

__attribute__((used)) static bool FUNC_11(struct ra_hwdec_mapper *VAR_2,
                             const struct ra_format *VAR_3, int VAR_4)
{
    struct cuda_hw_priv *VAR_5 = VAR_2->owner->priv;
    struct cuda_mapper_priv *VAR_6 = VAR_2->priv;
    CudaFunctions *VAR_7 = VAR_5->cu;
    int VAR_8 = 0;
    CUcontext VAR_9;

    struct ext_gl *VAR_10 = FUNC_10(((void*)0), VAR_10);
    VAR_6->ext[VAR_4] = VAR_10;

    struct ra_tex_params VAR_11 = {
        .dimensions = 2,
        .w = FUNC_2(&VAR_6->layout, VAR_4),
        .h = FUNC_1(&VAR_6->layout, VAR_4),
        .d = 1,
        .format = VAR_3,
        .render_src = 1,
        .src_linear = VAR_3->linear_filter,
    };

    VAR_2->tex[VAR_4] = FUNC_4(VAR_2->ra, &VAR_11);
    if (!VAR_2->tex[VAR_4]) {
        goto error;
    }

    GLuint VAR_12;
    GLenum VAR_13;
    FUNC_3(VAR_2->ra, VAR_2->tex[VAR_4], &VAR_12, &VAR_13);

    VAR_8 = FUNC_0(VAR_7->cuGraphicsGLRegisterImage(&VAR_10->cu_res, VAR_12, VAR_13,
                                                 VAR_0));
    if (VAR_8 < 0)
        goto error;

    VAR_8 = FUNC_0(VAR_7->cuGraphicsMapResources(1, &VAR_10->cu_res, 0));
    if (VAR_8 < 0)
        goto error;

    VAR_8 = FUNC_0(VAR_7->cuGraphicsSubResourceGetMappedArray(&VAR_6->cu_array[VAR_4], VAR_10->cu_res,
                                                           0, 0));
    if (VAR_8 < 0)
        goto error;

    VAR_8 = FUNC_0(VAR_7->cuGraphicsUnmapResources(1, &VAR_10->cu_res, 0));
    if (VAR_8 < 0)
        goto error;

    return 1;

error:
    FUNC_0(VAR_7->cuCtxPopCurrent(&VAR_9));
    return 0;
}
