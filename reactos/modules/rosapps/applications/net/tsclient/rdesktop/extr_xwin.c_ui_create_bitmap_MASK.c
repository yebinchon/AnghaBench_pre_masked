
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int XImage ;
struct TYPE_5__ {int bpp; int create_bitmap_gc; int depth; int visual; } ;
struct TYPE_6__ {int server_depth; TYPE_1__ xwin; int display; int wnd; scalar_t__ owncolmap; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef int HBITMAP ;


 int * FUNC_0 (int ,int ,int ,int ,int ,char*,int,int,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int *,int ,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int * FUNC_4 (TYPE_2__*,int,int,int *) ;
 int FUNC_5 (int *) ;

HBITMAP
FUNC_6(RDPCLIENT * VAR_1, int VAR_2, int VAR_3, uint8 * VAR_4)
{
 XImage *VAR_5;
 Pixmap VAR_6;
 uint8 *VAR_7;
 int VAR_8;

 if (VAR_1->server_depth == 8)
 {
  VAR_8 = 8;
 }
 else
 {
  VAR_8 = VAR_1->xwin.bpp;

  if (VAR_1->xwin.bpp == 24)
   VAR_8 = 32;
 }

 VAR_7 = (VAR_1->owncolmap ? VAR_4 : FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4));
 VAR_6 = FUNC_1(VAR_1->display, VAR_1->wnd, VAR_2, VAR_3, VAR_1->xwin.depth);
 VAR_5 = FUNC_0(VAR_1->display, VAR_1->xwin.visual, VAR_1->xwin.depth, VAR_0, 0,
        (char *) VAR_7, VAR_2, VAR_3, VAR_8, 0);

 FUNC_3(VAR_1->display, VAR_6, VAR_1->xwin.create_bitmap_gc, VAR_5, 0, 0, 0, 0, VAR_2, VAR_3);

 FUNC_2(VAR_5);
 if (VAR_7 != VAR_4)
  FUNC_5(VAR_7);
 return (HBITMAP) VAR_6;
}
