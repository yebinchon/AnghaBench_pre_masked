
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; int width; int height; } ;
struct TYPE_5__ {TYPE_4__ clip_rectangle; int gc; } ;
struct TYPE_6__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_4__*,int,int ) ;
 int VAR_0 ;

void
FUNC_1(RDPCLIENT * VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 VAR_1->xwin.clip_rectangle.x = VAR_2;
 VAR_1->xwin.clip_rectangle.y = VAR_3;
 VAR_1->xwin.clip_rectangle.width = VAR_4;
 VAR_1->xwin.clip_rectangle.height = VAR_5;
 FUNC_0(VAR_1->display, VAR_1->xwin.gc, 0, 0, &VAR_1->xwin.clip_rectangle, 1, VAR_0);
}
