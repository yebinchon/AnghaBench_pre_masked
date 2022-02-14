
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int egl_display; int (* StreamConsumerReleaseKHR ) (int ,scalar_t__) ;} ;
struct priv {scalar_t__ egl_stream; } ;
struct TYPE_2__ {struct priv_owner* priv; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->owner->priv;
    struct priv *VAR_2 = VAR_0->priv;

    for (int VAR_3 = 0; VAR_3 < 2; VAR_3++)
        FUNC_0(VAR_0->ra, &VAR_0->tex[VAR_3]);
    if (VAR_2->egl_stream)
        VAR_1->StreamConsumerReleaseKHR(VAR_1->egl_display, VAR_2->egl_stream);
}
