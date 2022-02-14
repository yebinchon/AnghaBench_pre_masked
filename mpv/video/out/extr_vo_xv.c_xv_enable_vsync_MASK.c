
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvctx {int xv_port; } ;
struct vo {TYPE_1__* x11; struct xvctx* priv; } ;
struct TYPE_2__ {int display; } ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct vo*,char*) ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_2)
{
    struct xvctx *VAR_3 = VAR_2->priv;
    Atom VAR_4 = FUNC_1(VAR_2, "XV_SYNC_TO_VBLANK");
    if (VAR_4 == VAR_0)
        return -1;
    return FUNC_0(VAR_2->x11->display, VAR_3->xv_port, VAR_4, 1)
           == VAR_1;
}
