
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ Window ;
struct TYPE_6__ {void* probing_selections; int rdesktop_clipboard_target_atom; int targets_atom; int clipboard_atom; int primary_atom; int rdesktop_clipboard_timestamp_target_atom; int timestamp_atom; int rdesktop_primary_timestamp_target_atom; scalar_t__ clipboard_timestamp; scalar_t__ primary_timestamp; scalar_t__ auto_mode; void* reprobe_selections; } ;
struct TYPE_7__ {scalar_t__ wnd; TYPE_1__ xclip; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_5)
{
 Window VAR_6, VAR_7;

 if (VAR_5->xclip.probing_selections)
 {
  FUNC_0(("Already probing selections. Scheduling reprobe.\n"));
  VAR_5->xclip.reprobe_selections = VAR_4;
  return;
 }

 FUNC_0(("Probing selections.\n"));

 VAR_5->xclip.probing_selections = VAR_4;
 VAR_5->xclip.reprobe_selections = VAR_1;

 FUNC_4(VAR_5);

 if (VAR_5->xclip.auto_mode)
  VAR_6 = FUNC_2(VAR_5->display, VAR_5->xclip.primary_atom);
 else
  VAR_6 = VAR_2;

 VAR_7 = FUNC_2(VAR_5->display, VAR_5->xclip.clipboard_atom);


 if (((VAR_6 == VAR_5->wnd) || !VAR_5->xclip.auto_mode) && (VAR_7 == VAR_5->wnd))
  goto end;


 if ((VAR_6 != VAR_2) && (VAR_7 != VAR_2))
 {
  VAR_5->xclip.primary_timestamp = 0;
  VAR_5->xclip.clipboard_timestamp = 0;
  FUNC_1(VAR_5->display, VAR_5->xclip.primary_atom, VAR_5->xclip.timestamp_atom,
      VAR_5->xclip.rdesktop_primary_timestamp_target_atom, VAR_5->wnd, VAR_0);
  FUNC_1(VAR_5->display, VAR_5->xclip.clipboard_atom, VAR_5->xclip.timestamp_atom,
      VAR_5->xclip.rdesktop_clipboard_timestamp_target_atom, VAR_5->wnd, VAR_0);
  return;
 }


 if (VAR_6 != VAR_2)
 {
  FUNC_1(VAR_5->display, VAR_5->xclip.primary_atom, VAR_5->xclip.targets_atom,
      VAR_5->xclip.rdesktop_clipboard_target_atom, VAR_5->wnd, VAR_0);
  return;
 }


 if (VAR_7 != VAR_2)
 {
  FUNC_1(VAR_5->display, VAR_5->xclip.clipboard_atom, VAR_5->xclip.targets_atom,
      VAR_5->xclip.rdesktop_clipboard_target_atom, VAR_5->wnd, VAR_0);
  return;
 }

 FUNC_0(("No owner of any selection.\n"));





 FUNC_3(VAR_5, VAR_3);

      end:
 VAR_5->xclip.probing_selections = VAR_1;
}
