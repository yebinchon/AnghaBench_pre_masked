
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int acquire_time; int clipboard_atom; int primary_atom; } ;
struct TYPE_6__ {scalar_t__ wnd; TYPE_1__ xclip; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(RDPCLIENT * VAR_1)
{
 if (FUNC_0(VAR_1->display, VAR_1->xclip.primary_atom) == VAR_1->wnd)
  FUNC_1(VAR_1->display, VAR_1->xclip.primary_atom, VAR_0, VAR_1->xclip.acquire_time);
 if (FUNC_0(VAR_1->display, VAR_1->xclip.clipboard_atom) == VAR_1->wnd)
  FUNC_1(VAR_1->display, VAR_1->xclip.clipboard_atom, VAR_0, VAR_1->xclip.acquire_time);
 FUNC_2(VAR_1);
}
