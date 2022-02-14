
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* ptr; } ;
struct nk_image {TYPE_1__ handle; } ;
struct TYPE_7__ {int dpy; } ;
typedef TYPE_2__ XSurface ;
struct TYPE_8__ {int clipMaskGC; int clipMask; int ximage; } ;
typedef TYPE_3__ XImageWithAlpha ;
struct TYPE_9__ {TYPE_2__* surf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__ VAR_0 ;

void
FUNC_4(struct nk_image* VAR_1)
{
    XSurface *VAR_2 = VAR_0.surf;
    XImageWithAlpha *VAR_3 = VAR_1->handle.ptr;
    if (!VAR_3) return;
    FUNC_0(VAR_3->ximage);
    FUNC_2(VAR_2->dpy, VAR_3->clipMask);
    FUNC_1(VAR_2->dpy, VAR_3->clipMaskGC);
    FUNC_3(VAR_3);
}
