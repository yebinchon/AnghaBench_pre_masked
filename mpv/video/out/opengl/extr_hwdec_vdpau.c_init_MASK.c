
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ra_hwdec {int devs; TYPE_1__* driver; scalar_t__ probing; int log; struct priv_owner* priv; int ra; } ;
struct priv_owner {TYPE_4__* ctx; } ;
struct TYPE_11__ {int driver_name; } ;
struct TYPE_10__ {TYPE_7__ hwctx; } ;
struct TYPE_9__ {int mpgl_caps; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ GL ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_7__*) ;
 TYPE_4__* FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int * FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ra_hwdec *VAR_1)
{
    Display *VAR_2 = FUNC_4(VAR_1->ra, "x11");
    if (!VAR_2 || !FUNC_6(VAR_1->ra))
        return -1;
    GL *VAR_3 = FUNC_5(VAR_1->ra);
    if (!(VAR_3->mpgl_caps & VAR_0))
        return -1;
    struct priv_owner *VAR_4 = VAR_1->priv;
    VAR_4->ctx = FUNC_1(VAR_1->log, VAR_2, 1);
    if (!VAR_4->ctx)
        return -1;
    if (FUNC_3(VAR_4->ctx, ((void*)0)) < 1)
        return -1;
    if (VAR_1->probing && FUNC_2(VAR_4->ctx))
        return -1;
    VAR_4->ctx->hwctx.driver_name = VAR_1->driver->name;
    FUNC_0(VAR_1->devs, &VAR_4->ctx->hwctx);
    return 0;
}
