
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int hwdec_devs; struct gpu_priv* priv; } ;
struct gpu_priv {int renderer; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct gpu_priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1->renderer, VAR_0->hwdec_devs);
}
