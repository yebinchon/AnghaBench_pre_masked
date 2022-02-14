
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int XPoint ;
struct TYPE_11__ {int yoffset; int xoffset; int wnd; } ;
struct TYPE_10__ {int colour; } ;
struct TYPE_8__ {int gc; int backstore; } ;
struct TYPE_9__ {TYPE_1__ xwin; int display; scalar_t__ ownbackstore; int wnd; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int POINT ;
typedef TYPE_3__ PEN ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,int,int ) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;

void
FUNC_5(RDPCLIENT * VAR_3, uint8 VAR_4,
                POINT * VAR_5, int VAR_6,
               PEN * VAR_7)
{

 FUNC_3(VAR_4);
 FUNC_2(VAR_7->colour);
 FUNC_4(VAR_3->display, VAR_3->wnd, VAR_3->xwin.gc, (XPoint *) VAR_5, VAR_6, VAR_0);
 if (VAR_3->ownbackstore)
  FUNC_4(VAR_3->display, VAR_3->xwin.backstore, VAR_3->xwin.gc, (XPoint *) VAR_5, VAR_6,
      VAR_0);

 FUNC_0(VAR_1,
    (VAR_3, VAR_2->wnd, (XPoint *) VAR_5, VAR_6, VAR_2->xoffset, VAR_2->yoffset));

 FUNC_1(VAR_4);
}
