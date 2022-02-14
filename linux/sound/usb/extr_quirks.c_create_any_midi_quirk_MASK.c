
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio_quirk {int dummy; } ;
struct snd_usb_audio {int midi_list; int card; } ;


 int FUNC_0 (int ,struct usb_interface*,int *,struct snd_usb_audio_quirk const*) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_audio *VAR_0,
     struct usb_interface *VAR_1,
     struct usb_driver *VAR_2,
     const struct snd_usb_audio_quirk *VAR_3)
{
 return FUNC_0(VAR_0->card, VAR_1, &VAR_0->midi_list, VAR_3);
}
