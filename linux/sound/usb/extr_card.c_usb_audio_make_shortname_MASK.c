
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct snd_usb_audio_quirk {scalar_t__* product_name; } ;
struct snd_usb_audio {int usb_id; struct snd_card* card; } ;
struct snd_card {int shortname; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (struct usb_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct usb_device *VAR_0,
         struct snd_usb_audio *VAR_1,
         const struct snd_usb_audio_quirk *VAR_2)
{
 struct snd_card *VAR_3 = VAR_1->card;

 if (VAR_2 && VAR_2->product_name && *VAR_2->product_name) {
  FUNC_4(VAR_3->shortname, VAR_2->product_name,
   sizeof(VAR_3->shortname));
  return;
 }


 if (!VAR_0->descriptor.iProduct ||
     FUNC_5(VAR_0, VAR_0->descriptor.iProduct,
         VAR_3->shortname, sizeof(VAR_3->shortname)) <= 0) {

  FUNC_2(VAR_3->shortname, "USB Device %#04x:%#04x",
   FUNC_1(VAR_1->usb_id),
   FUNC_0(VAR_1->usb_id));
 }

 FUNC_3(VAR_3->shortname);
}
