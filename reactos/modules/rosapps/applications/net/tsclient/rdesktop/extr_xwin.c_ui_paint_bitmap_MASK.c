
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int XImage ;
struct TYPE_8__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_6__ {int bpp; int gc; int backstore; int depth; int visual; } ;
struct TYPE_7__ {int server_depth; TYPE_1__ xwin; int wnd; int display; scalar_t__ ownbackstore; scalar_t__ owncolmap; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int (*) (int ,int ,int ,int ,int,int,int,int,int,int),int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 int * FUNC_2 (int ,int ,int ,int ,int ,char*,int,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *,int ,int ,int,int,int,int) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int * FUNC_5 (TYPE_2__*,int,int,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(RDPCLIENT * VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, uint8 * VAR_9)
{
 XImage *VAR_10;
 uint8 *VAR_11;
 int VAR_12;

 if (VAR_2->server_depth == 8)
 {
  VAR_12 = 8;
 }
 else
 {
  VAR_12 = VAR_2->xwin.bpp;

  if (VAR_2->xwin.bpp == 24)
   VAR_12 = 32;
 }

 VAR_11 = (VAR_2->owncolmap ? VAR_9 : FUNC_5(VAR_2, VAR_7, VAR_8, VAR_9));
 VAR_10 = FUNC_2(VAR_2->display, VAR_2->xwin.visual, VAR_2->xwin.depth, VAR_0, 0,
        (char *) VAR_11, VAR_7, VAR_8, VAR_12, 0);

 if (VAR_2->ownbackstore)
 {
  FUNC_4(VAR_2->display, VAR_2->xwin.backstore, VAR_2->xwin.gc, VAR_10, 0, 0, VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_1(VAR_2->display, VAR_2->xwin.backstore, VAR_2->wnd, VAR_2->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6, VAR_3, VAR_4);
  FUNC_0(FUNC_1,
     (VAR_2->display, VAR_2->xwin.backstore, VAR_1->wnd, VAR_2->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_3 - VAR_1->xoffset, VAR_4 - VAR_1->yoffset));
 }
 else
 {
  FUNC_4(VAR_2->display, VAR_2->wnd, VAR_2->xwin.gc, VAR_10, 0, 0, VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_0(FUNC_1,
     (VAR_2->display, VAR_2->wnd, VAR_1->wnd, VAR_2->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_3 - VAR_1->xoffset, VAR_4 - VAR_1->yoffset));
 }

 FUNC_3(VAR_10);
 if (VAR_11 != VAR_9)
  FUNC_6(VAR_11);
}
