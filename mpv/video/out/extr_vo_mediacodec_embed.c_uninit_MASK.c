
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int hwdec_devs; struct priv* priv; } ;
struct TYPE_2__ {int av_device_ref; } ;
struct priv {TYPE_1__ hwctx; int next_image; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_2(&VAR_1->next_image);

    FUNC_1(VAR_0->hwdec_devs, &VAR_1->hwctx);
    FUNC_0(&VAR_1->hwctx.av_device_ref);
}
