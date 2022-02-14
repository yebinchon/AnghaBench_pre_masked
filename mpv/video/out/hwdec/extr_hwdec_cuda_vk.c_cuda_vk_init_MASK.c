
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_hwdec {int ra; struct cuda_hw_priv* priv; } ;
struct TYPE_5__ {int tex; int sync; } ;
struct pl_gpu {int uuid; TYPE_1__ export_caps; } ;
struct cuda_hw_priv {int handle_type; int ext_signal; int ext_wait; int ext_uninit; int ext_init; int display_ctx; int decode_ctx; TYPE_2__* cu; } ;
struct TYPE_7__ {int bytes; } ;
struct TYPE_6__ {int (* cuCtxCreate ) (int *,int ,int) ;int (* cuDeviceGetUuid ) (TYPE_3__*,int) ;int (* cuDeviceGet ) (int*,int) ;int (* cuDeviceGetCount ) (int*) ;int cuImportExternalMemory; } ;
typedef TYPE_2__ CudaFunctions ;
typedef TYPE_3__ CUuuid ;
typedef int CUdevice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct ra_hwdec const*,char*) ;
 int FUNC_3 (struct ra_hwdec const*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 struct pl_gpu* FUNC_5 (int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int *,int ,int) ;

bool FUNC_10(const struct ra_hwdec *VAR_8) {
    int VAR_9 = 0;
    struct cuda_hw_priv *VAR_10 = VAR_8->priv;
    CudaFunctions *VAR_11 = VAR_10->cu;

    VAR_10->handle_type =



        VAR_1;


    const struct pl_gpu *VAR_12 = FUNC_5(VAR_8->ra);
    if (VAR_12 != ((void*)0)) {
        if (!(VAR_12->export_caps.tex & VAR_10->handle_type)) {
            FUNC_3(VAR_8, "CUDA hwdec with Vulkan requires exportable texture memory of type 0x%X.\n",
                       VAR_10->handle_type);
            return 0;
        } else if (!(VAR_12->export_caps.sync & VAR_10->handle_type)) {
            FUNC_3(VAR_8, "CUDA hwdec with Vulkan requires exportable semaphores of type 0x%X.\n",
                       VAR_10->handle_type);
            return 0;
        }
    } else {

        return 0;
    }

    if (!VAR_11->cuImportExternalMemory) {
        FUNC_2(VAR_8, "CUDA hwdec with Vulkan requires driver version 410.48 or newer.\n");
        return 0;
    }

    int VAR_13;
    VAR_9 = FUNC_0(VAR_11->cuDeviceGetCount(&VAR_13));
    if (VAR_9 < 0)
        return 0;

    CUdevice VAR_14 = -1;
    for (int VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
        CUdevice VAR_16;
        VAR_9 = FUNC_0(VAR_11->cuDeviceGet(&VAR_16, VAR_15));
        if (VAR_9 < 0)
            continue;

        CUuuid VAR_17;
        VAR_9 = FUNC_0(VAR_11->cuDeviceGetUuid(&VAR_17, VAR_16));
        if (VAR_9 < 0)
            continue;

        if (FUNC_4(VAR_12->uuid, VAR_17.bytes, sizeof (VAR_12->uuid)) == 0) {
            VAR_14 = VAR_16;
            break;
        }
    }

    if (VAR_14 == -1) {
        FUNC_2(VAR_8, "Could not match Vulkan display device in CUDA.\n");
        return 0;
    }

    VAR_9 = FUNC_0(VAR_11->cuCtxCreate(&VAR_10->display_ctx, VAR_0,
                                   VAR_14));
    if (VAR_9 < 0)
        return 0;

    VAR_10->decode_ctx = VAR_10->display_ctx;

    VAR_10->ext_init = VAR_4;
    VAR_10->ext_uninit = VAR_6;
    VAR_10->ext_wait = VAR_7;
    VAR_10->ext_signal = VAR_5;

    return 1;
}
