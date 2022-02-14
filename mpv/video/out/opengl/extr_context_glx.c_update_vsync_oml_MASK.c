
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {int sync; int (* XGetSyncValues ) (int ,int ,int*,int*,int*) ;} ;
typedef int int64_t ;
struct TYPE_4__ {int window; int display; } ;
struct TYPE_3__ {TYPE_2__* x11; } ;


 int FUNC_0 (int (*) (int ,int ,int*,int*,int*)) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ,int ,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1->XGetSyncValues);

    int64_t VAR_2, VAR_3, VAR_4;
    if (!VAR_1->XGetSyncValues(VAR_0->vo->x11->display, VAR_0->vo->x11->window,
                           &VAR_2, &VAR_3, &VAR_4))
        VAR_2 = VAR_3 = VAR_4 = -1;

    FUNC_1(&VAR_1->sync, VAR_2, VAR_3, VAR_4);
}
