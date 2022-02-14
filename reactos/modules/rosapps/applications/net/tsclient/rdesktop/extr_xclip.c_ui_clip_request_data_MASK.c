
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ Window ;
struct TYPE_6__ {int rdesktop_clipboard_target_atom; int targets_atom; int clipboard_atom; int primary_atom; int rdesktop_clipboard_timestamp_target_atom; int timestamp_atom; int rdesktop_primary_timestamp_target_atom; scalar_t__ clipboard_timestamp; scalar_t__ primary_timestamp; scalar_t__ auto_mode; int rdesktop_native_atom; scalar_t__ rdesktop_is_selection_owner; scalar_t__ probing_selections; int rdp_clipboard_request_format; } ;
struct TYPE_7__ {int wnd; TYPE_1__ xclip; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(RDPCLIENT * VAR_4, uint32 VAR_5)
{
 Window VAR_6, VAR_7;

 FUNC_0(("Request from server for format %d\n", VAR_5));
 VAR_4->xclip.rdp_clipboard_request_format = VAR_5;

 if (VAR_4->xclip.probing_selections)
 {
  FUNC_0(("ui_clip_request_data: Selection probe in progress. Cannot handle request.\n"));
  FUNC_4(VAR_4);
  return;
 }

 FUNC_5(VAR_4);

 if (VAR_4->xclip.rdesktop_is_selection_owner)
 {
  FUNC_1(VAR_4->display, VAR_4->wnd, VAR_4->xclip.rdesktop_clipboard_target_atom,
    VAR_3, 32, VAR_2, (unsigned char *) &VAR_5, 1);

  FUNC_2(VAR_4->display, VAR_4->xclip.primary_atom, VAR_4->xclip.rdesktop_native_atom,
      VAR_4->xclip.rdesktop_clipboard_target_atom, VAR_4->wnd, VAR_0);
  return;
 }

 if (VAR_4->xclip.auto_mode)
  VAR_6 = FUNC_3(VAR_4->display, VAR_4->xclip.primary_atom);
 else
  VAR_6 = VAR_1;

 VAR_7 = FUNC_3(VAR_4->display, VAR_4->xclip.clipboard_atom);


 if ((VAR_6 != VAR_1) && (VAR_7 != VAR_1))
 {
  VAR_4->xclip.primary_timestamp = 0;
  VAR_4->xclip.clipboard_timestamp = 0;
  FUNC_2(VAR_4->display, VAR_4->xclip.primary_atom, VAR_4->xclip.timestamp_atom,
      VAR_4->xclip.rdesktop_primary_timestamp_target_atom, VAR_4->wnd, VAR_0);
  FUNC_2(VAR_4->display, VAR_4->xclip.clipboard_atom, VAR_4->xclip.timestamp_atom,
      VAR_4->xclip.rdesktop_clipboard_timestamp_target_atom, VAR_4->wnd, VAR_0);
  return;
 }


 if (VAR_6 != VAR_1)
 {
  FUNC_2(VAR_4->display, VAR_4->xclip.primary_atom, VAR_4->xclip.targets_atom,
      VAR_4->xclip.rdesktop_clipboard_target_atom, VAR_4->wnd, VAR_0);
  return;
 }


 if (VAR_7 != VAR_1)
 {
  FUNC_2(VAR_4->display, VAR_4->xclip.clipboard_atom, VAR_4->xclip.targets_atom,
      VAR_4->xclip.rdesktop_clipboard_target_atom, VAR_4->wnd, VAR_0);
  return;
 }


 FUNC_4(VAR_4);
}
