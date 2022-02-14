
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(struct render_backend *VAR_0, int VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    return FUNC_0(VAR_2->renderer, VAR_1);
}
