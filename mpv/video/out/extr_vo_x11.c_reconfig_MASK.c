
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* sws; int original_image; } ;
struct mp_image_params {int dummy; } ;
struct TYPE_2__ {struct mp_image_params src; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_0, struct mp_image_params *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    FUNC_0(&VAR_2->original_image);

    VAR_2->sws->src = *VAR_1;

    FUNC_2(VAR_0);

    if (!FUNC_1(VAR_0))
        return -1;

    return 0;
}
