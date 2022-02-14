
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int current; } ;
struct mp_image_params {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0, struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    FUNC_0(&VAR_2->current);

    return 0;
}
