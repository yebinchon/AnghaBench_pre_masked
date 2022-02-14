
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {int ra; struct priv_owner* priv; } ;
struct priv_owner {int interop_unmap; int interop_map; } ;
struct TYPE_2__ {int tex; } ;
struct pl_gpu {TYPE_1__ import_caps; } ;


 int FUNC_0 (struct ra_hwdec const*,char*) ;
 int VAR_0 ;
 struct pl_gpu* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_2(const struct ra_hwdec *VAR_3)
{
   struct priv_owner *VAR_4 = VAR_3->priv;

    const struct pl_gpu *VAR_5 = FUNC_1(VAR_3->ra);
    if (!VAR_5) {

        return 0;
    }

    if (!(VAR_5->import_caps.tex & VAR_0)) {
        FUNC_0(VAR_3, "VAAPI Vulkan interop requires support for "
                        "dma_buf import in Vulkan.\n");
        return 0;
    }

    FUNC_0(VAR_3, "using VAAPI Vulkan interop\n");

    VAR_4->interop_map = VAR_1;
    VAR_4->interop_unmap = VAR_2;

    return 1;
}
