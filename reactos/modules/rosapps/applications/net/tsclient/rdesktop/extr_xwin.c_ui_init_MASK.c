
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef void* uint32 ;
typedef int uint16 ;
struct TYPE_10__ {int host_be; int xserver_be; int depth; scalar_t__ bpp; int IM; int mod_map; int screen; void* using_full_workarea; int visual; int xcolmap; scalar_t__ no_translate_image; int x_socket; } ;
struct TYPE_11__ {scalar_t__ server_depth; int width; int height; TYPE_1__ xwin; scalar_t__ seamless_rdp; int * display; scalar_t__ enable_compose; scalar_t__ fullscreen; void* ownbackstore; int owncolmap; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef void* BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 void* VAR_2 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 void* VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,void**,void**,void**,void**) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;

BOOL
FUNC_24(RDPCLIENT * VAR_5)
{
 int VAR_6;

 VAR_5->display = FUNC_14(((void*)0));
 if (VAR_5->display == ((void*)0))
 {
  FUNC_16("Failed to open display: %s\n", FUNC_12(((void*)0)));
  return VAR_2;
 }

 {
  uint16 VAR_7 = 1;
  VAR_5->xwin.host_be = !(BOOL) (*(uint8 *) (&VAR_7));
 }


 VAR_5->xwin.xserver_be = (FUNC_7(VAR_5->display) == VAR_3);
 VAR_6 = FUNC_4(VAR_5->display);
 VAR_5->xwin.x_socket = FUNC_0(VAR_5->display);
 VAR_5->xwin.screen = FUNC_9(VAR_5->display, VAR_6);
 VAR_5->xwin.depth = FUNC_3(VAR_5->xwin.screen);

 if (!FUNC_20(VAR_5))
  return VAR_2;

 if (VAR_5->xwin.no_translate_image)
 {
  FUNC_1(("Performance optimization possible: avoiding image translation (colour depth conversion).\n"));
 }

 if (VAR_5->server_depth > VAR_5->xwin.bpp)
 {
  FUNC_21("Remote desktop colour depth %d higher than display colour depth %d.\n",
   VAR_5->server_depth, VAR_5->xwin.bpp);
 }

 FUNC_1(("RDP depth: %d, display depth: %d, display bpp: %d, X server BE: %d, host BE: %d\n",
        VAR_5->server_depth, VAR_5->xwin.depth, VAR_5->xwin.bpp, VAR_5->xwin.xserver_be, VAR_5->xwin.host_be));

 if (!VAR_5->owncolmap)
 {
  VAR_5->xwin.xcolmap =
   FUNC_11(VAR_5->display, FUNC_8(VAR_5->xwin.screen), VAR_5->xwin.visual,
     VAR_0);
  if (VAR_5->xwin.depth <= 8)
   FUNC_21("Display colour depth is %d bit: you may want to use -C for a private colourmap.\n", VAR_5->xwin.depth);
 }

 if ((!VAR_5->ownbackstore) && (FUNC_5(VAR_5->xwin.screen) != VAR_1))
 {
  FUNC_21("External BackingStore not available. Using internal.\n");
  VAR_5->ownbackstore = VAR_4;
 }




 if (VAR_5->fullscreen)
 {
  VAR_5->width = FUNC_10(VAR_5->xwin.screen);
  VAR_5->height = FUNC_6(VAR_5->xwin.screen);
  VAR_5->xwin.using_full_workarea = VAR_4;
 }
 else if (VAR_5->width < 0)
 {

  if (-VAR_5->width >= 100)
   VAR_5->xwin.using_full_workarea = VAR_4;
  VAR_5->height = FUNC_6(VAR_5->xwin.screen) * (-VAR_5->width) / 100;
  VAR_5->width = FUNC_10(VAR_5->xwin.screen) * (-VAR_5->width) / 100;
 }
 else if (VAR_5->width == 0)
 {

  uint32 VAR_8, VAR_9, VAR_10, VAR_11;
  if (FUNC_18(VAR_5, &VAR_8, &VAR_9, &VAR_10, &VAR_11) == 0)
  {
   VAR_5->width = VAR_10;
   VAR_5->height = VAR_11;
   VAR_5->xwin.using_full_workarea = VAR_4;
  }
  else
  {
   FUNC_21("Failed to get workarea: probably your window manager does not support extended hints\n");
   VAR_5->width = FUNC_10(VAR_5->xwin.screen);
   VAR_5->height = FUNC_6(VAR_5->xwin.screen);
  }
 }


 VAR_5->width = (VAR_5->width + 3) & ~3;

 VAR_5->xwin.mod_map = FUNC_13(VAR_5->display);

 FUNC_23(VAR_5);

 if (VAR_5->enable_compose)
  VAR_5->xwin.IM = FUNC_15(VAR_5->display, ((void*)0), ((void*)0), ((void*)0));

 FUNC_22(VAR_5);
 FUNC_17(VAR_5);
 if (VAR_5->seamless_rdp)
  FUNC_19(VAR_5);

 FUNC_2(("server bpp %d client bpp %d depth %d\n", VAR_5->server_depth, VAR_5->xwin.bpp, VAR_5->xwin.depth));

 return VAR_4;
}
