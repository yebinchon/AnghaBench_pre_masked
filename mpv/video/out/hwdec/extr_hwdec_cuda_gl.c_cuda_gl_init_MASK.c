
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_hwdec {int global; int ra; struct cuda_hw_priv* priv; } ;
struct cuda_hw_priv {int do_full_sync; int ext_uninit; int ext_init; int decode_ctx; int display_ctx; TYPE_2__* cu; } ;
struct TYPE_5__ {int (* cuCtxCreate ) (int *,int ,scalar_t__) ;int (* cuCtxPopCurrent ) (int *) ;int (* cuDeviceGet ) (scalar_t__*,int) ;int (* cuGLGetDevices ) (unsigned int*,scalar_t__*,int,int ) ;} ;
struct TYPE_4__ {int version; int es; } ;
typedef TYPE_1__ GL ;
typedef TYPE_2__ CudaFunctions ;
typedef scalar_t__ CUdevice ;
typedef int CUcontext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ra_hwdec const*,char*) ;
 int FUNC_2 (struct ra_hwdec const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int *,int*) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned int*,scalar_t__*,int,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,scalar_t__) ;

bool FUNC_12(const struct ra_hwdec *VAR_5) {
    int VAR_6 = 0;
    struct cuda_hw_priv *VAR_7 = VAR_5->priv;
    CudaFunctions *VAR_8 = VAR_7->cu;

    if (FUNC_5(VAR_5->ra)) {
        GL *VAR_9 = FUNC_4(VAR_5->ra);
        if (VAR_9->version < 210 && VAR_9->es < 300) {
            FUNC_2(VAR_5, "need OpenGL >= 2.1 or OpenGL-ES >= 3.0\n");
            return 0;
        }
    } else {

        return 0;
    }

    CUdevice VAR_10;
    unsigned int VAR_11;
    VAR_6 = FUNC_0(VAR_8->cuGLGetDevices(&VAR_11, &VAR_10, 1,
                                      VAR_1));
    if (VAR_6 < 0)
        return 0;

    VAR_6 = FUNC_0(VAR_8->cuCtxCreate(&VAR_7->display_ctx, VAR_0,
                                   VAR_10));
    if (VAR_6 < 0)
        return 0;

    VAR_7->decode_ctx = VAR_7->display_ctx;

    int VAR_12 = -1;
    FUNC_3(VAR_5->global, "cuda-decode-device", &VAR_4,
                       &VAR_12);

    if (VAR_12 > -1) {
        CUcontext VAR_13;
        CUdevice VAR_14;
        VAR_6 = FUNC_0(VAR_8->cuDeviceGet(&VAR_14, VAR_12));
        if (VAR_6 < 0) {
            FUNC_0(VAR_8->cuCtxPopCurrent(&VAR_13));
            return 0;
        }

        if (VAR_14 != VAR_10) {
            FUNC_1(VAR_5, "Using separate decoder and display devices\n");


            VAR_6 = FUNC_0(VAR_8->cuCtxPopCurrent(&VAR_13));
            if (VAR_6 < 0)
                return 0;

            VAR_6 = FUNC_0(VAR_8->cuCtxCreate(&VAR_7->decode_ctx, VAR_0,
                                           VAR_14));
            if (VAR_6 < 0)
                return 0;
        }
    }


    VAR_7->do_full_sync = 1;

    VAR_7->ext_init = VAR_2;
    VAR_7->ext_uninit = VAR_3;

    return 1;
}
