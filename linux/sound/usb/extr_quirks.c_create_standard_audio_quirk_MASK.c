
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio_quirk {int dummy; } ;
struct snd_usb_audio {scalar_t__ usb_id; int tx_length_quirk; int dev; } ;


 scalar_t__ FUNC_0 (int,int) ;
 struct usb_interface_descriptor* FUNC_1 (struct usb_host_interface*) ;
 int FUNC_2 (struct snd_usb_audio*,int ) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_0,
           struct usb_interface *VAR_1,
           struct usb_driver *VAR_2,
           const struct snd_usb_audio_quirk *VAR_3)
{
 struct usb_host_interface *VAR_4;
 struct usb_interface_descriptor *VAR_5;
 int VAR_6;

 if (VAR_0->usb_id == FUNC_0(0x1686, 0x00dd))
  VAR_0->tx_length_quirk = 1;

 VAR_4 = &VAR_1->altsetting[0];
 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = FUNC_2(VAR_0, VAR_5->bInterfaceNumber);
 if (VAR_6 < 0) {
  FUNC_3(VAR_0, "cannot setup if %d: error %d\n",
      VAR_5->bInterfaceNumber, VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_0->dev, VAR_5->bInterfaceNumber, 0);
 return 0;
}
