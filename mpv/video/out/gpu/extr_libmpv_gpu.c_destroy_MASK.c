
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct render_backend {int hwdec_devs; struct priv* priv; } ;
struct priv {TYPE_2__* context; scalar_t__ renderer; } ;
struct TYPE_5__ {struct TYPE_5__* priv; TYPE_1__* fns; } ;
struct TYPE_4__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct render_backend *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->renderer)
        FUNC_0(VAR_1->renderer);

    FUNC_1(VAR_0->hwdec_devs);

    if (VAR_1->context) {
        VAR_1->context->fns->destroy(VAR_1->context);
        FUNC_3(VAR_1->context->priv);
        FUNC_3(VAR_1->context);
    }
}
