
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct timeval {int dummy; } ;
struct TYPE_27__ {unsigned long id; int wnd; TYPE_10__* group; struct TYPE_27__* next; scalar_t__ outpos_height; scalar_t__ outpos_width; scalar_t__ outpos_yoffset; scalar_t__ outpos_xoffset; scalar_t__ outpos_serial; int outstanding_position; void* position_timer; scalar_t__ desktop; int state; scalar_t__ height; scalar_t__ width; scalar_t__ yoffset; scalar_t__ xoffset; scalar_t__ behind; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_28__ {char* res_name; char* res_class; int window_group; int flags; } ;
typedef TYPE_3__ XWMHints ;
typedef TYPE_3__ XSizeHints ;
typedef int XSetWindowAttributes ;
typedef TYPE_3__ XClassHint ;
typedef int Window ;
struct TYPE_26__ {TYPE_2__* seamless_windows; int kill_atom; int screen; int visual; int depth; int seamless_active; } ;
struct TYPE_29__ {int display; TYPE_1__ xwin; } ;
struct TYPE_25__ {int wnd; int refcnt; } ;
typedef TYPE_6__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_1 () ;
 TYPE_3__* FUNC_2 () ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ,int ,int,int,int,int,int ,int ,int ,int ,int,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,long) ;
 int FUNC_7 (int ,int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,TYPE_3__*) ;
 int FUNC_10 (int ,int ,TYPE_3__*) ;
 int FUNC_11 (int ,int ,int *,int) ;
 int FUNC_12 (int ,int ,char*) ;
 int FUNC_13 (TYPE_6__*,int ) ;
 int FUNC_14 (TYPE_6__*,int ) ;
 int FUNC_15 (TYPE_6__*,int ,char*) ;
 int FUNC_16 (TYPE_6__*,long*) ;
 int FUNC_17 (TYPE_6__*,int *) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 TYPE_10__* FUNC_19 (TYPE_6__*,unsigned long,int ) ;
 TYPE_2__* FUNC_20 (TYPE_6__*,unsigned long) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (char*,unsigned long) ;
 void* FUNC_23 (int) ;

void
FUNC_24(RDPCLIENT * VAR_11, unsigned long VAR_12, unsigned long VAR_13, unsigned long VAR_14,
     unsigned long VAR_15)
{
 Window VAR_16;
 XSetWindowAttributes VAR_17;
 XClassHint *VAR_18;
 XSizeHints *VAR_19;
 XWMHints *VAR_20;
 long VAR_21;
 seamless_window *VAR_22, *VAR_23;

 if (!VAR_11->xwin.seamless_active)
  return;


 VAR_22 = FUNC_20(VAR_11, VAR_12);
 if (VAR_22)
  return;

 FUNC_17(VAR_11, &VAR_17);
 VAR_16 = FUNC_4(VAR_11->display, FUNC_0(VAR_11->xwin.screen), -1, -1, 1, 1, 0, VAR_11->xwin.depth,
       VAR_5, VAR_11->xwin.visual,
       VAR_0 | VAR_1 | VAR_3 | VAR_2, &VAR_17);

 FUNC_12(VAR_11->display, VAR_16, "SeamlessRDP");
 FUNC_15(VAR_11, VAR_16, "SeamlessRDP");

 FUNC_18(VAR_11, VAR_16);

 VAR_18 = FUNC_1();
 if (VAR_18 != ((void*)0))
 {
  VAR_18->res_name = "rdesktop";
  VAR_18->res_class = "SeamlessRDP";
  FUNC_7(VAR_11->display, VAR_16, VAR_18);
  FUNC_5(VAR_18);
 }


 VAR_19 = FUNC_2();
 if (VAR_19 != ((void*)0))
 {
  VAR_19->flags = VAR_9;
  FUNC_10(VAR_11->display, VAR_16, VAR_19);
  FUNC_5(VAR_19);
 }


 if (VAR_14 == 0xFFFFFFFF)
 {
  FUNC_8(VAR_11->display, VAR_16, FUNC_0(VAR_11->xwin.screen));


  FUNC_14(VAR_11, VAR_16);
 }

 else if (VAR_14 != 0x00000000)
 {
  VAR_23 = FUNC_20(VAR_11, VAR_14);
  if (VAR_23)
   FUNC_8(VAR_11->display, VAR_16, VAR_23->wnd);
  else
   FUNC_22("ui_seamless_create_window: No parent window 0x%lx\n", VAR_14);
 }

 if (VAR_15 & VAR_7)
 {


  if (VAR_14 == 0x00000000)
   FUNC_8(VAR_11->display, VAR_16, FUNC_0(VAR_11->xwin.screen));
  FUNC_13(VAR_11, VAR_16);
 }



 FUNC_16(VAR_11, &VAR_21);
 VAR_21 |= VAR_6;

 FUNC_6(VAR_11->display, VAR_16, VAR_21);




 FUNC_11(VAR_11->display, VAR_16, &VAR_11->xwin.kill_atom, 1);

 VAR_22 = FUNC_23(sizeof(seamless_window));
 VAR_22->wnd = VAR_16;
 VAR_22->id = VAR_12;
 VAR_22->behind = 0;
 VAR_22->group = FUNC_19(VAR_11, VAR_13, VAR_4);
 VAR_22->group->refcnt++;
 VAR_22->xoffset = 0;
 VAR_22->yoffset = 0;
 VAR_22->width = 0;
 VAR_22->height = 0;
 VAR_22->state = VAR_8;
 VAR_22->desktop = 0;
 VAR_22->position_timer = FUNC_23(sizeof(struct timeval));
 FUNC_21(VAR_22->position_timer);

 VAR_22->outstanding_position = VAR_4;
 VAR_22->outpos_serial = 0;
 VAR_22->outpos_xoffset = VAR_22->outpos_yoffset = 0;
 VAR_22->outpos_width = VAR_22->outpos_height = 0;

 VAR_22->next = VAR_11->xwin.seamless_windows;
 VAR_11->xwin.seamless_windows = VAR_22;


 VAR_20 = FUNC_3();
 if (VAR_20)
 {
  VAR_20->flags = VAR_10;
  VAR_20->window_group = VAR_22->group->wnd;
  FUNC_9(VAR_11->display, VAR_22->wnd, VAR_20);
  FUNC_5(VAR_20);
 }
}
