
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rdesktop_clipboard_timestamp_target_atom; int rdesktop_primary_timestamp_target_atom; int rdesktop_clipboard_target_atom; } ;
struct TYPE_5__ {TYPE_1__ xclip; int wnd; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(RDPCLIENT * VAR_0)
{
 FUNC_0(VAR_0->display, VAR_0->wnd, VAR_0->xclip.rdesktop_clipboard_target_atom);
 FUNC_0(VAR_0->display, VAR_0->wnd, VAR_0->xclip.rdesktop_primary_timestamp_target_atom);
 FUNC_0(VAR_0->display, VAR_0->wnd, VAR_0->xclip.rdesktop_clipboard_timestamp_target_atom);
}
