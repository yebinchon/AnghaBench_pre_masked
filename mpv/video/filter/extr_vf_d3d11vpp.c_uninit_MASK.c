
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ vo_dev; scalar_t__ device_ctx; scalar_t__ video_dev; scalar_t__ video_ctx; int pool; int queue; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (struct mp_filter*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_4(VAR_0);

    FUNC_5(VAR_0);
    FUNC_6(VAR_1->queue);
    FUNC_6(VAR_1->pool);

    if (VAR_1->video_ctx)
        FUNC_2(VAR_1->video_ctx);

    if (VAR_1->video_dev)
        FUNC_3(VAR_1->video_dev);

    if (VAR_1->device_ctx)
        FUNC_0(VAR_1->device_ctx);

    if (VAR_1->vo_dev)
        FUNC_1(VAR_1->vo_dev);
}
