
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int XImage ;
struct TYPE_8__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_6__ {int bpp; int gc; int backstore; int depth; int visual; } ;
struct TYPE_7__ {TYPE_1__ xwin; int wnd; int display; scalar_t__ ownbackstore; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int ,int ,int ,int ,int,int,int,int,int,int),int ) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,char*,int,int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int *,int ,int ,int,int,int,int) ;
 int VAR_0 ;
 int * FUNC_6 (TYPE_2__*,int,int,int,int) ;
 TYPE_4__* VAR_1 ;

void
FUNC_7(RDPCLIENT * VAR_2, uint32 VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 XImage *VAR_8;
 uint8 *VAR_9;

 VAR_3 *= VAR_2->xwin.bpp / 8;
 VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_6, VAR_7, VAR_2->xwin.bpp / 8);
 if (VAR_9 == ((void*)0))
  return;

 VAR_8 = FUNC_3(VAR_2->display, VAR_2->xwin.visual, VAR_2->xwin.depth, VAR_0, 0,
        (char *) VAR_9, VAR_6, VAR_7, FUNC_0(VAR_2->display), VAR_6 * VAR_2->xwin.bpp / 8);

 if (VAR_2->ownbackstore)
 {
  FUNC_5(VAR_2->display, VAR_2->xwin.backstore, VAR_2->xwin.gc, VAR_8, 0, 0, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_2(VAR_2->display, VAR_2->xwin.backstore, VAR_2->wnd, VAR_2->xwin.gc, VAR_4, VAR_5, VAR_6, VAR_7, VAR_4, VAR_5);
  FUNC_1(FUNC_2,
     (VAR_2->display, VAR_2->xwin.backstore, VAR_1->wnd, VAR_2->xwin.gc,
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_4 - VAR_1->xoffset, VAR_5 - VAR_1->yoffset));
 }
 else
 {
  FUNC_5(VAR_2->display, VAR_2->wnd, VAR_2->xwin.gc, VAR_8, 0, 0, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_1(FUNC_2,
     (VAR_2->display, VAR_2->wnd, VAR_1->wnd, VAR_2->xwin.gc, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_4 - VAR_1->xoffset, VAR_5 - VAR_1->yoffset));
 }

 FUNC_4(VAR_8);
}
