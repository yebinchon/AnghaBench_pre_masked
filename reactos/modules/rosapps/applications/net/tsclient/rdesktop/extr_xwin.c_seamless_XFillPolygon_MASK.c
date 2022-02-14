
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
typedef TYPE_2__ XPoint ;
struct TYPE_7__ {int gc; } ;
struct TYPE_9__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int Drawable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,TYPE_2__*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(RDPCLIENT * VAR_2, Drawable VAR_3, XPoint * VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 VAR_4[0].x -= VAR_6;
 VAR_4[0].y -= VAR_7;
 FUNC_0(VAR_2->display, VAR_3, VAR_2->xwin.gc, VAR_4, VAR_5, VAR_0, VAR_1);
 VAR_4[0].x += VAR_6;
 VAR_4[0].y += VAR_7;
}
