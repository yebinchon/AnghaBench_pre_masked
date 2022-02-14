
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_9__ {scalar_t__ data; int bytes_per_line; } ;
typedef TYPE_2__ XImage ;
struct TYPE_8__ {int bpp; int gc; int depth; int backstore; } ;
struct TYPE_10__ {TYPE_1__ xwin; int display; int wnd; scalar_t__ ownbackstore; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int Pixmap ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,int ,int,int,int,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int,int,int,int ,int,int *) ;

void
FUNC_6(RDPCLIENT * VAR_2, uint32 VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 Pixmap VAR_8;
 XImage *VAR_9;

 if (VAR_2->ownbackstore)
 {
  VAR_9 = FUNC_4(VAR_2->display, VAR_2->xwin.backstore, VAR_4, VAR_5, VAR_6, VAR_7, VAR_0, VAR_1);
 }
 else
 {
  VAR_8 = FUNC_1(VAR_2->display, VAR_2->wnd, VAR_6, VAR_7, VAR_2->xwin.depth);
  FUNC_0(VAR_2->display, VAR_2->wnd, VAR_8, VAR_2->xwin.gc, VAR_4, VAR_5, VAR_6, VAR_7, 0, 0);
  VAR_9 = FUNC_4(VAR_2->display, VAR_8, 0, 0, VAR_6, VAR_7, VAR_0, VAR_1);
  FUNC_3(VAR_2->display, VAR_8);
 }

 VAR_3 *= VAR_2->xwin.bpp / 8;
 FUNC_5(VAR_2, VAR_3, VAR_6, VAR_7, VAR_9->bytes_per_line, VAR_2->xwin.bpp / 8, (uint8 *) VAR_9->data);

 FUNC_2(VAR_9);
}
