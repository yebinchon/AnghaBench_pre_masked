
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {int devs; struct priv* priv; } ;
struct TYPE_2__ {int av_device_ref; } ;
struct priv {int * ctx; TYPE_1__ hwctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ra_hwdec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct ra_hwdec*,int *) ;

__attribute__((used)) static void FUNC_5(struct ra_hwdec *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_0);
    FUNC_4(VAR_0, ((void*)0));

    FUNC_3(VAR_0->devs, &VAR_1->hwctx);
    FUNC_0(&VAR_1->hwctx.av_device_ref);

    if (VAR_1->ctx) {
        FUNC_2(VAR_1->ctx);
        VAR_1->ctx = ((void*)0);
    }
}
