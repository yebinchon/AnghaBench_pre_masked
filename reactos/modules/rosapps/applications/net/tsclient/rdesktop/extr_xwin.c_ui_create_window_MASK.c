
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_21__ {char* res_name; char* res_class; int flags; int min_width; int max_width; int min_height; int max_height; } ;
typedef TYPE_3__ XSizeHints ;
typedef int XSetWindowAttributes ;
struct TYPE_19__ {scalar_t__ state; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_1__ xvisibility; } ;
typedef TYPE_4__ XEvent ;
typedef TYPE_3__ XClassHint ;
typedef int Window ;
struct TYPE_20__ {scalar_t__ backstore; int * null_cursor; void* kill_atom; void* protocol_atom; void* mouse_in_wnd; void* focused; int * IC; int * IM; int * gc; int screen; int depth; int * create_bitmap_gc; int visual; } ;
struct TYPE_23__ {int width; int height; scalar_t__ xpos; int pos; scalar_t__ ypos; int Unobscured; TYPE_2__ xwin; int wnd; int display; scalar_t__ embed_wnd; scalar_t__ hide_decorations; int title; scalar_t__ ownbackstore; scalar_t__ fullscreen; } ;
typedef TYPE_6__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 () ;
 TYPE_3__* FUNC_5 () ;
 void* FUNC_6 (int ,int ,int ,int *) ;
 int * FUNC_7 (int *,int ,int,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int,int,int ) ;
 int FUNC_9 (int ,int ,scalar_t__,scalar_t__,int,int,int ,int ,int ,int ,int,int *) ;
 int FUNC_10 (int ,scalar_t__,int *,int ,int ,int,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int * FUNC_12 (int *,int ,long*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,TYPE_4__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,long) ;
 int FUNC_18 (int ,int ,TYPE_3__*) ;
 int FUNC_19 (int ,int *,int ) ;
 int FUNC_20 (int ,int ,TYPE_3__*) ;
 int FUNC_21 (int ,int ,void**,int) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (TYPE_6__*,long*) ;
 int FUNC_24 (TYPE_6__*,int *) ;
 int FUNC_25 (TYPE_6__*,int ) ;
 int * FUNC_26 (TYPE_6__*,int ,int ,int,int,int*,int*) ;
 int FUNC_27 (TYPE_6__*) ;

BOOL
FUNC_28(RDPCLIENT * VAR_20)
{
 uint8 VAR_21[1] = { 0x80 };
 uint8 VAR_22[24] = { 0x00 };

 XSetWindowAttributes VAR_23;
 XClassHint *VAR_24;
 XSizeHints *VAR_25;
 int VAR_26, VAR_27;
 long VAR_28, VAR_29;
 XEvent VAR_30;

 VAR_26 = VAR_20->fullscreen ? FUNC_3(VAR_20->xwin.screen) : VAR_20->width;
 VAR_27 = VAR_20->fullscreen ? FUNC_1(VAR_20->xwin.screen) : VAR_20->height;


 if (VAR_20->xpos < 0 || (VAR_20->xpos == 0 && (VAR_20->pos & 2)))
  VAR_20->xpos = FUNC_3(VAR_20->xwin.screen) + VAR_20->xpos - VAR_20->width;
 if (VAR_20->ypos < 0 || (VAR_20->ypos == 0 && (VAR_20->pos & 4)))
  VAR_20->ypos = FUNC_1(VAR_20->xwin.screen) + VAR_20->ypos - VAR_20->height;

 FUNC_24(VAR_20, &VAR_23);

 VAR_20->wnd = FUNC_9(VAR_20->display, FUNC_2(VAR_20->xwin.screen), VAR_20->xpos, VAR_20->ypos, VAR_26,
         VAR_27, 0, VAR_20->xwin.depth, VAR_6, VAR_20->xwin.visual,
         VAR_0 | VAR_1 | VAR_4 | VAR_3 |
         VAR_2, &VAR_23);

 if (VAR_20->xwin.gc == ((void*)0))
 {
  VAR_20->xwin.gc = FUNC_6(VAR_20->display, VAR_20->wnd, 0, ((void*)0));
  FUNC_27(VAR_20);
 }

 if (VAR_20->xwin.create_bitmap_gc == ((void*)0))
  VAR_20->xwin.create_bitmap_gc = FUNC_6(VAR_20->display, VAR_20->wnd, 0, ((void*)0));

 if ((VAR_20->ownbackstore) && (VAR_20->xwin.backstore == 0))
 {
  VAR_20->xwin.backstore = FUNC_8(VAR_20->display, VAR_20->wnd, VAR_20->width, VAR_20->height, VAR_20->xwin.depth);


  FUNC_19(VAR_20->display, VAR_20->xwin.gc, FUNC_0(VAR_20->xwin.screen));
  FUNC_10(VAR_20->display, VAR_20->xwin.backstore, VAR_20->xwin.gc, 0, 0, VAR_20->width, VAR_20->height);
 }

 FUNC_22(VAR_20->display, VAR_20->wnd, VAR_20->title);

 if (VAR_20->hide_decorations)
  FUNC_25(VAR_20, VAR_20->wnd);

 VAR_24 = FUNC_4();
 if (VAR_24 != ((void*)0))
 {
  VAR_24->res_name = VAR_24->res_class = "rdesktop";
  FUNC_18(VAR_20->display, VAR_20->wnd, VAR_24);
  FUNC_11(VAR_24);
 }

 VAR_25 = FUNC_5();
 if (VAR_25)
 {
  VAR_25->flags = VAR_8 | VAR_7;
  if (VAR_20->pos)
   VAR_25->flags |= VAR_9;
  VAR_25->min_width = VAR_25->max_width = VAR_20->width;
  VAR_25->min_height = VAR_25->max_height = VAR_20->height;
  FUNC_20(VAR_20->display, VAR_20->wnd, VAR_25);
  FUNC_11(VAR_25);
 }

 if (VAR_20->embed_wnd)
 {
  FUNC_16(VAR_20->display, VAR_20->wnd, (Window) VAR_20->embed_wnd, 0, 0);
 }

 FUNC_23(VAR_20, &VAR_28);

 if (VAR_20->xwin.IM != ((void*)0))
 {
  VAR_20->xwin.IC = FUNC_7(VAR_20->xwin.IM, VAR_19, (VAR_14 | VAR_15),
     VAR_16, VAR_20->wnd, VAR_18, VAR_20->wnd, ((void*)0));

  if ((VAR_20->xwin.IC != ((void*)0))
      && (FUNC_12(VAR_20->xwin.IC, VAR_17, &VAR_29, ((void*)0)) == ((void*)0)))
   VAR_28 |= VAR_29;
 }

 FUNC_17(VAR_20->display, VAR_20->wnd, VAR_28);
 FUNC_14(VAR_20->display, VAR_20->wnd);


 do
 {
  FUNC_15(VAR_20->display, VAR_11, &VAR_30);
 }
 while (VAR_30.type != VAR_12);
 VAR_20->Unobscured = VAR_30.xvisibility.state == VAR_13;

 VAR_20->xwin.focused = VAR_5;
 VAR_20->xwin.mouse_in_wnd = VAR_5;


 VAR_20->xwin.protocol_atom = FUNC_13(VAR_20->display, "WM_PROTOCOLS", VAR_10);
 VAR_20->xwin.kill_atom = FUNC_13(VAR_20->display, "WM_DELETE_WINDOW", VAR_10);
 FUNC_21(VAR_20->display, VAR_20->wnd, &VAR_20->xwin.kill_atom, 1);


 if (VAR_20->xwin.null_cursor == ((void*)0))
  VAR_20->xwin.null_cursor = FUNC_26(VAR_20, 0, 0, 1, 1, VAR_21, VAR_22);

 return VAR_10;
}
