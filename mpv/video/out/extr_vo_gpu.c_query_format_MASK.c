
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct gpu_priv* priv; } ;
struct gpu_priv {int renderer; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0, int VAR_1)
{
    struct gpu_priv *VAR_2 = VAR_0->priv;
    if (!FUNC_0(VAR_2->renderer, VAR_1))
        return 0;
    return 1;
}
