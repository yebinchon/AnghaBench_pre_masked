
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * IC; } ;
struct TYPE_5__ {int wnd; int display; TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(RDPCLIENT * VAR_0)
{
 if (VAR_0->xwin.IC != ((void*)0))
  FUNC_0(VAR_0->xwin.IC);

 FUNC_1(VAR_0->display, VAR_0->wnd);
}
