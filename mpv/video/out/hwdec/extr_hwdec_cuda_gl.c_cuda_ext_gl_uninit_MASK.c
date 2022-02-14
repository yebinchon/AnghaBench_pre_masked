
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {struct cuda_mapper_priv* priv; TYPE_1__* owner; } ;
struct ext_gl {scalar_t__ cu_res; } ;
struct cuda_mapper_priv {struct ext_gl** ext; } ;
struct cuda_hw_priv {TYPE_2__* cu; } ;
struct TYPE_4__ {int (* cuGraphicsUnregisterResource ) (scalar_t__) ;} ;
struct TYPE_3__ {struct cuda_hw_priv* priv; } ;
typedef TYPE_2__ CudaFunctions ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ext_gl*) ;

__attribute__((used)) static void FUNC_3(const struct ra_hwdec_mapper *VAR_0, int VAR_1)
{
    struct cuda_hw_priv *VAR_2 = VAR_0->owner->priv;
    struct cuda_mapper_priv *VAR_3 = VAR_0->priv;
    CudaFunctions *VAR_4 = VAR_2->cu;

    struct ext_gl *VAR_5 = VAR_3->ext[VAR_1];
    if (VAR_5 && VAR_5->cu_res) {
        FUNC_0(VAR_4->cuGraphicsUnregisterResource(VAR_5->cu_res));
        VAR_5->cu_res = 0;
    }
    FUNC_2(VAR_5);
}
