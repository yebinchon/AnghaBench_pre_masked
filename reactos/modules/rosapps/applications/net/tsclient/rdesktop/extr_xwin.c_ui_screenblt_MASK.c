
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_7__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_5__ {int gc; int backstore; } ;
struct TYPE_6__ {TYPE_1__ xwin; int wnd; scalar_t__ ownbackstore; int display; scalar_t__ Unobscured; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int (*) (int ,int ,int ,int ,int,int,int,int,int,int),int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 TYPE_4__* VAR_0 ;

void
FUNC_4(RDPCLIENT * VAR_1, uint8 VAR_2,
                 int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                int VAR_7, int VAR_8)
{
 FUNC_2(VAR_2);
 if (VAR_1->ownbackstore)
 {
  FUNC_3(VAR_1->display, VAR_1->Unobscured ? VAR_1->wnd : VAR_1->xwin.backstore,
     VAR_1->wnd, VAR_1->xwin.gc, VAR_7, VAR_8, VAR_5, VAR_6, VAR_3, VAR_4);
  FUNC_3(VAR_1->display, VAR_1->xwin.backstore, VAR_1->xwin.backstore, VAR_1->xwin.gc, VAR_7, VAR_8, VAR_5, VAR_6, VAR_3, VAR_4);
 }
 else
 {
  FUNC_3(VAR_1->display, VAR_1->wnd, VAR_1->wnd, VAR_1->xwin.gc, VAR_7, VAR_8, VAR_5, VAR_6, VAR_3, VAR_4);
 }

 FUNC_0(FUNC_3,
    (VAR_1->display, VAR_1->ownbackstore ? VAR_1->xwin.backstore : VAR_1->wnd,
     VAR_0->wnd, VAR_1->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6, VAR_3 - VAR_0->xoffset, VAR_4 - VAR_0->yoffset));

 FUNC_1(VAR_2);
}
