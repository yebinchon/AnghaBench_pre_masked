
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_10__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_9__ {int colour; } ;
struct TYPE_7__ {int gc; int backstore; } ;
struct TYPE_8__ {TYPE_1__ xwin; int display; scalar_t__ ownbackstore; int wnd; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ PEN ;


 int FUNC_0 (int (*) (int ,int ,int ,int,int,int,int),int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int,int) ;
 TYPE_6__* VAR_0 ;

void
FUNC_5(RDPCLIENT * VAR_1, uint8 VAR_2,
            int VAR_3, int VAR_4, int VAR_5, int VAR_6,
           PEN * VAR_7)
{
 FUNC_3(VAR_2);
 FUNC_2(VAR_7->colour);
 FUNC_4(VAR_1->display, VAR_1->wnd, VAR_1->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(FUNC_4, (VAR_1->display, VAR_0->wnd, VAR_1->xwin.gc,
         VAR_3 - VAR_0->xoffset, VAR_4 - VAR_0->yoffset,
         VAR_5 - VAR_0->xoffset, VAR_6 - VAR_0->yoffset));
 if (VAR_1->ownbackstore)
  FUNC_4(VAR_1->display, VAR_1->xwin.backstore, VAR_1->xwin.gc, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_2);
}
