
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_5__** tex; TYPE_2__* src; TYPE_1__* owner; struct cuda_mapper_priv* priv; } ;
struct TYPE_18__ {int num_planes; } ;
struct cuda_mapper_priv {TYPE_9__ layout; int * cu_array; int display_ctx; } ;
struct cuda_hw_priv {scalar_t__ do_full_sync; int (* ext_signal ) (struct ra_hwdec_mapper*,int) ;int (* ext_wait ) (struct ra_hwdec_mapper*,int) ;TYPE_6__* cu; } ;
struct TYPE_17__ {int WidthInBytes; int Height; int dstArray; int dstMemoryType; int srcY; int srcPitch; int srcDevice; int srcMemoryType; } ;
struct TYPE_16__ {int (* cuCtxPopCurrent ) (int *) ;int (* cuStreamSynchronize ) (int ) ;int (* cuMemcpy2DAsync ) (TYPE_7__*,int ) ;int (* cuCtxPushCurrent ) (int ) ;} ;
struct TYPE_14__ {TYPE_3__* format; } ;
struct TYPE_15__ {TYPE_4__ params; } ;
struct TYPE_13__ {int pixel_size; } ;
struct TYPE_12__ {int * stride; int * planes; } ;
struct TYPE_11__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_6__ CudaFunctions ;
typedef int CUdeviceptr ;
typedef int CUcontext ;
typedef TYPE_7__ CUDA_MEMCPY2D ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_9__*,int) ;
 int FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ra_hwdec_mapper*,int) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (struct ra_hwdec_mapper*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ra_hwdec_mapper *VAR_2)
{
    struct cuda_mapper_priv *VAR_3 = VAR_2->priv;
    struct cuda_hw_priv *VAR_4 = VAR_2->owner->priv;
    CudaFunctions *VAR_5 = VAR_4->cu;
    CUcontext VAR_6;
    int VAR_7 = 0, VAR_8 = 0;

    VAR_7 = FUNC_0(VAR_5->cuCtxPushCurrent(VAR_3->display_ctx));
    if (VAR_7 < 0)
        return VAR_7;

    for (int VAR_9 = 0; VAR_9 < VAR_3->layout.num_planes; VAR_9++) {
        if (VAR_4->ext_wait) {
            if (!VAR_4->ext_wait(VAR_2, VAR_9))
                goto error;
        }

        CUDA_MEMCPY2D VAR_10 = {
            .srcMemoryType = VAR_1,
            .srcDevice = (CUdeviceptr)VAR_2->src->planes[VAR_9],
            .srcPitch = VAR_2->src->stride[VAR_9],
            .srcY = 0,
            .dstMemoryType = VAR_0,
            .dstArray = VAR_3->cu_array[VAR_9],
            .WidthInBytes = FUNC_2(&VAR_3->layout, VAR_9) *
                             VAR_2->tex[VAR_9]->params.format->pixel_size,
            .Height = FUNC_1(&VAR_3->layout, VAR_9),
        };

        VAR_7 = FUNC_0(VAR_5->cuMemcpy2DAsync(&VAR_10, 0));
        if (VAR_7 < 0)
            goto error;

        if (VAR_4->ext_signal) {
            if (!VAR_4->ext_signal(VAR_2, VAR_9))
                goto error;
        }
    }
    if (VAR_4->do_full_sync)
        FUNC_0(VAR_5->cuStreamSynchronize(0));

 error:
   VAR_8 = FUNC_0(VAR_5->cuCtxPopCurrent(&VAR_6));
   if (VAR_8 < 0)
       return VAR_8;

   return VAR_7;
}
