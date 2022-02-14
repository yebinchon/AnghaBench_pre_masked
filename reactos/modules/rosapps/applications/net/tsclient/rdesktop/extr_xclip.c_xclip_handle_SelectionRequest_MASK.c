
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_12__ {scalar_t__ selection; scalar_t__ target; scalar_t__ property; int requestor; } ;
typedef TYPE_2__ XSelectionRequestEvent ;
struct TYPE_11__ {scalar_t__ targets_atom; int num_targets; scalar_t__ timestamp_atom; scalar_t__ rdesktop_clipboard_formats_atom; int formats_data_length; scalar_t__ rdesktop_native_atom; scalar_t__ format_string_atom; scalar_t__ format_utf8_string_atom; scalar_t__ format_unicode_atom; scalar_t__ has_selection_request; TYPE_2__ selection_request; int * formats_data; int acquire_time; int targets; } ;
struct TYPE_13__ {TYPE_1__ xclip; int display; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int,scalar_t__,scalar_t__,int *,int*,unsigned long*,unsigned long*,unsigned char**) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,scalar_t__,int,int *,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

void
FUNC_7(RDPCLIENT * VAR_7, XSelectionRequestEvent * VAR_8)
{
 unsigned long VAR_9, VAR_10;
 unsigned char *VAR_11;
 int VAR_12, VAR_13;
 Atom VAR_14;

 FUNC_0(("xclip_handle_SelectionRequest: selection=%s, target=%s, property=%s\n",
    FUNC_2(VAR_7->display, VAR_8->selection),
    FUNC_2(VAR_7->display, VAR_8->target),
    FUNC_2(VAR_7->display, VAR_8->property)));

 if (VAR_8->target == VAR_7->xclip.targets_atom)
 {
  FUNC_5(VAR_7, VAR_8, VAR_4, 32, (uint8 *) & VAR_7->xclip.targets, VAR_7->xclip.num_targets);
  return;
 }
 else if (VAR_8->target == VAR_7->xclip.timestamp_atom)
 {
  FUNC_5(VAR_7, VAR_8, VAR_5, 32, (uint8 *) & VAR_7->xclip.acquire_time, 1);
  return;
 }
 else if (VAR_8->target == VAR_7->xclip.rdesktop_clipboard_formats_atom)
 {
  FUNC_5(VAR_7, VAR_8, VAR_6, 8, VAR_7->xclip.formats_data, VAR_7->xclip.formats_data_length);
 }
 else
 {



  if (VAR_7->xclip.has_selection_request)
  {
   FUNC_0(("Error: Another clipboard request was already sent to the RDP server and not yet responded. Refusing this request.\n"));
   FUNC_6(VAR_7, VAR_8);
   return;
  }
  if (VAR_8->target == VAR_7->xclip.rdesktop_native_atom)
  {


   VAR_13 = FUNC_3(VAR_7->display, VAR_8->requestor,
       VAR_8->property, 0, 1, VAR_3,
       VAR_5, &VAR_14, &VAR_12, &VAR_9, &VAR_10,
       &VAR_11);
   if (VAR_13 != VAR_2)
   {
    FUNC_0(("Requested native format but didn't specifiy which.\n"));
    FUNC_6(VAR_7, VAR_8);
    return;
   }

   VAR_12 = *(uint32 *) VAR_11;
   FUNC_1(VAR_11);
  }
  else if (VAR_8->target == VAR_7->xclip.format_string_atom || VAR_8->target == VAR_6)
  {

   VAR_12 = VAR_0;
  }
  else if (VAR_8->target == VAR_7->xclip.format_utf8_string_atom)
  {



   FUNC_0(("Requested target unavailable due to lack of Unicode support. (It was not in TARGETS, so why did you ask for it?!)\n"));
   FUNC_6(VAR_7, VAR_8);
   return;

  }
  else if (VAR_8->target == VAR_7->xclip.format_unicode_atom)
  {

   VAR_12 = VAR_1;
  }
  else
  {
   FUNC_0(("Requested target unavailable. (It was not in TARGETS, so why did you ask for it?!)\n"));
   FUNC_6(VAR_7, VAR_8);
   return;
  }

  FUNC_4(VAR_7, VAR_12);
  VAR_7->xclip.selection_request = *VAR_8;
  VAR_7->xclip.has_selection_request = VAR_3;
  return;
 }
}
