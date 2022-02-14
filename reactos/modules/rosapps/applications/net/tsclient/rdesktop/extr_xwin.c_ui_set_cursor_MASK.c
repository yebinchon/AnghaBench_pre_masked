
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int wnd; } ;
struct TYPE_5__ {scalar_t__ current_cursor; } ;
struct TYPE_6__ {TYPE_1__ xwin; int display; int wnd; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef scalar_t__ HCURSOR ;
typedef scalar_t__ Cursor ;


 int FUNC_0 (int (*) (int ,int ,scalar_t__),int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 TYPE_4__* VAR_0 ;

void
FUNC_2(RDPCLIENT * VAR_1, HCURSOR VAR_2)
{
 VAR_1->xwin.current_cursor = (Cursor) VAR_2;
 FUNC_1(VAR_1->display, VAR_1->wnd, VAR_1->xwin.current_cursor);
 FUNC_0(FUNC_1, (VAR_1->display, VAR_0->wnd, VAR_1->xwin.current_cursor));
}
