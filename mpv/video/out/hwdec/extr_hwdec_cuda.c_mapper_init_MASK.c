
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_imgfmt_desc {int num_planes; int * planes; } ;
struct TYPE_6__ {int hw_subfmt; int imgfmt; } ;
struct ra_hwdec_mapper {int ra; TYPE_3__ dst_params; TYPE_3__ src_params; struct cuda_mapper_priv* priv; TYPE_1__* owner; } ;
struct cuda_mapper_priv {int display_ctx; int layout; } ;
struct cuda_hw_priv {int (* ext_init ) (struct ra_hwdec_mapper*,int ,int) ;int display_ctx; TYPE_2__* cu; } ;
struct TYPE_5__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_4__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_2__ CudaFunctions ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_hwdec_mapper*,char*,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,struct ra_imgfmt_desc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ra_hwdec_mapper*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ra_hwdec_mapper *VAR_0)
{
    struct cuda_hw_priv *VAR_1 = VAR_0->owner->priv;
    struct cuda_mapper_priv *VAR_2 = VAR_0->priv;
    CUcontext VAR_3;
    CudaFunctions *VAR_4 = VAR_1->cu;
    int VAR_5 = 0, VAR_6 = 0;

    VAR_2->display_ctx = VAR_1->display_ctx;

    int VAR_7 = VAR_0->src_params.hw_subfmt;
    VAR_0->dst_params = VAR_0->src_params;
    VAR_0->dst_params.imgfmt = VAR_7;
    VAR_0->dst_params.hw_subfmt = 0;

    FUNC_2(&VAR_2->layout, &VAR_0->dst_params);

    struct ra_imgfmt_desc VAR_8;
    if (!FUNC_4(VAR_0->ra, VAR_7, &VAR_8)) {
        FUNC_1(VAR_0, "Unsupported format: %s\n", FUNC_3(VAR_7));
        return -1;
    }

    VAR_5 = FUNC_0(VAR_4->cuCtxPushCurrent(VAR_2->display_ctx));
    if (VAR_5 < 0)
        return VAR_5;

    for (int VAR_9 = 0; VAR_9 < VAR_8.num_planes; VAR_9++) {
        if (!VAR_1->ext_init(VAR_0, VAR_8.planes[VAR_9], VAR_9))
            goto error;
    }

 error:
    VAR_6 = FUNC_0(VAR_4->cuCtxPopCurrent(&VAR_3));
    if (VAR_6 < 0)
        return VAR_6;

    return VAR_5;
}
