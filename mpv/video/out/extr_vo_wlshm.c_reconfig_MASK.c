
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* sws; } ;
struct mp_image_params {int dummy; } ;
struct TYPE_2__ {struct mp_image_params src; } ;


 int FUNC_0 (struct vo*) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0, struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    if (!FUNC_0(VAR_0))
        return -1;
    VAR_2->sws->src = *VAR_1;

    return 0;
}
