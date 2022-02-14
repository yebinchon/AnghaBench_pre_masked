
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iManufacturer; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct snd_usb_audio_quirk {scalar_t__* vendor_name; scalar_t__* profile_name; } ;
struct snd_usb_audio {struct snd_card* card; } ;
struct snd_card {char* shortname; scalar_t__* longname; } ;







 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,char*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (struct usb_device*,scalar_t__*,int) ;
 int FUNC_5 (struct usb_device*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_6(struct usb_device *VAR_0,
        struct snd_usb_audio *VAR_1,
        const struct snd_usb_audio_quirk *VAR_2)
{
 struct snd_card *VAR_3 = VAR_1->card;
 int VAR_4;


 if (VAR_2 && VAR_2->profile_name && *VAR_2->profile_name) {
  FUNC_3(VAR_3->longname, VAR_2->profile_name,
   sizeof(VAR_3->longname));
  return;
 }

 if (VAR_2 && VAR_2->vendor_name && *VAR_2->vendor_name) {
  VAR_4 = FUNC_3(VAR_3->longname, VAR_2->vendor_name, sizeof(VAR_3->longname));
 } else {

  if (VAR_0->descriptor.iManufacturer)
   VAR_4 = FUNC_5(VAR_0, VAR_0->descriptor.iManufacturer,
      VAR_3->longname, sizeof(VAR_3->longname));
  else
   VAR_4 = 0;

 }
 if (VAR_4 > 0) {
  FUNC_1(VAR_3->longname);
  if (*VAR_3->longname)
   FUNC_2(VAR_3->longname, " ", sizeof(VAR_3->longname));
 }

 FUNC_2(VAR_3->longname, VAR_3->shortname, sizeof(VAR_3->longname));

 VAR_4 = FUNC_2(VAR_3->longname, " at ", sizeof(VAR_3->longname));

 if (VAR_4 < sizeof(VAR_3->longname))
  FUNC_4(VAR_0, VAR_3->longname + VAR_4, sizeof(VAR_3->longname) - VAR_4);

 switch (FUNC_0(VAR_0)) {
 case 130:
  FUNC_2(VAR_3->longname, ", low speed", sizeof(VAR_3->longname));
  break;
 case 132:
  FUNC_2(VAR_3->longname, ", full speed", sizeof(VAR_3->longname));
  break;
 case 131:
  FUNC_2(VAR_3->longname, ", high speed", sizeof(VAR_3->longname));
  break;
 case 129:
  FUNC_2(VAR_3->longname, ", super speed", sizeof(VAR_3->longname));
  break;
 case 128:
  FUNC_2(VAR_3->longname, ", super speed plus", sizeof(VAR_3->longname));
  break;
 default:
  break;
 }
}
