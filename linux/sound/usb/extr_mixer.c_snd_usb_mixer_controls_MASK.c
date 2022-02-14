
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbmix_ctl_map {scalar_t__ id; int ignore_ctl_error; int selector_map; int map; } ;
struct usb_mixer_interface {int protocol; TYPE_2__* hostif; int ignore_ctl_error; TYPE_1__* chip; } ;
struct uac3_output_terminal_descriptor {int bmControls; int bCSourceID; int bSourceID; int wTerminalDescrStr; int wTerminalType; int bTerminalID; } ;
struct uac2_output_terminal_descriptor {int bmControls; int bCSourceID; int bSourceID; void* iTerminal; int wTerminalType; int bTerminalID; } ;
struct uac1_output_terminal_descriptor {int bSourceID; void* iTerminal; int wTerminalType; int bTerminalID; } ;
struct TYPE_6__ {void* name; void* type; int id; } ;
struct mixer_build {TYPE_3__ oterm; struct usb_mixer_interface* mixer; int unitbitmap; int selector_map; int map; TYPE_1__* chip; int buflen; int buffer; } ;
typedef int state ;
struct TYPE_5__ {int extralen; int extra; } ;
struct TYPE_4__ {scalar_t__ usb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_mixer_interface*,TYPE_3__*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mixer_build*,int ,int) ;
 int FUNC_4 (struct mixer_build*,int ) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int ,int ,void*,int ) ;
 int FUNC_7 (void*,int ) ;
 scalar_t__ FUNC_8 (void*,int ) ;
 struct usbmix_ctl_map* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct usb_mixer_interface *VAR_7)
{
 struct mixer_build VAR_8;
 int VAR_9;
 const struct usbmix_ctl_map *VAR_10;
 void *VAR_11;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.chip = VAR_7->chip;
 VAR_8.mixer = VAR_7;
 VAR_8.buffer = VAR_7->hostif->extra;
 VAR_8.buflen = VAR_7->hostif->extralen;


 for (VAR_10 = VAR_6; VAR_10->id; VAR_10++) {
  if (VAR_10->id == VAR_8.chip->usb_id) {
   VAR_8.map = VAR_10->map;
   VAR_8.selector_map = VAR_10->selector_map;
   VAR_7->ignore_ctl_error = VAR_10->ignore_ctl_error;
   break;
  }
 }

 VAR_11 = ((void*)0);
 while ((VAR_11 = FUNC_6(VAR_7->hostif->extra,
         VAR_7->hostif->extralen,
         VAR_11, VAR_3)) != ((void*)0)) {
  if (!FUNC_7(VAR_11, VAR_7->protocol))
   continue;

  if (VAR_7->protocol == VAR_4) {
   struct uac1_output_terminal_descriptor *VAR_12 = VAR_11;


   FUNC_5(VAR_12->bTerminalID, VAR_8.unitbitmap);
   VAR_8.oterm.id = VAR_12->bTerminalID;
   VAR_8.oterm.type = FUNC_1(VAR_12->wTerminalType);
   VAR_8.oterm.name = VAR_12->iTerminal;
   VAR_9 = FUNC_4(&VAR_8, VAR_12->bSourceID);
   if (VAR_9 < 0 && VAR_9 != -VAR_0)
    return VAR_9;
  } else if (VAR_7->protocol == VAR_5) {
   struct uac2_output_terminal_descriptor *VAR_13 = VAR_11;


   FUNC_5(VAR_13->bTerminalID, VAR_8.unitbitmap);
   VAR_8.oterm.id = VAR_13->bTerminalID;
   VAR_8.oterm.type = FUNC_1(VAR_13->wTerminalType);
   VAR_8.oterm.name = VAR_13->iTerminal;
   VAR_9 = FUNC_4(&VAR_8, VAR_13->bSourceID);
   if (VAR_9 < 0 && VAR_9 != -VAR_0)
    return VAR_9;





   VAR_9 = FUNC_4(&VAR_8, VAR_13->bCSourceID);
   if (VAR_9 < 0 && VAR_9 != -VAR_0)
    return VAR_9;

   if (FUNC_8(FUNC_1(VAR_13->bmControls),
        VAR_1)) {
    FUNC_0(VAR_8.mixer, &VAR_8.oterm,
       0);
   }
  } else {
   struct uac3_output_terminal_descriptor *VAR_14 = VAR_11;


   FUNC_5(VAR_14->bTerminalID, VAR_8.unitbitmap);
   VAR_8.oterm.id = VAR_14->bTerminalID;
   VAR_8.oterm.type = FUNC_1(VAR_14->wTerminalType);
   VAR_8.oterm.name = FUNC_1(VAR_14->wTerminalDescrStr);
   VAR_9 = FUNC_4(&VAR_8, VAR_14->bSourceID);
   if (VAR_9 < 0 && VAR_9 != -VAR_0)
    return VAR_9;





   VAR_9 = FUNC_4(&VAR_8, VAR_14->bCSourceID);
   if (VAR_9 < 0 && VAR_9 != -VAR_0)
    return VAR_9;

   if (FUNC_8(FUNC_2(VAR_14->bmControls),
        VAR_2)) {
    FUNC_0(VAR_8.mixer, &VAR_8.oterm,
       0);
   }
  }
 }

 return 0;
}
