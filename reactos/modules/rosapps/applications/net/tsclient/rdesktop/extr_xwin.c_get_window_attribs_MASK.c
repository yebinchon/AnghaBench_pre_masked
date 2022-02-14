
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int colormap; int override_redirect; int backing_store; void* border_pixel; void* background_pixel; } ;
typedef TYPE_2__ XSetWindowAttributes ;
struct TYPE_6__ {int xcolmap; int screen; } ;
struct TYPE_8__ {TYPE_1__ xwin; int fullscreen; scalar_t__ ownbackstore; } ;
typedef TYPE_3__ RDPCLIENT ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(RDPCLIENT * VAR_2, XSetWindowAttributes * VAR_3)
{
 VAR_3->background_pixel = FUNC_0(VAR_2->xwin.screen);
 VAR_3->background_pixel = FUNC_1(VAR_2->xwin.screen);
 VAR_3->border_pixel = FUNC_1(VAR_2->xwin.screen);
 VAR_3->backing_store = VAR_2->ownbackstore ? VAR_1 : VAR_0;
 VAR_3->override_redirect = VAR_2->fullscreen;
 VAR_3->colormap = VAR_2->xwin.xcolmap;
}
