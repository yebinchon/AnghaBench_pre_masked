
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_targets; void** targets; void* format_string_atom; void* format_unicode_atom; void* format_utf8_string_atom; void* rdesktop_clipboard_formats_atom; void* rdesktop_native_atom; void* timestamp_atom; void* targets_atom; void* rdesktop_clipboard_owner_atom; void* rdesktop_primary_owner_atom; int probing_selections; void* rdesktop_selection_notify_atom; void* incr_atom; void* rdesktop_clipboard_timestamp_target_atom; void* rdesktop_primary_timestamp_target_atom; void* rdesktop_clipboard_target_atom; void* clipboard_atom; void* primary_atom; } ;
struct TYPE_6__ {TYPE_1__ xclip; int display; int rdpclip; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(RDPCLIENT * VAR_3)
{
 if (!VAR_3->rdpclip)
  return;

 if (!FUNC_3(VAR_3))
  return;

 VAR_3->xclip.primary_atom = FUNC_1(VAR_3->display, "PRIMARY", VAR_0);
 VAR_3->xclip.clipboard_atom = FUNC_1(VAR_3->display, "CLIPBOARD", VAR_0);
 VAR_3->xclip.targets_atom = FUNC_1(VAR_3->display, "TARGETS", VAR_0);
 VAR_3->xclip.timestamp_atom = FUNC_1(VAR_3->display, "TIMESTAMP", VAR_0);
 VAR_3->xclip.rdesktop_clipboard_target_atom =
  FUNC_1(VAR_3->display, "_RDESKTOP_CLIPBOARD_TARGET", VAR_0);
 VAR_3->xclip.rdesktop_primary_timestamp_target_atom =
  FUNC_1(VAR_3->display, "_RDESKTOP_PRIMARY_TIMESTAMP_TARGET", VAR_0);
 VAR_3->xclip.rdesktop_clipboard_timestamp_target_atom =
  FUNC_1(VAR_3->display, "_RDESKTOP_CLIPBOARD_TIMESTAMP_TARGET", VAR_0);
 VAR_3->xclip.incr_atom = FUNC_1(VAR_3->display, "INCR", VAR_0);
 VAR_3->xclip.format_string_atom = FUNC_1(VAR_3->display, "STRING", VAR_0);
 VAR_3->xclip.format_utf8_string_atom = FUNC_1(VAR_3->display, "UTF8_STRING", VAR_0);
 VAR_3->xclip.format_unicode_atom = FUNC_1(VAR_3->display, "text/unicode", VAR_0);



 VAR_3->xclip.rdesktop_selection_notify_atom =
  FUNC_1(VAR_3->display, "_RDESKTOP_SELECTION_NOTIFY", VAR_0);
 FUNC_2(VAR_3->display, FUNC_0(VAR_3->display), VAR_1);
 VAR_3->xclip.probing_selections = VAR_0;

 VAR_3->xclip.rdesktop_native_atom = FUNC_1(VAR_3->display, "_RDESKTOP_NATIVE", VAR_0);
 VAR_3->xclip.rdesktop_clipboard_formats_atom =
  FUNC_1(VAR_3->display, "_RDESKTOP_CLIPBOARD_FORMATS", VAR_0);
 VAR_3->xclip.rdesktop_primary_owner_atom = FUNC_1(VAR_3->display, "_RDESKTOP_PRIMARY_OWNER", VAR_0);
 VAR_3->xclip.rdesktop_clipboard_owner_atom = FUNC_1(VAR_3->display, "_RDESKTOP_CLIPBOARD_OWNER", VAR_0);

 VAR_3->xclip.num_targets = 0;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.targets_atom;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.timestamp_atom;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.rdesktop_native_atom;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.rdesktop_clipboard_formats_atom;



 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.format_unicode_atom;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_3->xclip.format_string_atom;
 VAR_3->xclip.targets[VAR_3->xclip.num_targets++] = VAR_2;
}
