
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {scalar_t__ hwdec_devs; struct gpu_priv* priv; } ;
struct gpu_priv {int ctx; int renderer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct gpu_priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1->renderer);
    if (VAR_0->hwdec_devs) {
        FUNC_2(VAR_0->hwdec_devs, ((void*)0), ((void*)0));
        FUNC_1(VAR_0->hwdec_devs);
    }
    FUNC_3(&VAR_1->ctx);
}
